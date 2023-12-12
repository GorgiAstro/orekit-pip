#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservedMeasurement::class$ = NULL;
        jmethodID *ObservedMeasurement::mids$ = NULL;
        bool ObservedMeasurement::live$ = false;

        jclass ObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_eae039ee8c8a4a4d] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_a53a7513ecedada2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_3cffd47377eca18a] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getSatellites_0d9551367f7ecdef] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_89b302893bdbe1f1] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_ed2afdb8506b9742] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ObservedMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_6f472135bf397672], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement ObservedMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_eae039ee8c8a4a4d], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase ObservedMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_71d69ca0f7c280a7], a0, a1, a2.this$));
        }

        JArray< jdouble > ObservedMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_a53a7513ecedada2]));
        }

        jint ObservedMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        ::java::lang::String ObservedMeasurement::getMeasurementType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeasurementType_3cffd47377eca18a]));
        }

        ::java::util::List ObservedMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_0d9551367f7ecdef]));
        }

        ::java::util::List ObservedMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_0d9551367f7ecdef]));
        }

        JArray< jdouble > ObservedMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2]));
        }

        jboolean ObservedMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_89b302893bdbe1f1]);
        }

        void ObservedMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_ed2afdb8506b9742], a0);
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
        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data);
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data);
        static PyGetSetDef t_ObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ObservedMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_ObservedMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_ObservedMeasurement, enabled),
          DECLARE_GET_FIELD(t_ObservedMeasurement, measurementType),
          DECLARE_GET_FIELD(t_ObservedMeasurement, modifiers),
          DECLARE_GET_FIELD(t_ObservedMeasurement, satellites),
          DECLARE_GET_FIELD(t_ObservedMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_ObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_ObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_ObservedMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getMeasurementType, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, setEnabled, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservedMeasurement)[] = {
          { Py_tp_methods, t_ObservedMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::ComparableMeasurement),
          NULL
        };

        DEFINE_TYPE(ObservedMeasurement, t_ObservedMeasurement, ObservedMeasurement);
        PyObject *t_ObservedMeasurement::wrap_Object(const ObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservedMeasurement), &PY_TYPE_DEF(ObservedMeasurement), module, "ObservedMeasurement", 0);
        }

        void t_ObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "class_", make_descriptor(ObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "wrapfn_", make_descriptor(t_ObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_ObservedMeasurement::wrap_Object(ObservedMeasurement(((t_ObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg)
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

        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementType());
          return j2p(result);
        }

        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementType());
          return j2p(value);
        }

        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory::class$ = NULL;
        jmethodID *DSFactory::mids$ = NULL;
        bool DSFactory::live$ = false;

        jclass DSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_build_51e3f3a70c0b0650] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_constant_e5494538980257b4] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getCompiler_dfc048d343f51ab1] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_878cd2801368be59] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/DSFactory$DSField;");
            mids$[mid_variable_9f9d1a368b0a2baf] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSFactory::DSFactory(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_51e3f3a70c0b0650], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_e5494538980257b4], a0));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler DSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_dfc048d343f51ab1]));
        }

        ::org::hipparchus::analysis::differentiation::DSFactory$DSField DSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory$DSField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_878cd2801368be59]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_9f9d1a368b0a2baf], a0, a1));
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
        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self);
        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self);
        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args);
        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data);
        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data);
        static PyGetSetDef t_DSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory, compiler),
          DECLARE_GET_FIELD(t_DSFactory, derivativeField),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory__methods_[] = {
          DECLARE_METHOD(t_DSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, build, METH_O),
          DECLARE_METHOD(t_DSFactory, constant, METH_O),
          DECLARE_METHOD(t_DSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory)[] = {
          { Py_tp_methods, t_DSFactory__methods_ },
          { Py_tp_init, (void *) t_DSFactory_init_ },
          { Py_tp_getset, t_DSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory, t_DSFactory, DSFactory);

        void t_DSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory), &PY_TYPE_DEF(DSFactory), module, "DSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "DSField", make_descriptor(&PY_TYPE_DEF(DSFactory$DSField)));
        }

        void t_DSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "class_", make_descriptor(DSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "wrapfn_", make_descriptor(t_DSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory::initializeClass, 1)))
            return NULL;
          return t_DSFactory::wrap_Object(DSFactory(((t_DSFactory *) arg)->object.this$));
        }
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          DSFactory object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = DSFactory(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.build(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(result);
        }

        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.variable(a0, a1));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }

        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_13b63796f0ca3528] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD)V");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLJu_557b8123390d8d0c] = env->getMethodID(cls, "getLJu", "()D");
          mids$[mid_getLJuDot_557b8123390d8d0c] = env->getMethodID(cls, "getLJuDot", "()D");
          mids$[mid_getLMa_557b8123390d8d0c] = env->getMethodID(cls, "getLMa", "()D");
          mids$[mid_getLMaDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMaDot", "()D");
          mids$[mid_getLMe_557b8123390d8d0c] = env->getMethodID(cls, "getLMe", "()D");
          mids$[mid_getLMeDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMeDot", "()D");
          mids$[mid_getLNe_557b8123390d8d0c] = env->getMethodID(cls, "getLNe", "()D");
          mids$[mid_getLNeDot_557b8123390d8d0c] = env->getMethodID(cls, "getLNeDot", "()D");
          mids$[mid_getLSa_557b8123390d8d0c] = env->getMethodID(cls, "getLSa", "()D");
          mids$[mid_getLSaDot_557b8123390d8d0c] = env->getMethodID(cls, "getLSaDot", "()D");
          mids$[mid_getLUr_557b8123390d8d0c] = env->getMethodID(cls, "getLUr", "()D");
          mids$[mid_getLUrDot_557b8123390d8d0c] = env->getMethodID(cls, "getLUrDot", "()D");
          mids$[mid_getLVe_557b8123390d8d0c] = env->getMethodID(cls, "getLVe", "()D");
          mids$[mid_getLVeDot_557b8123390d8d0c] = env->getMethodID(cls, "getLVeDot", "()D");
          mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
          mids$[mid_getPaDot_557b8123390d8d0c] = env->getMethodID(cls, "getPaDot", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodiesElements::BodiesElements(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jdouble a16, jdouble a17, jdouble a18, jdouble a19, jdouble a20, jdouble a21, jdouble a22, jdouble a23, jdouble a24, jdouble a25, jdouble a26, jdouble a27, jdouble a28, jdouble a29, jdouble a30, jdouble a31) : ::org::orekit::data::DelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_13b63796f0ca3528, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31)) {}

      jdouble BodiesElements::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLJu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJu_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLJuDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJuDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLMa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMa_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLMaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMaDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLMe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMe_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLMeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMeDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLNe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNe_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLNeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNeDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLSa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSa_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLSaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSaDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLUr() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUr_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLUrDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUrDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLVe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVe_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getLVeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVeDot_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getPa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
      }

      jdouble BodiesElements::getPaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPaDot_557b8123390d8d0c]);
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
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeBuilder::class$ = NULL;
      jmethodID *PythonAttitudeBuilder::mids$ = NULL;
      bool PythonAttitudeBuilder::live$ = false;

      jclass PythonAttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_build_4329b81cdba13b7b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_76e687ee866bdc48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeBuilder::PythonAttitudeBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAttitudeBuilder::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAttitudeBuilder::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAttitudeBuilder::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self);
      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data);
      static PyGetSetDef t_PythonAttitudeBuilder__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeBuilder, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeBuilder)[] = {
        { Py_tp_methods, t_PythonAttitudeBuilder__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeBuilder_init_ },
        { Py_tp_getset, t_PythonAttitudeBuilder__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeBuilder, t_PythonAttitudeBuilder, PythonAttitudeBuilder);

      void t_PythonAttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeBuilder), &PY_TYPE_DEF(PythonAttitudeBuilder), module, "PythonAttitudeBuilder", 1);
      }

      void t_PythonAttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "class_", make_descriptor(PythonAttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "wrapfn_", make_descriptor(t_PythonAttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeBuilder::initializeClass);
        JNINativeMethod methods[] = {
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeBuilder_build0 },
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeBuilder_build1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeBuilder_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeBuilder::wrap_Object(PythonAttitudeBuilder(((t_PythonAttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeBuilder object((jobject) NULL);

        INT_CALL(object = PythonAttitudeBuilder());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedFieldAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeSupplement::class$ = NULL;
        jmethodID *CRD$RangeSupplement::mids$ = NULL;
        bool CRD$RangeSupplement::live$ = false;

        jclass CRD$RangeSupplement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeSupplement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_956b6a53861e670b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;DDDDD)V");
            mids$[mid_getCenterOfMassCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getCenterOfMassCorrection", "()D");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getNdFilterValue_557b8123390d8d0c] = env->getMethodID(cls, "getNdFilterValue", "()D");
            mids$[mid_getRangeRate_557b8123390d8d0c] = env->getMethodID(cls, "getRangeRate", "()D");
            mids$[mid_getSystemConfigurationId_3cffd47377eca18a] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeBiasApplied_557b8123390d8d0c] = env->getMethodID(cls, "getTimeBiasApplied", "()D");
            mids$[mid_getTroposphericRefractionCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getTroposphericRefractionCorrection", "()D");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeSupplement::CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_956b6a53861e670b, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

        jdouble CRD$RangeSupplement::getCenterOfMassCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassCorrection_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate CRD$RangeSupplement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jdouble CRD$RangeSupplement::getNdFilterValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNdFilterValue_557b8123390d8d0c]);
        }

        jdouble CRD$RangeSupplement::getRangeRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRangeRate_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$RangeSupplement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_3cffd47377eca18a]));
        }

        jdouble CRD$RangeSupplement::getTimeBiasApplied() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeBiasApplied_557b8123390d8d0c]);
        }

        jdouble CRD$RangeSupplement::getTroposphericRefractionCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTroposphericRefractionCorrection_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$RangeSupplement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$RangeSupplement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args);
        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyGetSetDef t_CRD$RangeSupplement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, centerOfMassCorrection),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, date),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, ndFilterValue),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, rangeRate),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, timeBiasApplied),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, troposphericRefractionCorrection),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeSupplement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeSupplement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getCenterOfMassCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getNdFilterValue, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getRangeRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTimeBiasApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTroposphericRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeSupplement)[] = {
          { Py_tp_methods, t_CRD$RangeSupplement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeSupplement_init_ },
          { Py_tp_getset, t_CRD$RangeSupplement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeSupplement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeSupplement, t_CRD$RangeSupplement, CRD$RangeSupplement);

        void t_CRD$RangeSupplement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeSupplement), &PY_TYPE_DEF(CRD$RangeSupplement), module, "CRD$RangeSupplement", 0);
        }

        void t_CRD$RangeSupplement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "class_", make_descriptor(CRD$RangeSupplement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "wrapfn_", make_descriptor(t_CRD$RangeSupplement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeSupplement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeSupplement::wrap_Object(CRD$RangeSupplement(((t_CRD$RangeSupplement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeSupplement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          jdouble a6;
          CRD$RangeSupplement object((jobject) NULL);

          if (!parseArgs(args, "ksDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = CRD$RangeSupplement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRangeRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$RangeSupplement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRangeRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Pow.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Pow::class$ = NULL;
        jmethodID *Pow::mids$ = NULL;
        bool Pow::live$ = false;

        jclass Pow::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Pow");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Pow::Pow() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Pow::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Pow_value(t_Pow *self, PyObject *args);

        static PyMethodDef t_Pow__methods_[] = {
          DECLARE_METHOD(t_Pow, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Pow)[] = {
          { Py_tp_methods, t_Pow__methods_ },
          { Py_tp_init, (void *) t_Pow_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Pow)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Pow, t_Pow, Pow);

        void t_Pow::install(PyObject *module)
        {
          installType(&PY_TYPE(Pow), &PY_TYPE_DEF(Pow), module, "Pow", 0);
        }

        void t_Pow::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "class_", make_descriptor(Pow::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "wrapfn_", make_descriptor(t_Pow::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Pow::initializeClass, 1)))
            return NULL;
          return t_Pow::wrap_Object(Pow(((t_Pow *) arg)->object.this$));
        }
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Pow::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds)
        {
          Pow object((jobject) NULL);

          INT_CALL(object = Pow());
          self->object = object;

          return 0;
        }

        static PyObject *t_Pow_value(t_Pow *self, PyObject *args)
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
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *AttitudeEphemerisFileParser::mids$ = NULL;
        bool AttitudeEphemerisFileParser::live$ = false;

        jclass AttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_10d7b05ae96f3423] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::AttitudeEphemerisFile AttitudeEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::AttitudeEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_10d7b05ae96f3423], a0.this$));
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
        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileParser, t_AttitudeEphemerisFileParser, AttitudeEphemerisFileParser);
        PyObject *t_AttitudeEphemerisFileParser::wrap_Object(const AttitudeEphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileParser), &PY_TYPE_DEF(AttitudeEphemerisFileParser), module, "AttitudeEphemerisFileParser", 0);
        }

        void t_AttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "class_", make_descriptor(AttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileParser::wrap_Object(AttitudeEphemerisFileParser(((t_AttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::AttitudeEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoAlmanac::class$ = NULL;
            jmethodID *GalileoAlmanac::mids$ = NULL;
            bool GalileoAlmanac::live$ = false;

            jclass GalileoAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealthE1_412668abc8d889e9] = env->getMethodID(cls, "getHealthE1", "()I");
                mids$[mid_getHealthE5a_412668abc8d889e9] = env->getMethodID(cls, "getHealthE5a", "()I");
                mids$[mid_getHealthE5b_412668abc8d889e9] = env->getMethodID(cls, "getHealthE5b", "()I");
                mids$[mid_getIOD_412668abc8d889e9] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_setDeltaInc_10f281d777284cea] = env->getMethodID(cls, "setDeltaInc", "(D)V");
                mids$[mid_setDeltaSqrtA_10f281d777284cea] = env->getMethodID(cls, "setDeltaSqrtA", "(D)V");
                mids$[mid_setHealthE1_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealthE1", "(I)V");
                mids$[mid_setHealthE5a_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealthE5a", "(I)V");
                mids$[mid_setHealthE5b_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealthE5b", "(I)V");
                mids$[mid_setIOD_a3da1a935cb37f7b] = env->getMethodID(cls, "setIOD", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoAlmanac::GalileoAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint GalileoAlmanac::getHealthE1() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE1_412668abc8d889e9]);
            }

            jint GalileoAlmanac::getHealthE5a() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5a_412668abc8d889e9]);
            }

            jint GalileoAlmanac::getHealthE5b() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5b_412668abc8d889e9]);
            }

            jint GalileoAlmanac::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_412668abc8d889e9]);
            }

            void GalileoAlmanac::setDeltaInc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaInc_10f281d777284cea], a0);
            }

            void GalileoAlmanac::setDeltaSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaSqrtA_10f281d777284cea], a0);
            }

            void GalileoAlmanac::setHealthE1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE1_a3da1a935cb37f7b], a0);
            }

            void GalileoAlmanac::setHealthE5a(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5a_a3da1a935cb37f7b], a0);
            }

            void GalileoAlmanac::setHealthE5b(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5b_a3da1a935cb37f7b], a0);
            }

            void GalileoAlmanac::setIOD(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIOD_a3da1a935cb37f7b], a0);
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
            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg);
            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaInc),
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaSqrtA),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE1),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5a),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5b),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, iOD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoAlmanac__methods_[] = {
              DECLARE_METHOD(t_GalileoAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5b, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaInc, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaSqrtA, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE1, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5a, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5b, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setIOD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoAlmanac)[] = {
              { Py_tp_methods, t_GalileoAlmanac__methods_ },
              { Py_tp_init, (void *) t_GalileoAlmanac_init_ },
              { Py_tp_getset, t_GalileoAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GalileoAlmanac, t_GalileoAlmanac, GalileoAlmanac);

            void t_GalileoAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoAlmanac), &PY_TYPE_DEF(GalileoAlmanac), module, "GalileoAlmanac", 0);
            }

            void t_GalileoAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "class_", make_descriptor(GalileoAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "wrapfn_", make_descriptor(t_GalileoAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoAlmanac::initializeClass, 1)))
                return NULL;
              return t_GalileoAlmanac::wrap_Object(GalileoAlmanac(((t_GalileoAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GalileoAlmanac object((jobject) NULL);

              INT_CALL(object = GalileoAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5a());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5b());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaInc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaInc", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5b", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIOD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIOD", arg);
              return NULL;
            }

            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaInc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaInc", arg);
              return -1;
            }

            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaSqrtA", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE1());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE1", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5a());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5a", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5b());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5b", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIOD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iOD", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParameters::class$ = NULL;
            jmethodID *ODParameters::mids$ = NULL;
            bool ODParameters::live$ = false;

            jclass ODParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getActualOdSpan_557b8123390d8d0c] = env->getMethodID(cls, "getActualOdSpan", "()D");
                mids$[mid_getObsAvailable_412668abc8d889e9] = env->getMethodID(cls, "getObsAvailable", "()I");
                mids$[mid_getObsUsed_412668abc8d889e9] = env->getMethodID(cls, "getObsUsed", "()I");
                mids$[mid_getOdEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getOdEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getRecommendedOdSpan_557b8123390d8d0c] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                mids$[mid_getResidualsAccepted_557b8123390d8d0c] = env->getMethodID(cls, "getResidualsAccepted", "()D");
                mids$[mid_getTimeLastObsEnd_7a97f7e149e79afb] = env->getMethodID(cls, "getTimeLastObsEnd", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeLastObsStart_7a97f7e149e79afb] = env->getMethodID(cls, "getTimeLastObsStart", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTracksAvailable_412668abc8d889e9] = env->getMethodID(cls, "getTracksAvailable", "()I");
                mids$[mid_getTracksUsed_412668abc8d889e9] = env->getMethodID(cls, "getTracksUsed", "()I");
                mids$[mid_getWeightedRMS_557b8123390d8d0c] = env->getMethodID(cls, "getWeightedRMS", "()D");
                mids$[mid_setActualOdSpan_10f281d777284cea] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                mids$[mid_setObsAvailable_a3da1a935cb37f7b] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                mids$[mid_setObsUsed_a3da1a935cb37f7b] = env->getMethodID(cls, "setObsUsed", "(I)V");
                mids$[mid_setOdEpoch_20affcbd28542333] = env->getMethodID(cls, "setOdEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setRecommendedOdSpan_10f281d777284cea] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                mids$[mid_setResidualsAccepted_10f281d777284cea] = env->getMethodID(cls, "setResidualsAccepted", "(D)V");
                mids$[mid_setTimeLastObsEnd_20affcbd28542333] = env->getMethodID(cls, "setTimeLastObsEnd", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeLastObsStart_20affcbd28542333] = env->getMethodID(cls, "setTimeLastObsStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTracksAvailable_a3da1a935cb37f7b] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                mids$[mid_setTracksUsed_a3da1a935cb37f7b] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                mids$[mid_setWeightedRMS_10f281d777284cea] = env->getMethodID(cls, "setWeightedRMS", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ODParameters::ODParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble ODParameters::getActualOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_557b8123390d8d0c]);
            }

            jint ODParameters::getObsAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsAvailable_412668abc8d889e9]);
            }

            jint ODParameters::getObsUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsUsed_412668abc8d889e9]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getOdEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOdEpoch_7a97f7e149e79afb]));
            }

            jdouble ODParameters::getRecommendedOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_557b8123390d8d0c]);
            }

            jdouble ODParameters::getResidualsAccepted() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getResidualsAccepted_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsEnd() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsEnd_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsStart() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsStart_7a97f7e149e79afb]));
            }

            jint ODParameters::getTracksAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksAvailable_412668abc8d889e9]);
            }

            jint ODParameters::getTracksUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksUsed_412668abc8d889e9]);
            }

            jdouble ODParameters::getWeightedRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getWeightedRMS_557b8123390d8d0c]);
            }

            void ODParameters::setActualOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setActualOdSpan_10f281d777284cea], a0);
            }

            void ODParameters::setObsAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsAvailable_a3da1a935cb37f7b], a0);
            }

            void ODParameters::setObsUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsUsed_a3da1a935cb37f7b], a0);
            }

            void ODParameters::setOdEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdEpoch_20affcbd28542333], a0.this$);
            }

            void ODParameters::setRecommendedOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_10f281d777284cea], a0);
            }

            void ODParameters::setResidualsAccepted(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setResidualsAccepted_10f281d777284cea], a0);
            }

            void ODParameters::setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsEnd_20affcbd28542333], a0.this$);
            }

            void ODParameters::setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsStart_20affcbd28542333], a0.this$);
            }

            void ODParameters::setTracksAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksAvailable_a3da1a935cb37f7b], a0);
            }

            void ODParameters::setTracksUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksUsed_a3da1a935cb37f7b], a0);
            }

            void ODParameters::setWeightedRMS(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeightedRMS_10f281d777284cea], a0);
            }

            void ODParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self);
            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self);
            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args);
            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data);
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data);
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data);
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_ODParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_ODParameters, actualOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, obsAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, obsUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, odEpoch),
              DECLARE_GETSET_FIELD(t_ODParameters, recommendedOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, residualsAccepted),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsEnd),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsStart),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, weightedRMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParameters__methods_[] = {
              DECLARE_METHOD(t_ODParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, getActualOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getOdEpoch, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getRecommendedOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getResidualsAccepted, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsEnd, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsStart, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getWeightedRMS, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, setActualOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setOdEpoch, METH_O),
              DECLARE_METHOD(t_ODParameters, setRecommendedOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setResidualsAccepted, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsEnd, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsStart, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setWeightedRMS, METH_O),
              DECLARE_METHOD(t_ODParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParameters)[] = {
              { Py_tp_methods, t_ODParameters__methods_ },
              { Py_tp_init, (void *) t_ODParameters_init_ },
              { Py_tp_getset, t_ODParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ODParameters, t_ODParameters, ODParameters);

            void t_ODParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParameters), &PY_TYPE_DEF(ODParameters), module, "ODParameters", 0);
            }

            void t_ODParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "class_", make_descriptor(ODParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "wrapfn_", make_descriptor(t_ODParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParameters::initializeClass, 1)))
                return NULL;
              return t_ODParameters::wrap_Object(ODParameters(((t_ODParameters *) arg)->object.this$));
            }
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds)
            {
              ODParameters object((jobject) NULL);

              INT_CALL(object = ODParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOdEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdEpoch", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setResidualsAccepted(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setResidualsAccepted", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsEnd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsEnd", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsStart(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsStart", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setWeightedRMS(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeightedRMS", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(ODParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setOdEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odEpoch", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setResidualsAccepted(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "residualsAccepted", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsEnd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsEnd", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsStart(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsStart", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setWeightedRMS(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "weightedRMS", arg);
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractDualFrequencyCombination::mids$ = NULL;
          bool PythonAbstractDualFrequencyCombination::live$ = false;

          jclass PythonAbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e2286686e76d4599] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractDualFrequencyCombination::PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_e2286686e76d4599, a0.this$, a1.this$)) {}

          void PythonAbstractDualFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractDualFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractDualFrequencyCombination::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self);
          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractDualFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractDualFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractDualFrequencyCombination, t_PythonAbstractDualFrequencyCombination, PythonAbstractDualFrequencyCombination);

          void t_PythonAbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractDualFrequencyCombination), &PY_TYPE_DEF(PythonAbstractDualFrequencyCombination), module, "PythonAbstractDualFrequencyCombination", 1);
          }

          void t_PythonAbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "class_", make_descriptor(PythonAbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractDualFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0 },
              { "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedValue1 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractDualFrequencyCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractDualFrequencyCombination::wrap_Object(PythonAbstractDualFrequencyCombination(((t_PythonAbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractDualFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractDualFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a0));
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedFrequency", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedFrequency", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *o3 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a3));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dOdO", (double) a0, o1, (double) a2, o3);
            Py_DECREF(o1);
            Py_DECREF(o3);
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

          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *EphemerisOemWriter::class$ = NULL;
              jmethodID *EphemerisOemWriter::mids$ = NULL;
              bool EphemerisOemWriter::live$ = false;

              jclass EphemerisOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_093b7b924b98fc4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_0fa910eb9c2e844e] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");
                  mids$[mid_writeSegment_a7d01d675817ffdb] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/general/EphemerisFile$EphemerisSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOemWriter::EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_093b7b924b98fc4e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void EphemerisOemWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_0fa910eb9c2e844e], a0.this$, a1.this$);
              }

              void EphemerisOemWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_writeSegment_a7d01d675817ffdb], a0.this$, a1.this$);
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
              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args);
              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOemWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, write, METH_VARARGS),
                DECLARE_METHOD(t_EphemerisOemWriter, writeSegment, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOemWriter)[] = {
                { Py_tp_methods, t_EphemerisOemWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOemWriter, t_EphemerisOemWriter, EphemerisOemWriter);

              void t_EphemerisOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOemWriter), &PY_TYPE_DEF(EphemerisOemWriter), module, "EphemerisOemWriter", 0);
              }

              void t_EphemerisOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "class_", make_descriptor(EphemerisOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "wrapfn_", make_descriptor(t_EphemerisOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOemWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOemWriter::wrap_Object(EphemerisOemWriter(((t_EphemerisOemWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                EphemerisOemWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = EphemerisOemWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }

              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile$EphemerisSegment a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::general::EphemerisFile$EphemerisSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile$EphemerisSegment::parameters_))
                {
                  OBJ_CALL(self->object.writeSegment(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
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
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearObjectiveFunction::class$ = NULL;
        jmethodID *LinearObjectiveFunction::mids$ = NULL;
        bool LinearObjectiveFunction::live$ = false;

        jclass LinearObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3682f2e0c8382fe5] = env->getMethodID(cls, "<init>", "([DD)V");
            mids$[mid_init$_9af10d94e4b8cd04] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_75d50d73180655b4] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getConstantTerm_557b8123390d8d0c] = env->getMethodID(cls, "getConstantTerm", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_value_86c4a0582e0747ce] = env->getMethodID(cls, "value", "([D)D");
            mids$[mid_value_4062041acf71098b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearObjectiveFunction::LinearObjectiveFunction(const JArray< jdouble > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3682f2e0c8382fe5, a0.this$, a1)) {}

        LinearObjectiveFunction::LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9af10d94e4b8cd04, a0.this$, a1)) {}

        jboolean LinearObjectiveFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearObjectiveFunction::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_75d50d73180655b4]));
        }

        jdouble LinearObjectiveFunction::getConstantTerm() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantTerm_557b8123390d8d0c]);
        }

        jint LinearObjectiveFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        jdouble LinearObjectiveFunction::value(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86c4a0582e0747ce], a0.this$);
        }

        jdouble LinearObjectiveFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4062041acf71098b], a0.this$);
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
        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data);
        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data);
        static PyGetSetDef t_LinearObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, coefficients),
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, constantTerm),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_LinearObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getConstantTerm, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearObjectiveFunction)[] = {
          { Py_tp_methods, t_LinearObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_LinearObjectiveFunction_init_ },
          { Py_tp_getset, t_LinearObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearObjectiveFunction, t_LinearObjectiveFunction, LinearObjectiveFunction);

        void t_LinearObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearObjectiveFunction), &PY_TYPE_DEF(LinearObjectiveFunction), module, "LinearObjectiveFunction", 0);
        }

        void t_LinearObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "class_", make_descriptor(LinearObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "wrapfn_", make_descriptor(t_LinearObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_LinearObjectiveFunction::wrap_Object(LinearObjectiveFunction(((t_LinearObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "[DD", &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
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

        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$RotationOrderConsumer::class$ = NULL;
            jmethodID *ParseToken$RotationOrderConsumer::mids$ = NULL;
            bool ParseToken$RotationOrderConsumer::live$ = false;

            jclass ParseToken$RotationOrderConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8b9f97be929dfd52] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$RotationOrderConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8b9f97be929dfd52], a0.this$);
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
            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$RotationOrderConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$RotationOrderConsumer)[] = {
              { Py_tp_methods, t_ParseToken$RotationOrderConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$RotationOrderConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$RotationOrderConsumer, t_ParseToken$RotationOrderConsumer, ParseToken$RotationOrderConsumer);

            void t_ParseToken$RotationOrderConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$RotationOrderConsumer), &PY_TYPE_DEF(ParseToken$RotationOrderConsumer), module, "ParseToken$RotationOrderConsumer", 0);
            }

            void t_ParseToken$RotationOrderConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "class_", make_descriptor(ParseToken$RotationOrderConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "wrapfn_", make_descriptor(t_ParseToken$RotationOrderConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$RotationOrderConsumer::wrap_Object(ParseToken$RotationOrderConsumer(((t_ParseToken$RotationOrderConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternionKey::class$ = NULL;
              jmethodID *ApmQuaternionKey::mids$ = NULL;
              bool ApmQuaternionKey::live$ = false;
              ApmQuaternionKey *ApmQuaternionKey::COMMENT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::EPOCH = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_DIR = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternion = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionDot = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionRate = NULL;

              jclass ApmQuaternionKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c09485ae77d4c67f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;)Z");
                  mids$[mid_valueOf_b059b1123007abe8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");
                  mids$[mid_values_ab4e5edbda81da69] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ApmQuaternionKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  EPOCH = new ApmQuaternionKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_DIR = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternion = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionDot = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionRate = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ApmQuaternionKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c09485ae77d4c67f], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              ApmQuaternionKey ApmQuaternionKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ApmQuaternionKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b059b1123007abe8], a0.this$));
              }

              JArray< ApmQuaternionKey > ApmQuaternionKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ApmQuaternionKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ab4e5edbda81da69]));
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
              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type);
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data);
              static PyGetSetDef t_ApmQuaternionKey__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternionKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternionKey__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternionKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternionKey)[] = {
                { Py_tp_methods, t_ApmQuaternionKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmQuaternionKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternionKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ApmQuaternionKey, t_ApmQuaternionKey, ApmQuaternionKey);
              PyObject *t_ApmQuaternionKey::wrap_Object(const ApmQuaternionKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ApmQuaternionKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ApmQuaternionKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternionKey), &PY_TYPE_DEF(ApmQuaternionKey), module, "ApmQuaternionKey", 0);
              }

              void t_ApmQuaternionKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "class_", make_descriptor(ApmQuaternionKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "wrapfn_", make_descriptor(t_ApmQuaternionKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmQuaternionKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "COMMENT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "EPOCH", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_DIR", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternion", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionDot", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionRate", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionRate)));
              }

              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternionKey::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternionKey::wrap_Object(ApmQuaternionKey(((t_ApmQuaternionKey *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternionKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ApmQuaternionKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::valueOf(a0));
                  return t_ApmQuaternionKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type)
              {
                JArray< ApmQuaternionKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::values());
                return JArray<jobject>(result.this$).wrap(t_ApmQuaternionKey::wrap_jobject);
              }
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data)
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
#include "java/io/Writer.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Writer::class$ = NULL;
    jmethodID *Writer::mids$ = NULL;
    bool Writer::live$ = false;

    jclass Writer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Writer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_640b78bb78e686df] = env->getMethodID(cls, "append", "(C)Ljava/io/Writer;");
        mids$[mid_append_422fd4dbedc8618d] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
        mids$[mid_append_390c58dd5a41f119] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullWriter_d780d9f7db270aad] = env->getStaticMethodID(cls, "nullWriter", "()Ljava/io/Writer;");
        mids$[mid_write_916bf6d42d285c69] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_f5ffdf29129ef90a] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_5421d1c1f03cf945] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_96097c5e4aacac76] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Writer Writer::append(jchar a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_640b78bb78e686df], a0));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_422fd4dbedc8618d], a0.this$));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_390c58dd5a41f119], a0.this$, a1, a2));
    }

    void Writer::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void Writer::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    Writer Writer::nullWriter()
    {
      jclass cls = env->getClass(initializeClass);
      return Writer(env->callStaticObjectMethod(cls, mids$[mid_nullWriter_d780d9f7db270aad]));
    }

    void Writer::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_916bf6d42d285c69], a0.this$);
    }

    void Writer::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_f5ffdf29129ef90a], a0.this$);
    }

    void Writer::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void Writer::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_5421d1c1f03cf945], a0.this$, a1, a2);
    }

    void Writer::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_96097c5e4aacac76], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_append(t_Writer *self, PyObject *args);
    static PyObject *t_Writer_close(t_Writer *self);
    static PyObject *t_Writer_flush(t_Writer *self);
    static PyObject *t_Writer_nullWriter(PyTypeObject *type);
    static PyObject *t_Writer_write(t_Writer *self, PyObject *args);

    static PyMethodDef t_Writer__methods_[] = {
      DECLARE_METHOD(t_Writer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, append, METH_VARARGS),
      DECLARE_METHOD(t_Writer, close, METH_NOARGS),
      DECLARE_METHOD(t_Writer, flush, METH_NOARGS),
      DECLARE_METHOD(t_Writer, nullWriter, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Writer, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Writer)[] = {
      { Py_tp_methods, t_Writer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Writer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Writer, t_Writer, Writer);

    void t_Writer::install(PyObject *module)
    {
      installType(&PY_TYPE(Writer), &PY_TYPE_DEF(Writer), module, "Writer", 0);
    }

    void t_Writer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "class_", make_descriptor(Writer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "wrapfn_", make_descriptor(t_Writer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Writer::initializeClass, 1)))
        return NULL;
      return t_Writer::wrap_Object(Writer(((t_Writer *) arg)->object.this$));
    }
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Writer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Writer_append(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Writer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Writer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_Writer_close(t_Writer *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_flush(t_Writer *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_nullWriter(PyTypeObject *type)
    {
      Writer result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Writer::nullWriter());
      return t_Writer::wrap_Object(result);
    }

    static PyObject *t_Writer_write(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
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

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersWriter::class$ = NULL;
            jmethodID *SpacecraftParametersWriter::mids$ = NULL;
            bool SpacecraftParametersWriter::live$ = false;

            jclass SpacecraftParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1b8281bf6e9afbc2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParametersWriter::SpacecraftParametersWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_1b8281bf6e9afbc2, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SpacecraftParametersWriter__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersWriter)[] = {
              { Py_tp_methods, t_SpacecraftParametersWriter__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParametersWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersWriter, t_SpacecraftParametersWriter, SpacecraftParametersWriter);

            void t_SpacecraftParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersWriter), &PY_TYPE_DEF(SpacecraftParametersWriter), module, "SpacecraftParametersWriter", 0);
            }

            void t_SpacecraftParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "class_", make_descriptor(SpacecraftParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "wrapfn_", make_descriptor(t_SpacecraftParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersWriter::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersWriter::wrap_Object(SpacecraftParametersWriter(((t_SpacecraftParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              SpacecraftParametersWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SpacecraftParametersWriter(a0, a1, a2));
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
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Tuple::class$ = NULL;
      jmethodID *Tuple::mids$ = NULL;
      bool Tuple::live$ = false;

      jclass Tuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Tuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_abs_b1ed67a59f040e80] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acos_b1ed67a59f040e80] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acosh_b1ed67a59f040e80] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_c28cc6f3cbc6f10c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_95c35349ca4162c7] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_asin_b1ed67a59f040e80] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_asinh_b1ed67a59f040e80] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan_b1ed67a59f040e80] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan2_c28cc6f3cbc6f10c] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_atanh_b1ed67a59f040e80] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cbrt_b1ed67a59f040e80] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ceil_b1ed67a59f040e80] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_c28cc6f3cbc6f10c] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_95c35349ca4162c7] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_cos_b1ed67a59f040e80] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cosh_b1ed67a59f040e80] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_c28cc6f3cbc6f10c] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_95c35349ca4162c7] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_b1ed67a59f040e80] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_expm1_b1ed67a59f040e80] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_floor_b1ed67a59f040e80] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getComponent_69cfb132c661aca4] = env->getMethodID(cls, "getComponent", "(I)D");
          mids$[mid_getComponents_a53a7513ecedada2] = env->getMethodID(cls, "getComponents", "()[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_b1ed67a59f040e80] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_c28cc6f3cbc6f10c] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_68f36b91ff57a38d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_70964a93784f0e20] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Tuple;[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_470fff64832af03a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_9411c26707c35a01] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_d918a0fc8a303e79] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_448b62d341550a00] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_bfa88ae45a9ed5e1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_daefa89eb10e6020] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_log_b1ed67a59f040e80] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log10_b1ed67a59f040e80] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log1p_b1ed67a59f040e80] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_c28cc6f3cbc6f10c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_95c35349ca4162c7] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_797fb4ddfb99d895] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_negate_b1ed67a59f040e80] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_newInstance_95c35349ca4162c7] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_c28cc6f3cbc6f10c] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_95c35349ca4162c7] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_797fb4ddfb99d895] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_reciprocal_b1ed67a59f040e80] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_c28cc6f3cbc6f10c] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_95c35349ca4162c7] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_rint_b1ed67a59f040e80] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_rootN_797fb4ddfb99d895] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_scalb_797fb4ddfb99d895] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_sign_b1ed67a59f040e80] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sin_b1ed67a59f040e80] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_b1ed67a59f040e80] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_b1ed67a59f040e80] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_c28cc6f3cbc6f10c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_95c35349ca4162c7] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_tan_b1ed67a59f040e80] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_tanh_b1ed67a59f040e80] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toDegrees_b1ed67a59f040e80] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toRadians_b1ed67a59f040e80] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ulp_b1ed67a59f040e80] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Tuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Tuple::Tuple(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      Tuple Tuple::abs() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_abs_b1ed67a59f040e80]));
      }

      Tuple Tuple::acos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acos_b1ed67a59f040e80]));
      }

      Tuple Tuple::acosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acosh_b1ed67a59f040e80]));
      }

      Tuple Tuple::add(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::add(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_95c35349ca4162c7], a0));
      }

      Tuple Tuple::asin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asin_b1ed67a59f040e80]));
      }

      Tuple Tuple::asinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asinh_b1ed67a59f040e80]));
      }

      Tuple Tuple::atan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan_b1ed67a59f040e80]));
      }

      Tuple Tuple::atan2(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan2_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::atanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atanh_b1ed67a59f040e80]));
      }

      Tuple Tuple::cbrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cbrt_b1ed67a59f040e80]));
      }

      Tuple Tuple::ceil() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ceil_b1ed67a59f040e80]));
      }

      Tuple Tuple::copySign(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::copySign(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_95c35349ca4162c7], a0));
      }

      Tuple Tuple::cos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cos_b1ed67a59f040e80]));
      }

      Tuple Tuple::cosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cosh_b1ed67a59f040e80]));
      }

      Tuple Tuple::divide(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::divide(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_95c35349ca4162c7], a0));
      }

      jboolean Tuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      Tuple Tuple::exp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_exp_b1ed67a59f040e80]));
      }

      Tuple Tuple::expm1() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_expm1_b1ed67a59f040e80]));
      }

      Tuple Tuple::floor() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_floor_b1ed67a59f040e80]));
      }

      jdouble Tuple::getComponent(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getComponent_69cfb132c661aca4], a0);
      }

      JArray< jdouble > Tuple::getComponents() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getComponents_a53a7513ecedada2]));
      }

      jint Tuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::Field Tuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      Tuple Tuple::getPi() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_getPi_b1ed67a59f040e80]));
      }

      jdouble Tuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      jint Tuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      Tuple Tuple::hypot(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_hypot_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::linearCombination(const JArray< jdouble > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_68f36b91ff57a38d], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const JArray< Tuple > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_70964a93784f0e20], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_470fff64832af03a], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_9411c26707c35a01], a0, a1.this$, a2, a3.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_d918a0fc8a303e79], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_448b62d341550a00], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5, const Tuple & a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_bfa88ae45a9ed5e1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5, jdouble a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_daefa89eb10e6020], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Tuple Tuple::log() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log_b1ed67a59f040e80]));
      }

      Tuple Tuple::log10() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log10_b1ed67a59f040e80]));
      }

      Tuple Tuple::log1p() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log1p_b1ed67a59f040e80]));
      }

      Tuple Tuple::multiply(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::multiply(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_95c35349ca4162c7], a0));
      }

      Tuple Tuple::multiply(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_797fb4ddfb99d895], a0));
      }

      Tuple Tuple::negate() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_negate_b1ed67a59f040e80]));
      }

      Tuple Tuple::newInstance(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_newInstance_95c35349ca4162c7], a0));
      }

      Tuple Tuple::pow(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::pow(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_95c35349ca4162c7], a0));
      }

      Tuple Tuple::pow(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_797fb4ddfb99d895], a0));
      }

      Tuple Tuple::reciprocal() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_reciprocal_b1ed67a59f040e80]));
      }

      Tuple Tuple::remainder(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::remainder(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_95c35349ca4162c7], a0));
      }

      Tuple Tuple::rint() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rint_b1ed67a59f040e80]));
      }

      Tuple Tuple::rootN(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rootN_797fb4ddfb99d895], a0));
      }

      Tuple Tuple::scalb(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_scalb_797fb4ddfb99d895], a0));
      }

      Tuple Tuple::sign() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sign_b1ed67a59f040e80]));
      }

      Tuple Tuple::sin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sin_b1ed67a59f040e80]));
      }

      ::org::hipparchus::util::FieldSinCos Tuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      Tuple Tuple::sinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sinh_b1ed67a59f040e80]));
      }

      ::org::hipparchus::util::FieldSinhCosh Tuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      Tuple Tuple::sqrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sqrt_b1ed67a59f040e80]));
      }

      Tuple Tuple::subtract(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_c28cc6f3cbc6f10c], a0.this$));
      }

      Tuple Tuple::subtract(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_95c35349ca4162c7], a0));
      }

      Tuple Tuple::tan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tan_b1ed67a59f040e80]));
      }

      Tuple Tuple::tanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tanh_b1ed67a59f040e80]));
      }

      Tuple Tuple::toDegrees() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toDegrees_b1ed67a59f040e80]));
      }

      Tuple Tuple::toRadians() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toRadians_b1ed67a59f040e80]));
      }

      Tuple Tuple::ulp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ulp_b1ed67a59f040e80]));
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
      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Tuple_abs(t_Tuple *self);
      static PyObject *t_Tuple_acos(t_Tuple *self);
      static PyObject *t_Tuple_acosh(t_Tuple *self);
      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_asin(t_Tuple *self);
      static PyObject *t_Tuple_asinh(t_Tuple *self);
      static PyObject *t_Tuple_atan(t_Tuple *self);
      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_atanh(t_Tuple *self);
      static PyObject *t_Tuple_cbrt(t_Tuple *self);
      static PyObject *t_Tuple_ceil(t_Tuple *self);
      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_cos(t_Tuple *self);
      static PyObject *t_Tuple_cosh(t_Tuple *self);
      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_exp(t_Tuple *self);
      static PyObject *t_Tuple_expm1(t_Tuple *self);
      static PyObject *t_Tuple_floor(t_Tuple *self);
      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_getComponents(t_Tuple *self);
      static PyObject *t_Tuple_getDimension(t_Tuple *self);
      static PyObject *t_Tuple_getField(t_Tuple *self);
      static PyObject *t_Tuple_getPi(t_Tuple *self);
      static PyObject *t_Tuple_getReal(t_Tuple *self);
      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_log(t_Tuple *self);
      static PyObject *t_Tuple_log10(t_Tuple *self);
      static PyObject *t_Tuple_log1p(t_Tuple *self);
      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_negate(t_Tuple *self);
      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_reciprocal(t_Tuple *self);
      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_rint(t_Tuple *self);
      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_sign(t_Tuple *self);
      static PyObject *t_Tuple_sin(t_Tuple *self);
      static PyObject *t_Tuple_sinCos(t_Tuple *self);
      static PyObject *t_Tuple_sinh(t_Tuple *self);
      static PyObject *t_Tuple_sinhCosh(t_Tuple *self);
      static PyObject *t_Tuple_sqrt(t_Tuple *self);
      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_tan(t_Tuple *self);
      static PyObject *t_Tuple_tanh(t_Tuple *self);
      static PyObject *t_Tuple_toDegrees(t_Tuple *self);
      static PyObject *t_Tuple_toRadians(t_Tuple *self);
      static PyObject *t_Tuple_ulp(t_Tuple *self);
      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data);
      static PyGetSetDef t_Tuple__fields_[] = {
        DECLARE_GET_FIELD(t_Tuple, components),
        DECLARE_GET_FIELD(t_Tuple, dimension),
        DECLARE_GET_FIELD(t_Tuple, field),
        DECLARE_GET_FIELD(t_Tuple, pi),
        DECLARE_GET_FIELD(t_Tuple, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Tuple__methods_[] = {
        DECLARE_METHOD(t_Tuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, add, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan2, METH_O),
        DECLARE_METHOD(t_Tuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getComponent, METH_O),
        DECLARE_METHOD(t_Tuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, hypot, METH_O),
        DECLARE_METHOD(t_Tuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, log, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, newInstance, METH_O),
        DECLARE_METHOD(t_Tuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, rootN, METH_O),
        DECLARE_METHOD(t_Tuple, scalb, METH_O),
        DECLARE_METHOD(t_Tuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Tuple)[] = {
        { Py_tp_methods, t_Tuple__methods_ },
        { Py_tp_init, (void *) t_Tuple_init_ },
        { Py_tp_getset, t_Tuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Tuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Tuple, t_Tuple, Tuple);

      void t_Tuple::install(PyObject *module)
      {
        installType(&PY_TYPE(Tuple), &PY_TYPE_DEF(Tuple), module, "Tuple", 0);
      }

      void t_Tuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "class_", make_descriptor(Tuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "wrapfn_", make_descriptor(t_Tuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Tuple::initializeClass, 1)))
          return NULL;
        return t_Tuple::wrap_Object(Tuple(((t_Tuple *) arg)->object.this$));
      }
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Tuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        Tuple object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = Tuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Tuple_abs(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Tuple_asin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_asinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Tuple_atanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cbrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ceil(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Tuple_cos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Tuple_exp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_expm1(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_floor(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_Tuple_getComponents(t_Tuple *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return result.wrap();
      }

      static PyObject *t_Tuple_getDimension(t_Tuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Tuple_getField(t_Tuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_getPi(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getReal(t_Tuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            JArray< Tuple > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple a6((jobject) NULL);
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            jdouble a6;
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Tuple_log(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log10(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log1p(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Tuple_negate(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg)
      {
        jdouble a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Tuple_reciprocal(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Tuple_rint(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Tuple_sign(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinCos(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinhCosh(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sqrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Tuple_tan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_tanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toDegrees(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toRadians(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ulp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return value.wrap();
      }

      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data)
      {
        Tuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Tuple::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/TimeScale.h"
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
              mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_efb1066fada7736f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0adf42b9a5e45618] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;DDD[D)D");
              mids$[mid_pathDelay_5ede7c721db1b6ab] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efb1066fada7736f, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List KlobucharIonoModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jdouble a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_0adf42b9a5e45618], a0.this$, a1.this$, a2, a3, a4, a5.this$);
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, const JArray< ::org::hipparchus::CalculusFieldElement > & a5) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_5ede7c721db1b6ab], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
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
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *KthSelector::class$ = NULL;
      jmethodID *KthSelector::mids$ = NULL;
      bool KthSelector::live$ = false;

      jclass KthSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/KthSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_1d74d701de50c6b0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/PivotingStrategy;)V");
          mids$[mid_getPivotingStrategy_b6c90f164ea1e1c5] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_select_ac31a84fee33c024] = env->getMethodID(cls, "select", "([D[II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KthSelector::KthSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      KthSelector::KthSelector(const ::org::hipparchus::util::PivotingStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d74d701de50c6b0, a0.this$)) {}

      ::org::hipparchus::util::PivotingStrategy KthSelector::getPivotingStrategy() const
      {
        return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_b6c90f164ea1e1c5]));
      }

      jdouble KthSelector::select(const JArray< jdouble > & a0, const JArray< jint > & a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_select_ac31a84fee33c024], a0.this$, a1.this$, a2);
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
      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self);
      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args);
      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data);
      static PyGetSetDef t_KthSelector__fields_[] = {
        DECLARE_GET_FIELD(t_KthSelector, pivotingStrategy),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KthSelector__methods_[] = {
        DECLARE_METHOD(t_KthSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, getPivotingStrategy, METH_NOARGS),
        DECLARE_METHOD(t_KthSelector, select, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KthSelector)[] = {
        { Py_tp_methods, t_KthSelector__methods_ },
        { Py_tp_init, (void *) t_KthSelector_init_ },
        { Py_tp_getset, t_KthSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KthSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KthSelector, t_KthSelector, KthSelector);

      void t_KthSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(KthSelector), &PY_TYPE_DEF(KthSelector), module, "KthSelector", 0);
      }

      void t_KthSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "class_", make_descriptor(KthSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "wrapfn_", make_descriptor(t_KthSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KthSelector::initializeClass, 1)))
          return NULL;
        return t_KthSelector::wrap_Object(KthSelector(((t_KthSelector *) arg)->object.this$));
      }
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KthSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            KthSelector object((jobject) NULL);

            INT_CALL(object = KthSelector());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::util::PivotingStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            KthSelector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::util::PivotingStrategy::initializeClass, &a0, &p0, ::org::hipparchus::util::t_PivotingStrategy::parameters_))
            {
              INT_CALL(object = KthSelector(a0));
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

      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self)
      {
        ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
      }

      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jint > a1((jobject) NULL);
        jint a2;
        jdouble result;

        if (!parseArgs(args, "[D[II", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.select(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "select", args);
        return NULL;
      }

      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data)
      {
        ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SoftwareConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SoftwareConfiguration::mids$ = NULL;
        bool CRDConfiguration$SoftwareConfiguration::live$ = false;

        jclass CRDConfiguration$SoftwareConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareVersions_5d7d8c500345981d] = env->getMethodID(cls, "getProcessingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getProcessingSoftwares_5d7d8c500345981d] = env->getMethodID(cls, "getProcessingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_getSoftwareId_3cffd47377eca18a] = env->getMethodID(cls, "getSoftwareId", "()Ljava/lang/String;");
            mids$[mid_getTrackingSoftwareVersions_5d7d8c500345981d] = env->getMethodID(cls, "getTrackingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getTrackingSoftwares_5d7d8c500345981d] = env->getMethodID(cls, "getTrackingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareVersions_cb4082327a3ebdc5] = env->getMethodID(cls, "setProcessingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwares_cb4082327a3ebdc5] = env->getMethodID(cls, "setProcessingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_setSoftwareId_f5ffdf29129ef90a] = env->getMethodID(cls, "setSoftwareId", "(Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwareVersions_cb4082327a3ebdc5] = env->getMethodID(cls, "setTrackingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwares_cb4082327a3ebdc5] = env->getMethodID(cls, "setTrackingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SoftwareConfiguration::CRDConfiguration$SoftwareConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersions_5d7d8c500345981d]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwares_5d7d8c500345981d]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::getSoftwareId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSoftwareId_3cffd47377eca18a]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwareVersions_5d7d8c500345981d]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwares_5d7d8c500345981d]));
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersions_cb4082327a3ebdc5], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwares_cb4082327a3ebdc5], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setSoftwareId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSoftwareId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwareVersions_cb4082327a3ebdc5], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwares_cb4082327a3ebdc5], a0.this$);
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SoftwareConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwares),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, softwareId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SoftwareConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getSoftwareId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setSoftwareId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SoftwareConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SoftwareConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SoftwareConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SoftwareConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SoftwareConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SoftwareConfiguration, t_CRDConfiguration$SoftwareConfiguration, CRDConfiguration$SoftwareConfiguration);

        void t_CRDConfiguration$SoftwareConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SoftwareConfiguration), &PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration), module, "CRDConfiguration$SoftwareConfiguration", 0);
        }

        void t_CRDConfiguration$SoftwareConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "class_", make_descriptor(CRDConfiguration$SoftwareConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SoftwareConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SoftwareConfiguration::wrap_Object(CRDConfiguration$SoftwareConfiguration(((t_CRDConfiguration$SoftwareConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SoftwareConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SoftwareConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSoftwareId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSoftwareId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSoftwareId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwares", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSoftwareId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "softwareId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwares", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureProcessingState::class$ = NULL;
          jmethodID *KvnStructureProcessingState::mids$ = NULL;
          bool KvnStructureProcessingState::live$ = false;

          jclass KvnStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_751b447e12ee0563] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KvnStructureProcessingState::KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_751b447e12ee0563, a0.this$)) {}

          jboolean KvnStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
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
          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_KvnStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_KvnStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureProcessingState)[] = {
            { Py_tp_methods, t_KvnStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_KvnStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KvnStructureProcessingState, t_KvnStructureProcessingState, KvnStructureProcessingState);

          void t_KvnStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureProcessingState), &PY_TYPE_DEF(KvnStructureProcessingState), module, "KvnStructureProcessingState", 0);
          }

          void t_KvnStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "class_", make_descriptor(KvnStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "wrapfn_", make_descriptor(t_KvnStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_KvnStructureProcessingState::wrap_Object(KvnStructureProcessingState(((t_KvnStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            KvnStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = KvnStructureProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e421142af66b60c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_0701b00b25822fff] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getFilter_2a6e755e9e4e94fa] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_c3f06491636058be] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2e421142af66b60c, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_0701b00b25822fff]));
        }

        ::org::orekit::propagation::events::FilterType EventSlopeFilter::getFilter() const
        {
          return ::org::orekit::propagation::events::FilterType(env->callObjectMethod(this$, mids$[mid_getFilter_2a6e755e9e4e94fa]));
        }

        void EventSlopeFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, filter),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FilterType result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FilterType value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessageType::class$ = NULL;
          jmethodID *RtcmMessageType::mids$ = NULL;
          bool RtcmMessageType::live$ = false;
          RtcmMessageType *RtcmMessageType::RTCM_1019 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1020 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1042 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1044 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1045 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1057 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1058 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1060 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1063 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1064 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1066 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1240 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1241 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1243 = NULL;

          jclass RtcmMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_612aa70df0f31133] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_valueOf_612aa70df0f31133] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_values_12551cba4bfbd81d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              RTCM_1019 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1019", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1020 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1020", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1042 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1042", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1044 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1044", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1045 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1045", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1057 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1057", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1058 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1058", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1060 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1060", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1063 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1063", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1064 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1064", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1066 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1066", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1240 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1240", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1241 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1241", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1243 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1243", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessageType RtcmMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_612aa70df0f31133], a0.this$));
          }

          RtcmMessageType RtcmMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_612aa70df0f31133], a0.this$));
          }

          JArray< RtcmMessageType > RtcmMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_12551cba4bfbd81d]));
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
          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args);
          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmMessageType_values(PyTypeObject *type);
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data);
          static PyGetSetDef t_RtcmMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmMessageType__methods_[] = {
            DECLARE_METHOD(t_RtcmMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessageType)[] = {
            { Py_tp_methods, t_RtcmMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmMessageType, t_RtcmMessageType, RtcmMessageType);
          PyObject *t_RtcmMessageType::wrap_Object(const RtcmMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessageType), &PY_TYPE_DEF(RtcmMessageType), module, "RtcmMessageType", 0);
          }

          void t_RtcmMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "class_", make_descriptor(RtcmMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "wrapfn_", make_descriptor(t_RtcmMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1019", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1020", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1042", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1042)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1044", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1044)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1045", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1045)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1057", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1057)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1058", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1058)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1060", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1060)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1063", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1063)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1064", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1064)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1066", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1066)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1240", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1240)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1241", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1241)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1243", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1243)));
          }

          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessageType::initializeClass, 1)))
              return NULL;
            return t_RtcmMessageType::wrap_Object(RtcmMessageType(((t_RtcmMessageType *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::getMessageType(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::valueOf(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmMessageType_values(PyTypeObject *type)
          {
            JArray< RtcmMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmMessageType::wrap_jobject);
          }
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data)
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
#include "org/orekit/time/PythonTimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeShiftable::class$ = NULL;
      jmethodID *PythonTimeShiftable::mids$ = NULL;
      bool PythonTimeShiftable::live$ = false;

      jclass PythonTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_f8c1bde396d79158] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeShiftable::PythonTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args);
      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self);
      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args);
      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data);
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeShiftable)[] = {
        { Py_tp_methods, t_PythonTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonTimeShiftable_init_ },
        { Py_tp_getset, t_PythonTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeShiftable, t_PythonTimeShiftable, PythonTimeShiftable);
      PyObject *t_PythonTimeShiftable::wrap_Object(const PythonTimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeShiftable), &PY_TYPE_DEF(PythonTimeShiftable), module, "PythonTimeShiftable", 1);
      }

      void t_PythonTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "class_", make_descriptor(PythonTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "wrapfn_", make_descriptor(t_PythonTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;", (void *) t_PythonTimeShiftable_shiftedBy1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonTimeShiftable::wrap_Object(PythonTimeShiftable(((t_PythonTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args)
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

      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeShiftable::initializeClass, &value))
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

      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data)
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
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Minus::class$ = NULL;
        jmethodID *Minus::mids$ = NULL;
        bool Minus::live$ = false;

        jclass Minus::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Minus");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Minus::Minus() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Minus::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Minus::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Minus_value(t_Minus *self, PyObject *args);

        static PyMethodDef t_Minus__methods_[] = {
          DECLARE_METHOD(t_Minus, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Minus)[] = {
          { Py_tp_methods, t_Minus__methods_ },
          { Py_tp_init, (void *) t_Minus_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Minus)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Minus, t_Minus, Minus);

        void t_Minus::install(PyObject *module)
        {
          installType(&PY_TYPE(Minus), &PY_TYPE_DEF(Minus), module, "Minus", 0);
        }

        void t_Minus::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "class_", make_descriptor(Minus::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "wrapfn_", make_descriptor(t_Minus::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Minus::initializeClass, 1)))
            return NULL;
          return t_Minus::wrap_Object(Minus(((t_Minus *) arg)->object.this$));
        }
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Minus::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds)
        {
          Minus object((jobject) NULL);

          INT_CALL(object = Minus());
          self->object = object;

          return 0;
        }

        static PyObject *t_Minus_value(t_Minus *self, PyObject *args)
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
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GillFieldIntegratorBuilder::class$ = NULL;
        jmethodID *GillFieldIntegratorBuilder::mids$ = NULL;
        bool GillFieldIntegratorBuilder::live$ = false;

        jclass GillFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator GillFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_GillFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_GillFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegratorBuilder, t_GillFieldIntegratorBuilder, GillFieldIntegratorBuilder);
        PyObject *t_GillFieldIntegratorBuilder::wrap_Object(const GillFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegratorBuilder), &PY_TYPE_DEF(GillFieldIntegratorBuilder), module, "GillFieldIntegratorBuilder", 0);
        }

        void t_GillFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "class_", make_descriptor(GillFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_GillFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegratorBuilder::wrap_Object(GillFieldIntegratorBuilder(((t_GillFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
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

        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(GillFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateObjectiveFunction::class$ = NULL;
        jmethodID *UnivariateObjectiveFunction::mids$ = NULL;
        bool UnivariateObjectiveFunction::live$ = false;

        jclass UnivariateObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bab54d5ff2104d15] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getObjectiveFunction_7713b1053b31306c] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateObjectiveFunction::UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab54d5ff2104d15, a0.this$)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariateObjectiveFunction::getObjectiveFunction() const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_7713b1053b31306c]));
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
        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self);
        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data);
        static PyGetSetDef t_UnivariateObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateObjectiveFunction, objectiveFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, getObjectiveFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateObjectiveFunction)[] = {
          { Py_tp_methods, t_UnivariateObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_UnivariateObjectiveFunction_init_ },
          { Py_tp_getset, t_UnivariateObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateObjectiveFunction, t_UnivariateObjectiveFunction, UnivariateObjectiveFunction);

        void t_UnivariateObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateObjectiveFunction), &PY_TYPE_DEF(UnivariateObjectiveFunction), module, "UnivariateObjectiveFunction", 0);
        }

        void t_UnivariateObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "class_", make_descriptor(UnivariateObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "wrapfn_", make_descriptor(t_UnivariateObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateObjectiveFunction::wrap_Object(UnivariateObjectiveFunction(((t_UnivariateObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          UnivariateObjectiveFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            INT_CALL(object = UnivariateObjectiveFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self)
        {
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::analysis::UnivariateFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *AccelerationModel::class$ = NULL;
        jmethodID *AccelerationModel::mids$ = NULL;
        bool AccelerationModel::live$ = false;

        jclass AccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/AccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_4ad317f7598a10a9] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_810dcb8f9f5d191a] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement AccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_4ad317f7598a10a9], a0.this$, a1.this$));
        }

        jdouble AccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_810dcb8f9f5d191a], a0.this$, a1.this$);
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
        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args);
        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args);

        static PyMethodDef t_AccelerationModel__methods_[] = {
          DECLARE_METHOD(t_AccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_AccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AccelerationModel)[] = {
          { Py_tp_methods, t_AccelerationModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AccelerationModel)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(AccelerationModel, t_AccelerationModel, AccelerationModel);

        void t_AccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AccelerationModel), &PY_TYPE_DEF(AccelerationModel), module, "AccelerationModel", 0);
        }

        void t_AccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "class_", make_descriptor(AccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "wrapfn_", make_descriptor(t_AccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AccelerationModel::initializeClass, 1)))
            return NULL;
          return t_AccelerationModel::wrap_Object(AccelerationModel(((t_AccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args)
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

        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
                  mids$[mid_valueOf_ed69ac2f11b7284f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_values_600465ebfc1303c2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");

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
                return InterpolationMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed69ac2f11b7284f], a0.this$));
              }

              JArray< InterpolationMethod > InterpolationMethod::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InterpolationMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_600465ebfc1303c2]));
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
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/List.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Arrays::class$ = NULL;
    jmethodID *Arrays::mids$ = NULL;
    bool Arrays::live$ = false;

    jclass Arrays::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Arrays");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asList_6f26a4abc68018f5] = env->getStaticMethodID(cls, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_binarySearch_39f26e914c3d5dab] = env->getStaticMethodID(cls, "binarySearch", "([BB)I");
        mids$[mid_binarySearch_bc761538436b757c] = env->getStaticMethodID(cls, "binarySearch", "([CC)I");
        mids$[mid_binarySearch_7e8bbd82bf9be274] = env->getStaticMethodID(cls, "binarySearch", "([DD)I");
        mids$[mid_binarySearch_c882ad60a4eac0f6] = env->getStaticMethodID(cls, "binarySearch", "([FF)I");
        mids$[mid_binarySearch_d3281055b1e668c7] = env->getStaticMethodID(cls, "binarySearch", "([II)I");
        mids$[mid_binarySearch_069401838fb6a9ce] = env->getStaticMethodID(cls, "binarySearch", "([JJ)I");
        mids$[mid_binarySearch_a81d93e79021413f] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_5df2bb18473aeaf1] = env->getStaticMethodID(cls, "binarySearch", "([SS)I");
        mids$[mid_binarySearch_f5ad0a63ed82769f] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_binarySearch_caf1f81e126163d7] = env->getStaticMethodID(cls, "binarySearch", "([BIIB)I");
        mids$[mid_binarySearch_9ec7fdc16b369dc0] = env->getStaticMethodID(cls, "binarySearch", "([CIIC)I");
        mids$[mid_binarySearch_817093da2b75d61d] = env->getStaticMethodID(cls, "binarySearch", "([DIID)I");
        mids$[mid_binarySearch_8e6949396d7cd4dd] = env->getStaticMethodID(cls, "binarySearch", "([FIIF)I");
        mids$[mid_binarySearch_fa468d0db37bf642] = env->getStaticMethodID(cls, "binarySearch", "([IIII)I");
        mids$[mid_binarySearch_842c2935c925701f] = env->getStaticMethodID(cls, "binarySearch", "([JIIJ)I");
        mids$[mid_binarySearch_4dd8a99b295c75f7] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
        mids$[mid_binarySearch_a7f4f6d4c7a5fac9] = env->getStaticMethodID(cls, "binarySearch", "([SIIS)I");
        mids$[mid_binarySearch_7d133d880b7e9428] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_5395429050e03726] = env->getStaticMethodID(cls, "compare", "([B[B)I");
        mids$[mid_compare_14f51fb00958cc6f] = env->getStaticMethodID(cls, "compare", "([C[C)I");
        mids$[mid_compare_a6a658d065ed87ff] = env->getStaticMethodID(cls, "compare", "([D[D)I");
        mids$[mid_compare_99d04d4acac2a711] = env->getStaticMethodID(cls, "compare", "([F[F)I");
        mids$[mid_compare_f60ba2e14f6d8c9c] = env->getStaticMethodID(cls, "compare", "([I[I)I");
        mids$[mid_compare_96c2d5bde63e2a16] = env->getStaticMethodID(cls, "compare", "([J[J)I");
        mids$[mid_compare_77be83a113883481] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I");
        mids$[mid_compare_b3978eb7b2e97fc6] = env->getStaticMethodID(cls, "compare", "([S[S)I");
        mids$[mid_compare_fa0c844baceead4e] = env->getStaticMethodID(cls, "compare", "([Z[Z)I");
        mids$[mid_compare_985920f46db4e6f0] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_12796a8b6b3049a4] = env->getStaticMethodID(cls, "compare", "([BII[BII)I");
        mids$[mid_compare_7174f3fb624a597b] = env->getStaticMethodID(cls, "compare", "([CII[CII)I");
        mids$[mid_compare_a37071792ac9180b] = env->getStaticMethodID(cls, "compare", "([DII[DII)I");
        mids$[mid_compare_532663f53321c6f8] = env->getStaticMethodID(cls, "compare", "([FII[FII)I");
        mids$[mid_compare_825286fa7f4ccdd1] = env->getStaticMethodID(cls, "compare", "([III[III)I");
        mids$[mid_compare_265c7fb46cb1cef5] = env->getStaticMethodID(cls, "compare", "([JII[JII)I");
        mids$[mid_compare_946579fd8843ca85] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I");
        mids$[mid_compare_c7ad6b4442b08223] = env->getStaticMethodID(cls, "compare", "([SII[SII)I");
        mids$[mid_compare_be3d1f28bbb6068d] = env->getStaticMethodID(cls, "compare", "([ZII[ZII)I");
        mids$[mid_compare_58e3ecea0a272d96] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_compareUnsigned_5395429050e03726] = env->getStaticMethodID(cls, "compareUnsigned", "([B[B)I");
        mids$[mid_compareUnsigned_f60ba2e14f6d8c9c] = env->getStaticMethodID(cls, "compareUnsigned", "([I[I)I");
        mids$[mid_compareUnsigned_96c2d5bde63e2a16] = env->getStaticMethodID(cls, "compareUnsigned", "([J[J)I");
        mids$[mid_compareUnsigned_b3978eb7b2e97fc6] = env->getStaticMethodID(cls, "compareUnsigned", "([S[S)I");
        mids$[mid_compareUnsigned_12796a8b6b3049a4] = env->getStaticMethodID(cls, "compareUnsigned", "([BII[BII)I");
        mids$[mid_compareUnsigned_825286fa7f4ccdd1] = env->getStaticMethodID(cls, "compareUnsigned", "([III[III)I");
        mids$[mid_compareUnsigned_265c7fb46cb1cef5] = env->getStaticMethodID(cls, "compareUnsigned", "([JII[JII)I");
        mids$[mid_compareUnsigned_c7ad6b4442b08223] = env->getStaticMethodID(cls, "compareUnsigned", "([SII[SII)I");
        mids$[mid_copyOf_585310b34d0b1a01] = env->getStaticMethodID(cls, "copyOf", "([BI)[B");
        mids$[mid_copyOf_6efbbd5a58f5927d] = env->getStaticMethodID(cls, "copyOf", "([CI)[C");
        mids$[mid_copyOf_07b003307208ca7c] = env->getStaticMethodID(cls, "copyOf", "([DI)[D");
        mids$[mid_copyOf_4832f35fb77dbbda] = env->getStaticMethodID(cls, "copyOf", "([FI)[F");
        mids$[mid_copyOf_f25fd0424b83c940] = env->getStaticMethodID(cls, "copyOf", "([II)[I");
        mids$[mid_copyOf_8d817f9e03517967] = env->getStaticMethodID(cls, "copyOf", "([JI)[J");
        mids$[mid_copyOf_c2cb044672c8cabd] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
        mids$[mid_copyOf_0146aee3312d6036] = env->getStaticMethodID(cls, "copyOf", "([SI)[S");
        mids$[mid_copyOf_47af8f880c2c83c7] = env->getStaticMethodID(cls, "copyOf", "([ZI)[Z");
        mids$[mid_copyOf_1eee810b86838006] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_458501e7d279be81] = env->getStaticMethodID(cls, "copyOfRange", "([BII)[B");
        mids$[mid_copyOfRange_8c4d4a2d0a5e6ce4] = env->getStaticMethodID(cls, "copyOfRange", "([CII)[C");
        mids$[mid_copyOfRange_3a89ed5ea3adefb8] = env->getStaticMethodID(cls, "copyOfRange", "([DII)[D");
        mids$[mid_copyOfRange_52f318cf4fe52aa5] = env->getStaticMethodID(cls, "copyOfRange", "([FII)[F");
        mids$[mid_copyOfRange_1e6bb2087c76f37c] = env->getStaticMethodID(cls, "copyOfRange", "([III)[I");
        mids$[mid_copyOfRange_018af085437e562a] = env->getStaticMethodID(cls, "copyOfRange", "([JII)[J");
        mids$[mid_copyOfRange_12cf54bf074966d8] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_8567cf27ed20e896] = env->getStaticMethodID(cls, "copyOfRange", "([SII)[S");
        mids$[mid_copyOfRange_48934b4a5406ba35] = env->getStaticMethodID(cls, "copyOfRange", "([ZII)[Z");
        mids$[mid_copyOfRange_fcf2cc9a8751ce95] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_deepEquals_2b4434a50a063c8e] = env->getStaticMethodID(cls, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_deepHashCode_8ef1483ed2967e51] = env->getStaticMethodID(cls, "deepHashCode", "([Ljava/lang/Object;)I");
        mids$[mid_deepToString_9af22e6fa8677423] = env->getStaticMethodID(cls, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_equals_d5b882f16e78e133] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
        mids$[mid_equals_d11ba4afbe3a13bb] = env->getStaticMethodID(cls, "equals", "([C[C)Z");
        mids$[mid_equals_3c9cd66399ef44d7] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
        mids$[mid_equals_3a3ed4baa87ab62d] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
        mids$[mid_equals_3a89abee8ad1e7d2] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
        mids$[mid_equals_9f3fe168122d3e43] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
        mids$[mid_equals_2b4434a50a063c8e] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_equals_b788c922a3ed1ff3] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
        mids$[mid_equals_8d595e971516eedf] = env->getStaticMethodID(cls, "equals", "([Z[Z)Z");
        mids$[mid_equals_667d0f244b2ea050] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z");
        mids$[mid_equals_9ab9031d5a9a17f0] = env->getStaticMethodID(cls, "equals", "([BII[BII)Z");
        mids$[mid_equals_e04a4ba7a4ab046c] = env->getStaticMethodID(cls, "equals", "([CII[CII)Z");
        mids$[mid_equals_1d5126a7928cfb46] = env->getStaticMethodID(cls, "equals", "([DII[DII)Z");
        mids$[mid_equals_331385f619c6dc27] = env->getStaticMethodID(cls, "equals", "([FII[FII)Z");
        mids$[mid_equals_393794aa2372a05b] = env->getStaticMethodID(cls, "equals", "([III[III)Z");
        mids$[mid_equals_7e44a148772cfa6d] = env->getStaticMethodID(cls, "equals", "([JII[JII)Z");
        mids$[mid_equals_bc8a297eac1bf7d6] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z");
        mids$[mid_equals_8eb213ab6f133a10] = env->getStaticMethodID(cls, "equals", "([SII[SII)Z");
        mids$[mid_equals_b06870627438f123] = env->getStaticMethodID(cls, "equals", "([ZII[ZII)Z");
        mids$[mid_equals_1fccae8a1d1f4990] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z");
        mids$[mid_fill_5992c95eaa26b2c6] = env->getStaticMethodID(cls, "fill", "([BB)V");
        mids$[mid_fill_9b6afda17eb9885f] = env->getStaticMethodID(cls, "fill", "([CC)V");
        mids$[mid_fill_3682f2e0c8382fe5] = env->getStaticMethodID(cls, "fill", "([DD)V");
        mids$[mid_fill_ee2d82685afab25e] = env->getStaticMethodID(cls, "fill", "([FF)V");
        mids$[mid_fill_1765849da892a4ee] = env->getStaticMethodID(cls, "fill", "([ZZ)V");
        mids$[mid_fill_fef16b99a212d8f0] = env->getStaticMethodID(cls, "fill", "([II)V");
        mids$[mid_fill_8f83f7949db3dbca] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
        mids$[mid_fill_6427525f82bfd666] = env->getStaticMethodID(cls, "fill", "([JJ)V");
        mids$[mid_fill_476ca0e741263930] = env->getStaticMethodID(cls, "fill", "([SS)V");
        mids$[mid_fill_aba03154ef897e5e] = env->getStaticMethodID(cls, "fill", "([CIIC)V");
        mids$[mid_fill_7b1a2a6e244cb62a] = env->getStaticMethodID(cls, "fill", "([ZIIZ)V");
        mids$[mid_fill_8c06c6c10c3094d9] = env->getStaticMethodID(cls, "fill", "([BIIB)V");
        mids$[mid_fill_08bdc28574a6c9d4] = env->getStaticMethodID(cls, "fill", "([DIID)V");
        mids$[mid_fill_ffa0d7e763910b1b] = env->getStaticMethodID(cls, "fill", "([FIIF)V");
        mids$[mid_fill_074053a80cef3642] = env->getStaticMethodID(cls, "fill", "([IIII)V");
        mids$[mid_fill_17a20a07428a7ffd] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
        mids$[mid_fill_7b0031fa295e6742] = env->getStaticMethodID(cls, "fill", "([JIIJ)V");
        mids$[mid_fill_01e952d39fa31326] = env->getStaticMethodID(cls, "fill", "([SIIS)V");
        mids$[mid_hashCode_67c88f2bf4e7f8b2] = env->getStaticMethodID(cls, "hashCode", "([B)I");
        mids$[mid_hashCode_25cfe021b074188a] = env->getStaticMethodID(cls, "hashCode", "([C)I");
        mids$[mid_hashCode_02c575777cd113f8] = env->getStaticMethodID(cls, "hashCode", "([D)I");
        mids$[mid_hashCode_93b8856bcdf4cb3f] = env->getStaticMethodID(cls, "hashCode", "([F)I");
        mids$[mid_hashCode_a15ca216c6412600] = env->getStaticMethodID(cls, "hashCode", "([I)I");
        mids$[mid_hashCode_feb4c351130b1677] = env->getStaticMethodID(cls, "hashCode", "([J)I");
        mids$[mid_hashCode_8ef1483ed2967e51] = env->getStaticMethodID(cls, "hashCode", "([Ljava/lang/Object;)I");
        mids$[mid_hashCode_36e413a99faba7bf] = env->getStaticMethodID(cls, "hashCode", "([S)I");
        mids$[mid_hashCode_57bbe71ce4cd63fd] = env->getStaticMethodID(cls, "hashCode", "([Z)I");
        mids$[mid_mismatch_5395429050e03726] = env->getStaticMethodID(cls, "mismatch", "([B[B)I");
        mids$[mid_mismatch_14f51fb00958cc6f] = env->getStaticMethodID(cls, "mismatch", "([C[C)I");
        mids$[mid_mismatch_a6a658d065ed87ff] = env->getStaticMethodID(cls, "mismatch", "([D[D)I");
        mids$[mid_mismatch_99d04d4acac2a711] = env->getStaticMethodID(cls, "mismatch", "([F[F)I");
        mids$[mid_mismatch_f60ba2e14f6d8c9c] = env->getStaticMethodID(cls, "mismatch", "([I[I)I");
        mids$[mid_mismatch_96c2d5bde63e2a16] = env->getStaticMethodID(cls, "mismatch", "([J[J)I");
        mids$[mid_mismatch_5015c1fe12fae2a0] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I");
        mids$[mid_mismatch_b3978eb7b2e97fc6] = env->getStaticMethodID(cls, "mismatch", "([S[S)I");
        mids$[mid_mismatch_fa0c844baceead4e] = env->getStaticMethodID(cls, "mismatch", "([Z[Z)I");
        mids$[mid_mismatch_985920f46db4e6f0] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_mismatch_12796a8b6b3049a4] = env->getStaticMethodID(cls, "mismatch", "([BII[BII)I");
        mids$[mid_mismatch_7174f3fb624a597b] = env->getStaticMethodID(cls, "mismatch", "([CII[CII)I");
        mids$[mid_mismatch_a37071792ac9180b] = env->getStaticMethodID(cls, "mismatch", "([DII[DII)I");
        mids$[mid_mismatch_532663f53321c6f8] = env->getStaticMethodID(cls, "mismatch", "([FII[FII)I");
        mids$[mid_mismatch_825286fa7f4ccdd1] = env->getStaticMethodID(cls, "mismatch", "([III[III)I");
        mids$[mid_mismatch_265c7fb46cb1cef5] = env->getStaticMethodID(cls, "mismatch", "([JII[JII)I");
        mids$[mid_mismatch_4cd619146fdfdcb7] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I");
        mids$[mid_mismatch_c7ad6b4442b08223] = env->getStaticMethodID(cls, "mismatch", "([SII[SII)I");
        mids$[mid_mismatch_be3d1f28bbb6068d] = env->getStaticMethodID(cls, "mismatch", "([ZII[ZII)I");
        mids$[mid_mismatch_58e3ecea0a272d96] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_parallelSort_d759c70c6670fd89] = env->getStaticMethodID(cls, "parallelSort", "([B)V");
        mids$[mid_parallelSort_916bf6d42d285c69] = env->getStaticMethodID(cls, "parallelSort", "([C)V");
        mids$[mid_parallelSort_cc18240f4a737f14] = env->getStaticMethodID(cls, "parallelSort", "([D)V");
        mids$[mid_parallelSort_808c9c975518f667] = env->getStaticMethodID(cls, "parallelSort", "([F)V");
        mids$[mid_parallelSort_ec63cb8a58ef5a54] = env->getStaticMethodID(cls, "parallelSort", "([I)V");
        mids$[mid_parallelSort_b8d088127dcc34ef] = env->getStaticMethodID(cls, "parallelSort", "([J)V");
        mids$[mid_parallelSort_5ac22fc04c9cff68] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;)V");
        mids$[mid_parallelSort_93148360e5afe527] = env->getStaticMethodID(cls, "parallelSort", "([S)V");
        mids$[mid_parallelSort_212810d7787267ce] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_parallelSort_ac782c7077255dd3] = env->getStaticMethodID(cls, "parallelSort", "([BII)V");
        mids$[mid_parallelSort_5421d1c1f03cf945] = env->getStaticMethodID(cls, "parallelSort", "([CII)V");
        mids$[mid_parallelSort_91b51b3c05127ead] = env->getStaticMethodID(cls, "parallelSort", "([DII)V");
        mids$[mid_parallelSort_bad5dc7773fa158f] = env->getStaticMethodID(cls, "parallelSort", "([FII)V");
        mids$[mid_parallelSort_6e90031d211c9708] = env->getStaticMethodID(cls, "parallelSort", "([III)V");
        mids$[mid_parallelSort_aca87852c368b8c4] = env->getStaticMethodID(cls, "parallelSort", "([JII)V");
        mids$[mid_parallelSort_cac9579f49628e08] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;II)V");
        mids$[mid_parallelSort_d73dd9ba9346351e] = env->getStaticMethodID(cls, "parallelSort", "([SII)V");
        mids$[mid_parallelSort_7d161439c6cca118] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_sort_d759c70c6670fd89] = env->getStaticMethodID(cls, "sort", "([B)V");
        mids$[mid_sort_916bf6d42d285c69] = env->getStaticMethodID(cls, "sort", "([C)V");
        mids$[mid_sort_cc18240f4a737f14] = env->getStaticMethodID(cls, "sort", "([D)V");
        mids$[mid_sort_808c9c975518f667] = env->getStaticMethodID(cls, "sort", "([F)V");
        mids$[mid_sort_ec63cb8a58ef5a54] = env->getStaticMethodID(cls, "sort", "([I)V");
        mids$[mid_sort_b8d088127dcc34ef] = env->getStaticMethodID(cls, "sort", "([J)V");
        mids$[mid_sort_e41887efdd059644] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;)V");
        mids$[mid_sort_93148360e5afe527] = env->getStaticMethodID(cls, "sort", "([S)V");
        mids$[mid_sort_212810d7787267ce] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_sort_ac782c7077255dd3] = env->getStaticMethodID(cls, "sort", "([BII)V");
        mids$[mid_sort_5421d1c1f03cf945] = env->getStaticMethodID(cls, "sort", "([CII)V");
        mids$[mid_sort_91b51b3c05127ead] = env->getStaticMethodID(cls, "sort", "([DII)V");
        mids$[mid_sort_bad5dc7773fa158f] = env->getStaticMethodID(cls, "sort", "([FII)V");
        mids$[mid_sort_6e90031d211c9708] = env->getStaticMethodID(cls, "sort", "([III)V");
        mids$[mid_sort_aca87852c368b8c4] = env->getStaticMethodID(cls, "sort", "([JII)V");
        mids$[mid_sort_d6fa3fef205f947c] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;II)V");
        mids$[mid_sort_d73dd9ba9346351e] = env->getStaticMethodID(cls, "sort", "([SII)V");
        mids$[mid_sort_7d161439c6cca118] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_spliterator_c66c411433346d22] = env->getStaticMethodID(cls, "spliterator", "([D)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_1509d965f3b5d516] = env->getStaticMethodID(cls, "spliterator", "([I)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_fb1c7969f0cfc8ce] = env->getStaticMethodID(cls, "spliterator", "([J)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_9cfaeddeb38bf34d] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;");
        mids$[mid_spliterator_b5fea5677cd055da] = env->getStaticMethodID(cls, "spliterator", "([DII)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_0f6fa6545c4727de] = env->getStaticMethodID(cls, "spliterator", "([III)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_da51a255fdb63334] = env->getStaticMethodID(cls, "spliterator", "([JII)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_bdde592e86708e9c] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;");
        mids$[mid_stream_72362f5b4201ba22] = env->getStaticMethodID(cls, "stream", "([D)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_13c199dd7611bbb8] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
        mids$[mid_stream_1c2775ba4e5054de] = env->getStaticMethodID(cls, "stream", "([DII)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_417cf9b9d752d1e2] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;");
        mids$[mid_toString_e138d30558f13b3a] = env->getStaticMethodID(cls, "toString", "([B)Ljava/lang/String;");
        mids$[mid_toString_019265aa2e3f6a5e] = env->getStaticMethodID(cls, "toString", "([C)Ljava/lang/String;");
        mids$[mid_toString_1d208720fe1d027f] = env->getStaticMethodID(cls, "toString", "([D)Ljava/lang/String;");
        mids$[mid_toString_d388cf6f460f5c59] = env->getStaticMethodID(cls, "toString", "([F)Ljava/lang/String;");
        mids$[mid_toString_ae74174caf679503] = env->getStaticMethodID(cls, "toString", "([I)Ljava/lang/String;");
        mids$[mid_toString_3ee62df12f7a084a] = env->getStaticMethodID(cls, "toString", "([J)Ljava/lang/String;");
        mids$[mid_toString_9af22e6fa8677423] = env->getStaticMethodID(cls, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_toString_b80788ec020ec68c] = env->getStaticMethodID(cls, "toString", "([S)Ljava/lang/String;");
        mids$[mid_toString_46f29c1051ee9985] = env->getStaticMethodID(cls, "toString", "([Z)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List Arrays::asList(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_asList_6f26a4abc68018f5], a0.this$));
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_39f26e914c3d5dab], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_bc761538436b757c], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_7e8bbd82bf9be274], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_c882ad60a4eac0f6], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_d3281055b1e668c7], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_069401838fb6a9ce], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_a81d93e79021413f], a0.this$, a1.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_5df2bb18473aeaf1], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_f5ad0a63ed82769f], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_caf1f81e126163d7], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_9ec7fdc16b369dc0], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_817093da2b75d61d], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_8e6949396d7cd4dd], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_fa468d0db37bf642], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_842c2935c925701f], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_4dd8a99b295c75f7], a0.this$, a1, a2, a3.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_a7f4f6d4c7a5fac9], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3, const ::java::util::Comparator & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_7d133d880b7e9428], a0.this$, a1, a2, a3.this$, a4.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_5395429050e03726], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_14f51fb00958cc6f], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a6a658d065ed87ff], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_99d04d4acac2a711], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f60ba2e14f6d8c9c], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_96c2d5bde63e2a16], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, const JArray< ::java::lang::Comparable > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_77be83a113883481], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b3978eb7b2e97fc6], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_fa0c844baceead4e], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_985920f46db4e6f0], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_12796a8b6b3049a4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_7174f3fb624a597b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a37071792ac9180b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_532663f53321c6f8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_825286fa7f4ccdd1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_265c7fb46cb1cef5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2, const JArray< ::java::lang::Comparable > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_946579fd8843ca85], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_c7ad6b4442b08223], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_be3d1f28bbb6068d], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_58e3ecea0a272d96], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_5395429050e03726], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_f60ba2e14f6d8c9c], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_96c2d5bde63e2a16], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_b3978eb7b2e97fc6], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_12796a8b6b3049a4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_825286fa7f4ccdd1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_265c7fb46cb1cef5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_c7ad6b4442b08223], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    JArray< jbyte > Arrays::copyOf(const JArray< jbyte > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_585310b34d0b1a01], a0.this$, a1));
    }

    JArray< jchar > Arrays::copyOf(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_6efbbd5a58f5927d], a0.this$, a1));
    }

    JArray< jdouble > Arrays::copyOf(const JArray< jdouble > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_07b003307208ca7c], a0.this$, a1));
    }

    JArray< jfloat > Arrays::copyOf(const JArray< jfloat > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_4832f35fb77dbbda], a0.this$, a1));
    }

    JArray< jint > Arrays::copyOf(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_f25fd0424b83c940], a0.this$, a1));
    }

    JArray< jlong > Arrays::copyOf(const JArray< jlong > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_8d817f9e03517967], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_c2cb044672c8cabd], a0.this$, a1));
    }

    JArray< jshort > Arrays::copyOf(const JArray< jshort > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_0146aee3312d6036], a0.this$, a1));
    }

    JArray< jboolean > Arrays::copyOf(const JArray< jboolean > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_47af8f880c2c83c7], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_1eee810b86838006], a0.this$, a1, a2.this$));
    }

    JArray< jbyte > Arrays::copyOfRange(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_458501e7d279be81], a0.this$, a1, a2));
    }

    JArray< jchar > Arrays::copyOfRange(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_8c4d4a2d0a5e6ce4], a0.this$, a1, a2));
    }

    JArray< jdouble > Arrays::copyOfRange(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_3a89ed5ea3adefb8], a0.this$, a1, a2));
    }

    JArray< jfloat > Arrays::copyOfRange(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_52f318cf4fe52aa5], a0.this$, a1, a2));
    }

    JArray< jint > Arrays::copyOfRange(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_1e6bb2087c76f37c], a0.this$, a1, a2));
    }

    JArray< jlong > Arrays::copyOfRange(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_018af085437e562a], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_12cf54bf074966d8], a0.this$, a1, a2));
    }

    JArray< jshort > Arrays::copyOfRange(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_8567cf27ed20e896], a0.this$, a1, a2));
    }

    JArray< jboolean > Arrays::copyOfRange(const JArray< jboolean > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_48934b4a5406ba35], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Class & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_fcf2cc9a8751ce95], a0.this$, a1, a2, a3.this$));
    }

    jboolean Arrays::deepEquals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_deepEquals_2b4434a50a063c8e], a0.this$, a1.this$);
    }

    jint Arrays::deepHashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_deepHashCode_8ef1483ed2967e51], a0.this$);
    }

    ::java::lang::String Arrays::deepToString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_deepToString_9af22e6fa8677423], a0.this$));
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d5b882f16e78e133], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d11ba4afbe3a13bb], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_3c9cd66399ef44d7], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_3a3ed4baa87ab62d], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_3a89abee8ad1e7d2], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9f3fe168122d3e43], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_2b4434a50a063c8e], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b788c922a3ed1ff3], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_8d595e971516eedf], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_667d0f244b2ea050], a0.this$, a1.this$, a2.this$);
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9ab9031d5a9a17f0], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_e04a4ba7a4ab046c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_1d5126a7928cfb46], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_331385f619c6dc27], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_393794aa2372a05b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_7e44a148772cfa6d], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_bc8a297eac1bf7d6], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_8eb213ab6f133a10], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b06870627438f123], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_1fccae8a1d1f4990], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_5992c95eaa26b2c6], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_9b6afda17eb9885f], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_3682f2e0c8382fe5], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ee2d82685afab25e], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_1765849da892a4ee], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_fef16b99a212d8f0], a0.this$, a1);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_8f83f7949db3dbca], a0.this$, a1.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_6427525f82bfd666], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_476ca0e741263930], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_aba03154ef897e5e], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jint a1, jint a2, jboolean a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_7b1a2a6e244cb62a], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_8c06c6c10c3094d9], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_08bdc28574a6c9d4], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ffa0d7e763910b1b], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_074053a80cef3642], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_17a20a07428a7ffd], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_7b0031fa295e6742], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_01e952d39fa31326], a0.this$, a1, a2, a3);
    }

    jint Arrays::hashCode(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_67c88f2bf4e7f8b2], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_25cfe021b074188a], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_02c575777cd113f8], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_93b8856bcdf4cb3f], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a15ca216c6412600], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_feb4c351130b1677], a0.this$);
    }

    jint Arrays::hashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_8ef1483ed2967e51], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_36e413a99faba7bf], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_57bbe71ce4cd63fd], a0.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5395429050e03726], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_14f51fb00958cc6f], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_a6a658d065ed87ff], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_99d04d4acac2a711], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_f60ba2e14f6d8c9c], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_96c2d5bde63e2a16], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5015c1fe12fae2a0], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_b3978eb7b2e97fc6], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_fa0c844baceead4e], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_985920f46db4e6f0], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_12796a8b6b3049a4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_7174f3fb624a597b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_a37071792ac9180b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_532663f53321c6f8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_825286fa7f4ccdd1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_265c7fb46cb1cef5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_4cd619146fdfdcb7], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_c7ad6b4442b08223], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_be3d1f28bbb6068d], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_58e3ecea0a272d96], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d759c70c6670fd89], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_916bf6d42d285c69], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_cc18240f4a737f14], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_808c9c975518f667], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_ec63cb8a58ef5a54], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_b8d088127dcc34ef], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_5ac22fc04c9cff68], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_93148360e5afe527], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_212810d7787267ce], a0.this$, a1.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_ac782c7077255dd3], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_5421d1c1f03cf945], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_91b51b3c05127ead], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_bad5dc7773fa158f], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_6e90031d211c9708], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_aca87852c368b8c4], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_cac9579f49628e08], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d73dd9ba9346351e], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_7d161439c6cca118], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d759c70c6670fd89], a0.this$);
    }

    void Arrays::sort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_916bf6d42d285c69], a0.this$);
    }

    void Arrays::sort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_cc18240f4a737f14], a0.this$);
    }

    void Arrays::sort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_808c9c975518f667], a0.this$);
    }

    void Arrays::sort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_ec63cb8a58ef5a54], a0.this$);
    }

    void Arrays::sort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_b8d088127dcc34ef], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_e41887efdd059644], a0.this$);
    }

    void Arrays::sort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_93148360e5afe527], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_212810d7787267ce], a0.this$, a1.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_ac782c7077255dd3], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_5421d1c1f03cf945], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_91b51b3c05127ead], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_bad5dc7773fa158f], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_6e90031d211c9708], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_aca87852c368b8c4], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d6fa3fef205f947c], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d73dd9ba9346351e], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_7d161439c6cca118], a0.this$, a1, a2, a3.this$);
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_c66c411433346d22], a0.this$));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_1509d965f3b5d516], a0.this$));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_fb1c7969f0cfc8ce], a0.this$));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_9cfaeddeb38bf34d], a0.this$));
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_b5fea5677cd055da], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_0f6fa6545c4727de], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_da51a255fdb63334], a0.this$, a1, a2));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_bdde592e86708e9c], a0.this$, a1, a2));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_72362f5b4201ba22], a0.this$));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_13c199dd7611bbb8], a0.this$));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_1c2775ba4e5054de], a0.this$, a1, a2));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_417cf9b9d752d1e2], a0.this$, a1, a2));
    }

    ::java::lang::String Arrays::toString(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e138d30558f13b3a], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_019265aa2e3f6a5e], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_1d208720fe1d027f], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_d388cf6f460f5c59], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_ae74174caf679503], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_3ee62df12f7a084a], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_9af22e6fa8677423], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_b80788ec020ec68c], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_46f29c1051ee9985], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Arrays__methods_[] = {
      DECLARE_METHOD(t_Arrays, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, asList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOfRange, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepEquals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepToString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, equals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, hashCode, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, mismatch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, parallelSort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, spliterator, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, stream, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, toString, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Arrays)[] = {
      { Py_tp_methods, t_Arrays__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Arrays)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Arrays, t_Arrays, Arrays);

    void t_Arrays::install(PyObject *module)
    {
      installType(&PY_TYPE(Arrays), &PY_TYPE_DEF(Arrays), module, "Arrays", 0);
    }

    void t_Arrays::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "class_", make_descriptor(Arrays::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "wrapfn_", make_descriptor(t_Arrays::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Arrays::initializeClass, 1)))
        return NULL;
      return t_Arrays::wrap_Object(Arrays(((t_Arrays *) arg)->object.this$));
    }
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Arrays::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::asList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asList", arg);
      return NULL;
    }

    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;
          jint result;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;
          jint result;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          jint result;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;
          jint result;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;
          jint result;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;
          jint result;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[ooK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;
          jint result;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;
          jint result;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;
          jint result;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;
          jint result;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;
          jint result;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;
          jint result;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          ::java::util::Comparator a4((jobject) NULL);
          PyTypeObject **p4;
          jint result;

          if (!parseArgs(args, "[oIIoK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::java::lang::Comparable > a1((jobject) NULL);
          PyTypeObject **p1;
          jint result;

          if (!parseArgs(args, "[K[K", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::java::lang::Comparable > a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[KII[KII", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2, &a3, &p3, ::java::lang::t_Comparable::parameters_, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          ::java::lang::Class a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &p2, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOf", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Class a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOfRange", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "[o[o", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepEquals(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "deepEquals", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "deepHashCode", arg);
      return NULL;
    }

    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepToString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "deepToString", arg);
      return NULL;
    }

    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jboolean result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5, a6));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(type, "equals", args, 2);
    }

    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jboolean > a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "[ZZ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          jboolean a3;

          if (!parseArgs(args, "[ZIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(type, "hashCode", args, 2);
    }

    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "mismatch", args);
      return NULL;
    }

    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "[K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1));
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
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;

          if (!parseArgs(args, "[KII", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "parallelSort", args);
      return NULL;
    }

    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1));
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
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "spliterator", args);
      return NULL;
    }

    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "stream", args);
      return NULL;
    }

    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
      }

      return callSuper(type, "toString", args, 2);
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmSegment::class$ = NULL;
            jmethodID *CdmSegment::mids$ = NULL;
            bool CdmSegment::live$ = false;

            jclass CdmSegment::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmSegment");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e13e9cba5eb5a215] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmSegment::CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_e13e9cba5eb5a215, a0.this$, a1.this$)) {}
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
            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args);
            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data);
            static PyGetSetDef t_CdmSegment__fields_[] = {
              DECLARE_GET_FIELD(t_CdmSegment, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmSegment__methods_[] = {
              DECLARE_METHOD(t_CdmSegment, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmSegment)[] = {
              { Py_tp_methods, t_CdmSegment__methods_ },
              { Py_tp_init, (void *) t_CdmSegment_init_ },
              { Py_tp_getset, t_CdmSegment__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmSegment)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
              NULL
            };

            DEFINE_TYPE(CdmSegment, t_CdmSegment, CdmSegment);
            PyObject *t_CdmSegment::wrap_Object(const CdmSegment& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CdmSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CdmSegment::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmSegment), &PY_TYPE_DEF(CdmSegment), module, "CdmSegment", 0);
            }

            void t_CdmSegment::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "class_", make_descriptor(CdmSegment::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "wrapfn_", make_descriptor(t_CdmSegment::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmSegment::initializeClass, 1)))
                return NULL;
              return t_CdmSegment::wrap_Object(CdmSegment(((t_CdmSegment *) arg)->object.this$));
            }
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmSegment::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmData a1((jobject) NULL);
              CdmSegment object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmData::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CdmSegment(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmMetadata);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmData);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
