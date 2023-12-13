#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockPhaseModifier::RelativisticJ2ClockPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockPhaseModifier, t_RelativisticJ2ClockPhaseModifier, RelativisticJ2ClockPhaseModifier);

          void t_RelativisticJ2ClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockPhaseModifier), module, "RelativisticJ2ClockPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockPhaseModifier::wrap_Object(RelativisticJ2ClockPhaseModifier(((t_RelativisticJ2ClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data)
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
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_c7e68cf2401062fd] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_872f190ac7ffe0f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b670b6e7cd40e596] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_fd2e66a314bc77cb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;[D)V");
          mids$[mid_init$_136c54c807e8c570] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_0ad57d795b6bdcc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_14e96e1b42b3aaeb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_8fb9c03e955e6f39] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Z)V");
          mids$[mid_init$_2808bdf785b578a3] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_4484ad1f15b73c7a] = env->getMethodID(cls, "<init>", "([DII)V");
          mids$[mid_init$_b2d8b7a982f6fb43] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;II)V");
          mids$[mid_add_6191e02c06d75da8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_addToEntry_d5322b8b512aeb26] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_4a88e3f3ab3e637f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayRealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_append_d5f1d017fd25113b] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_0af7505d8931441d] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_981619d5e906c355] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_combineToSelf_981619d5e906c355] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_copy_b74ad06a0adaf5ef] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_dotProduct_532b95759e51e831] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_6191e02c06d75da8] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_ebeMultiply_6191e02c06d75da8] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_25e1757a36c4dde2] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_532b95759e51e831] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_2afcbc21f4e57ab2] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_532b95759e51e831] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_b74f83833fdad017] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_532b95759e51e831] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_b74f83833fdad017] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_71fee5b03bacb96b] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_map_d27eccf693724188] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_mapAddToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_d27eccf693724188] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_outerProduct_847a33a82b65c746] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_set_8ba9fe7a847cecad] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_d5322b8b512aeb26] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_75061e5f5bbace93] = env->getMethodID(cls, "setSubVector", "(I[D)V");
          mids$[mid_setSubVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_subtract_6191e02c06d75da8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_3b0a64df0d6d5970] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5765b86ec2dc0005] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_e0df9aff405997ab] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_dc41fc18b07911cf] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_3b0a64df0d6d5970] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5765b86ec2dc0005] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_e0df9aff405997ab] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_dc41fc18b07911cf] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_872f190ac7ffe0f7] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_44ed599e93e8a30c] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayRealVector::ArrayRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_c7e68cf2401062fd, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_872f190ac7ffe0f7, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(jint a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_b670b6e7cd40e596, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_fd2e66a314bc77cb, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_136c54c807e8c570, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ::org::hipparchus::linear::RealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0ad57d795b6bdcc2, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_14e96e1b42b3aaeb, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_8fb9c03e955e6f39, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_2808bdf785b578a3, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_4484ad1f15b73c7a, a0.this$, a1, a2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_b2d8b7a982f6fb43, a0.this$, a1, a2)) {}

      ArrayRealVector ArrayRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_add_6191e02c06d75da8], a0.this$));
      }

      void ArrayRealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d5322b8b512aeb26], a0, a1);
      }

      ArrayRealVector ArrayRealVector::append(const ArrayRealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_append_4a88e3f3ab3e637f], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_0af7505d8931441d], a0));
      }

      ArrayRealVector ArrayRealVector::combine(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combine_981619d5e906c355], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::combineToSelf(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_981619d5e906c355], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::copy() const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_copy_b74ad06a0adaf5ef]));
      }

      jdouble ArrayRealVector::dotProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_532b95759e51e831], a0.this$);
      }

      ArrayRealVector ArrayRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_6191e02c06d75da8], a0.this$));
      }

      ArrayRealVector ArrayRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_6191e02c06d75da8], a0.this$));
      }

      jboolean ArrayRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      JArray< jdouble > ArrayRealVector::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_25e1757a36c4dde2]));
      }

      jint ArrayRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      jdouble ArrayRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_532b95759e51e831], a0.this$);
      }

      jdouble ArrayRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_2afcbc21f4e57ab2], a0);
      }

      jdouble ArrayRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_532b95759e51e831], a0.this$);
      }

      jdouble ArrayRealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_b74f83833fdad017]);
      }

      jdouble ArrayRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_532b95759e51e831], a0.this$);
      }

      jdouble ArrayRealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_b74f83833fdad017]);
      }

      jdouble ArrayRealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_71fee5b03bacb96b], a0, a1));
      }

      jint ArrayRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean ArrayRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean ArrayRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      ArrayRealVector ArrayRealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_map_d27eccf693724188], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapAddToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_0af7505d8931441d], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapDivideToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_0af7505d8931441d], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_0af7505d8931441d], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapSubtractToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_0af7505d8931441d], a0));
      }

      ArrayRealVector ArrayRealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_d27eccf693724188], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix ArrayRealVector::outerProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_847a33a82b65c746], a0.this$));
      }

      void ArrayRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8ba9fe7a847cecad], a0);
      }

      void ArrayRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d5322b8b512aeb26], a0, a1);
      }

      void ArrayRealVector::setSubVector(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_75061e5f5bbace93], a0, a1.this$);
      }

      void ArrayRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      ArrayRealVector ArrayRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_subtract_6191e02c06d75da8], a0.this$));
      }

      JArray< jdouble > ArrayRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
      }

      ::java::lang::String ArrayRealVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_3b0a64df0d6d5970], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5765b86ec2dc0005], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_e0df9aff405997ab], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_dc41fc18b07911cf], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3b0a64df0d6d5970], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5765b86ec2dc0005], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_e0df9aff405997ab], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_dc41fc18b07911cf], a0.this$, a1, a2);
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
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_b74f83833fdad017]);
          }

          jint SphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_55546ef6a647f39b]);
          }

          jint SphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_55546ef6a647f39b]);
          }

          jdouble SphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
          }

          ::org::orekit::time::AbsoluteDate SphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
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
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$HeaderLineWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter$HeaderLineWriter::mids$ = NULL;
        bool StreamingCpfWriter$HeaderLineWriter::live$ = false;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H1 = NULL;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H2 = NULL;

        jclass StreamingCpfWriter$HeaderLineWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getIdentifier", "()Ljava/lang/String;");
            mids$[mid_valueOf_b5389b625872772a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_values_afe2856f4377f9d1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_write_1a2e19922e339da8] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ilrs/CPFHeader;Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            H1 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H1", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            H2 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H2", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String StreamingCpfWriter$HeaderLineWriter::getIdentifier() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIdentifier_1c1fa1e935d6cdcf]));
        }

        StreamingCpfWriter$HeaderLineWriter StreamingCpfWriter$HeaderLineWriter::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StreamingCpfWriter$HeaderLineWriter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b5389b625872772a], a0.this$));
        }

        JArray< StreamingCpfWriter$HeaderLineWriter > StreamingCpfWriter$HeaderLineWriter::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StreamingCpfWriter$HeaderLineWriter >(env->callStaticObjectMethod(cls, mids$[mid_values_afe2856f4377f9d1]));
        }

        void StreamingCpfWriter$HeaderLineWriter::write(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::java::lang::Appendable & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_write_1a2e19922e339da8], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyGetSetDef t_StreamingCpfWriter$HeaderLineWriter__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, identifier),
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingCpfWriter$HeaderLineWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, of_, METH_VARARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, getIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, values, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$HeaderLineWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$HeaderLineWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StreamingCpfWriter$HeaderLineWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$HeaderLineWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$HeaderLineWriter, t_StreamingCpfWriter$HeaderLineWriter, StreamingCpfWriter$HeaderLineWriter);
        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(const StreamingCpfWriter$HeaderLineWriter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StreamingCpfWriter$HeaderLineWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$HeaderLineWriter), &PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter), module, "StreamingCpfWriter$HeaderLineWriter", 0);
        }

        void t_StreamingCpfWriter$HeaderLineWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "class_", make_descriptor(StreamingCpfWriter$HeaderLineWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "boxfn_", make_descriptor(boxObject));
          env->getClass(StreamingCpfWriter$HeaderLineWriter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H1", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H2", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H2)));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(StreamingCpfWriter$HeaderLineWriter(((t_StreamingCpfWriter$HeaderLineWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIdentifier());
          return j2p(result);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StreamingCpfWriter$HeaderLineWriter result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::valueOf(a0));
            return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type)
        {
          JArray< StreamingCpfWriter$HeaderLineWriter > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::values());
          return JArray<jobject>(result.this$).wrap(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
          ::java::lang::Appendable a1((jobject) NULL);
          ::org::orekit::time::TimeScale a2((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIdentifier());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenZonalLinear::class$ = NULL;
              jmethodID *FieldHansenZonalLinear::mids$ = NULL;
              bool FieldHansenZonalLinear::live$ = false;

              jclass FieldHansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d406983711b212ac] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_f2b4bfa0af1007e8] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_23984a6e38b0b1f2] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_23984a6e38b0b1f2] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenZonalLinear::FieldHansenZonalLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d406983711b212ac, a0, a1, a2.this$)) {}

              void FieldHansenZonalLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_f2b4bfa0af1007e8], a0.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_23984a6e38b0b1f2], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_23984a6e38b0b1f2], a0, a1.this$));
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
              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args);
              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data);
              static PyGetSetDef t_FieldHansenZonalLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenZonalLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenZonalLinear)[] = {
                { Py_tp_methods, t_FieldHansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenZonalLinear_init_ },
                { Py_tp_getset, t_FieldHansenZonalLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenZonalLinear, t_FieldHansenZonalLinear, FieldHansenZonalLinear);
              PyObject *t_FieldHansenZonalLinear::wrap_Object(const FieldHansenZonalLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenZonalLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenZonalLinear), &PY_TYPE_DEF(FieldHansenZonalLinear), module, "FieldHansenZonalLinear", 0);
              }

              void t_FieldHansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "class_", make_descriptor(FieldHansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "wrapfn_", make_descriptor(t_FieldHansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenZonalLinear::wrap_Object(FieldHansenZonalLinear(((t_FieldHansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenZonalLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareComparator::class$ = NULL;
          jmethodID *IntegerLeastSquareComparator::mids$ = NULL;
          bool IntegerLeastSquareComparator::live$ = false;

          jclass IntegerLeastSquareComparator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_compare_85e1b22222045925] = env->getMethodID(cls, "compare", "(Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareComparator::IntegerLeastSquareComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          jint IntegerLeastSquareComparator::compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a1) const
          {
            return env->callIntMethod(this$, mids$[mid_compare_85e1b22222045925], a0.this$, a1.this$);
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
          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareComparator__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareComparator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, compare, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareComparator)[] = {
            { Py_tp_methods, t_IntegerLeastSquareComparator__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareComparator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareComparator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareComparator, t_IntegerLeastSquareComparator, IntegerLeastSquareComparator);

          void t_IntegerLeastSquareComparator::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareComparator), &PY_TYPE_DEF(IntegerLeastSquareComparator), module, "IntegerLeastSquareComparator", 0);
          }

          void t_IntegerLeastSquareComparator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "class_", make_descriptor(IntegerLeastSquareComparator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "wrapfn_", make_descriptor(t_IntegerLeastSquareComparator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareComparator::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareComparator::wrap_Object(IntegerLeastSquareComparator(((t_IntegerLeastSquareComparator *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareComparator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds)
          {
            IntegerLeastSquareComparator object((jobject) NULL);

            INT_CALL(object = IntegerLeastSquareComparator());
            self->object = object;

            return 0;
          }

          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.compare(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "compare", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *NewtonRaphsonSolver::class$ = NULL;
        jmethodID *NewtonRaphsonSolver::mids$ = NULL;
        bool NewtonRaphsonSolver::live$ = false;

        jclass NewtonRaphsonSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/NewtonRaphsonSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_solve_2664d0382d222353] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DD)D");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonRaphsonSolver::NewtonRaphsonSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        NewtonRaphsonSolver::NewtonRaphsonSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble NewtonRaphsonSolver::solve(jint a0, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_2664d0382d222353], a0, a1.this$, a2, a3);
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
        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args);
        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args);
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data);
        static PyGetSetDef t_NewtonRaphsonSolver__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonRaphsonSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonRaphsonSolver__methods_[] = {
          DECLARE_METHOD(t_NewtonRaphsonSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonRaphsonSolver)[] = {
          { Py_tp_methods, t_NewtonRaphsonSolver__methods_ },
          { Py_tp_init, (void *) t_NewtonRaphsonSolver_init_ },
          { Py_tp_getset, t_NewtonRaphsonSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonRaphsonSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver),
          NULL
        };

        DEFINE_TYPE(NewtonRaphsonSolver, t_NewtonRaphsonSolver, NewtonRaphsonSolver);
        PyObject *t_NewtonRaphsonSolver::wrap_Object(const NewtonRaphsonSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NewtonRaphsonSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NewtonRaphsonSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonRaphsonSolver), &PY_TYPE_DEF(NewtonRaphsonSolver), module, "NewtonRaphsonSolver", 0);
        }

        void t_NewtonRaphsonSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "class_", make_descriptor(NewtonRaphsonSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "wrapfn_", make_descriptor(t_NewtonRaphsonSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonRaphsonSolver::initializeClass, 1)))
            return NULL;
          return t_NewtonRaphsonSolver::wrap_Object(NewtonRaphsonSolver(((t_NewtonRaphsonSolver *) arg)->object.this$));
        }
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonRaphsonSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NewtonRaphsonSolver object((jobject) NULL);

              INT_CALL(object = NewtonRaphsonSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              NewtonRaphsonSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = NewtonRaphsonSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NewtonRaphsonSolver), (PyObject *) self, "solve", args, 2);
        }
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GMSTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeScales::class$ = NULL;
      jmethodID *AbstractTimeScales::mids$ = NULL;
      bool AbstractTimeScales::live$ = false;

      jclass AbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_f359a0110559347a] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_f359a0110559347a] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBeidouEpoch_c325492395d89b24] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_c325492395d89b24] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_c325492395d89b24] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_c325492395d89b24] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGMST_375ab849f7e3d9ee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGalileoEpoch_c325492395d89b24] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_c325492395d89b24] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_c325492395d89b24] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIrnssEpoch_c325492395d89b24] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_c325492395d89b24] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_c325492395d89b24] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_c325492395d89b24] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQzssEpoch_c325492395d89b24] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getUT1_246820b70f2cddeb] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_0d98cf69977e0c28] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getEopHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeScales::AbstractTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_f359a0110559347a], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_f359a0110559347a], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_c325492395d89b24]));
      }

      ::org::orekit::time::GMSTScale AbstractTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_375ab849f7e3d9ee], a0.this$, a1));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::UT1Scale AbstractTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_246820b70f2cddeb], a0.this$, a1));
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
      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data);
      static PyGetSetDef t_AbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, qzssEpoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getUT1, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeScales)[] = {
        { Py_tp_methods, t_AbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeScales_init_ },
        { Py_tp_getset, t_AbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeScales, t_AbstractTimeScales, AbstractTimeScales);

      void t_AbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeScales), &PY_TYPE_DEF(AbstractTimeScales), module, "AbstractTimeScales", 0);
      }

      void t_AbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "class_", make_descriptor(AbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "wrapfn_", make_descriptor(t_AbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeScales::wrap_Object(AbstractTimeScales(((t_AbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        AbstractTimeScales object((jobject) NULL);

        INT_CALL(object = AbstractTimeScales());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorBuilder::class$ = NULL;
        jmethodID *PythonPropagatorBuilder::mids$ = NULL;
        bool PythonPropagatorBuilder::live$ = false;

        jclass PythonPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_563e3d88178dadb8] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_c325492395d89b24] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetOrbit_69b47a274eed440d] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorBuilder::PythonPropagatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonPropagatorBuilder::pythonExtension(jlong a0) const
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
      namespace conversion {
        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self);
        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorBuilder, t_PythonPropagatorBuilder, PythonPropagatorBuilder);

        void t_PythonPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorBuilder), &PY_TYPE_DEF(PythonPropagatorBuilder), module, "PythonPropagatorBuilder", 1);
        }

        void t_PythonPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "class_", make_descriptor(PythonPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonPropagatorBuilder_copy2 },
            { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagatorBuilder_getFrame3 },
            { "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonPropagatorBuilder_getInitialOrbitDate4 },
            { "getMu", "()D", (void *) t_PythonPropagatorBuilder_getMu5 },
            { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonPropagatorBuilder_getOrbitType6 },
            { "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getOrbitalParametersDrivers7 },
            { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonPropagatorBuilder_getPositionAngleType8 },
            { "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getPropagationParametersDrivers9 },
            { "getSelectedNormalizedParameters", "()[D", (void *) t_PythonPropagatorBuilder_getSelectedNormalizedParameters10 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorBuilder_pythonDecRef11 },
            { "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V", (void *) t_PythonPropagatorBuilder_resetOrbit12 },
          };
          env->registerNatives(cls, methods, 13);
        }

        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorBuilder::wrap_Object(PythonPropagatorBuilder(((t_PythonPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorBuilder object((jobject) NULL);

          INT_CALL(object = PythonPropagatorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getFrame", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInitialOrbitDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getInitialOrbitDate", result);
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

        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
          {
            throwTypeError("getOrbitType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitalParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getOrbitalParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
          {
            throwTypeError("getPositionAngleType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPropagationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getPropagationParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedNormalizedParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getSelectedNormalizedParameters", result);
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

        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *result = PyObject_CallMethod(obj, "resetOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data)
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
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldFunctionalDetector::class$ = NULL;
        jmethodID *FieldFunctionalDetector::mids$ = NULL;
        bool FieldFunctionalDetector::live$ = false;

        jclass FieldFunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldFunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_a5422a32ae444df9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldFunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldFunctionalDetector::FieldFunctionalDetector(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldFunctionalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
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
        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args);
        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args);
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data);
        static PyGetSetDef t_FieldFunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldFunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldFunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldFunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldFunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldFunctionalDetector)[] = {
          { Py_tp_methods, t_FieldFunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldFunctionalDetector_init_ },
          { Py_tp_getset, t_FieldFunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldFunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldFunctionalDetector, t_FieldFunctionalDetector, FieldFunctionalDetector);
        PyObject *t_FieldFunctionalDetector::wrap_Object(const FieldFunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldFunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldFunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldFunctionalDetector), &PY_TYPE_DEF(FieldFunctionalDetector), module, "FieldFunctionalDetector", 0);
        }

        void t_FieldFunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "class_", make_descriptor(FieldFunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "wrapfn_", make_descriptor(t_FieldFunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldFunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldFunctionalDetector::wrap_Object(FieldFunctionalDetector(((t_FieldFunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldFunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldFunctionalDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            INT_CALL(object = FieldFunctionalDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldFunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Enum.h"
#include "java/io/Serializable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Enum::class$ = NULL;
    jmethodID *Enum::mids$ = NULL;
    bool Enum::live$ = false;

    jclass Enum::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Enum");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_970dc9d7023c3026] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Enum;)I");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDeclaringClass_1aeb0737a960d371] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_name_1c1fa1e935d6cdcf] = env->getMethodID(cls, "name", "()Ljava/lang/String;");
        mids$[mid_ordinal_55546ef6a647f39b] = env->getMethodID(cls, "ordinal", "()I");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_valueOf_1b9de4ad908f58c0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
        mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Enum::compareTo(const Enum & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_970dc9d7023c3026], a0.this$);
    }

    jboolean Enum::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Class Enum::getDeclaringClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_1aeb0737a960d371]));
    }

    jint Enum::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    ::java::lang::String Enum::name() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_name_1c1fa1e935d6cdcf]));
    }

    jint Enum::ordinal() const
    {
      return env->callIntMethod(this$, mids$[mid_ordinal_55546ef6a647f39b]);
    }

    ::java::lang::String Enum::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    Enum Enum::valueOf(const ::java::lang::Class & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Enum(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1b9de4ad908f58c0], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg);
    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_getDeclaringClass(t_Enum *self);
    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_name(t_Enum *self);
    static PyObject *t_Enum_ordinal(t_Enum *self);
    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data);
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data);
    static PyGetSetDef t_Enum__fields_[] = {
      DECLARE_GET_FIELD(t_Enum, declaringClass),
      DECLARE_GET_FIELD(t_Enum, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enum__methods_[] = {
      DECLARE_METHOD(t_Enum, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enum, compareTo, METH_O),
      DECLARE_METHOD(t_Enum, equals, METH_VARARGS),
      DECLARE_METHOD(t_Enum, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Enum, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Enum, name, METH_NOARGS),
      DECLARE_METHOD(t_Enum, ordinal, METH_NOARGS),
      DECLARE_METHOD(t_Enum, toString, METH_VARARGS),
      DECLARE_METHOD(t_Enum, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enum)[] = {
      { Py_tp_methods, t_Enum__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enum__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enum)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enum, t_Enum, Enum);
    PyObject *t_Enum::wrap_Object(const Enum& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enum::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enum::install(PyObject *module)
    {
      installType(&PY_TYPE(Enum), &PY_TYPE_DEF(Enum), module, "Enum", 0);
    }

    void t_Enum::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "class_", make_descriptor(Enum::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "wrapfn_", make_descriptor(t_Enum::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enum::initializeClass, 1)))
        return NULL;
      return t_Enum::wrap_Object(Enum(((t_Enum *) arg)->object.this$));
    }
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enum::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg)
    {
      Enum a0((jobject) NULL);
      PyTypeObject **p0;
      jint result;

      if (!parseArg(arg, "K", Enum::initializeClass, &a0, &p0, t_Enum::parameters_))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Enum_getDeclaringClass(t_Enum *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Enum_name(t_Enum *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.name());
      return j2p(result);
    }

    static PyObject *t_Enum_ordinal(t_Enum *self)
    {
      jint result;
      OBJ_CALL(result = self->object.ordinal());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::String a1((jobject) NULL);
      Enum result((jobject) NULL);

      if (!parseArgs(args, "Ks", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::lang::Enum::valueOf(a0, a1));
        return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : t_Enum::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationFromSatelliteDetector::class$ = NULL;
        jmethodID *AngularSeparationFromSatelliteDetector::mids$ = NULL;
        bool AngularSeparationFromSatelliteDetector::live$ = false;

        jclass AngularSeparationFromSatelliteDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationFromSatelliteDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd7c2e53f14940e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getPrimaryObject_8a41319e47f3bd7c] = env->getMethodID(cls, "getPrimaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_b74f83833fdad017] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_getSecondaryObject_8a41319e47f3bd7c] = env->getMethodID(cls, "getSecondaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_c866229f17fb160d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationFromSatelliteDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationFromSatelliteDetector::AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fd7c2e53f14940e1, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationFromSatelliteDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getPrimaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPrimaryObject_8a41319e47f3bd7c]));
        }

        jdouble AngularSeparationFromSatelliteDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_b74f83833fdad017]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getSecondaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryObject_8a41319e47f3bd7c]));
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
        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationFromSatelliteDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, primaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, secondaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationFromSatelliteDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getPrimaryObject, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getProximityAngle, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getSecondaryObject, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationFromSatelliteDetector)[] = {
          { Py_tp_methods, t_AngularSeparationFromSatelliteDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationFromSatelliteDetector_init_ },
          { Py_tp_getset, t_AngularSeparationFromSatelliteDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationFromSatelliteDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationFromSatelliteDetector, t_AngularSeparationFromSatelliteDetector, AngularSeparationFromSatelliteDetector);
        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_Object(const AngularSeparationFromSatelliteDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationFromSatelliteDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationFromSatelliteDetector), &PY_TYPE_DEF(AngularSeparationFromSatelliteDetector), module, "AngularSeparationFromSatelliteDetector", 0);
        }

        void t_AngularSeparationFromSatelliteDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "class_", make_descriptor(AngularSeparationFromSatelliteDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "wrapfn_", make_descriptor(t_AngularSeparationFromSatelliteDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationFromSatelliteDetector::wrap_Object(AngularSeparationFromSatelliteDetector(((t_AngularSeparationFromSatelliteDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationFromSatelliteDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationFromSatelliteDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationFromSatelliteDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationFromSatelliteDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Gamma.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Gamma::class$ = NULL;
      jmethodID *Gamma::mids$ = NULL;
      bool Gamma::live$ = false;
      jdouble Gamma::GAMMA = (jdouble) 0;
      jdouble Gamma::LANCZOS_G = (jdouble) 0;

      jclass Gamma::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Gamma");

          mids$ = new jmethodID[max_mid];
          mids$[mid_digamma_04fd0666b613d2ab] = env->getStaticMethodID(cls, "digamma", "(D)D");
          mids$[mid_digamma_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "digamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_gamma_04fd0666b613d2ab] = env->getStaticMethodID(cls, "gamma", "(D)D");
          mids$[mid_gamma_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "gamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_invGamma1pm1_04fd0666b613d2ab] = env->getStaticMethodID(cls, "invGamma1pm1", "(D)D");
          mids$[mid_invGamma1pm1_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "invGamma1pm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_lanczos_04fd0666b613d2ab] = env->getStaticMethodID(cls, "lanczos", "(D)D");
          mids$[mid_lanczos_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "lanczos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma_04fd0666b613d2ab] = env->getStaticMethodID(cls, "logGamma", "(D)D");
          mids$[mid_logGamma_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "logGamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma1p_04fd0666b613d2ab] = env->getStaticMethodID(cls, "logGamma1p", "(D)D");
          mids$[mid_logGamma1p_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "logGamma1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_99e3200dafc19573] = env->getStaticMethodID(cls, "regularizedGammaP", "(DD)D");
          mids$[mid_regularizedGammaP_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_2d76000a36416433] = env->getStaticMethodID(cls, "regularizedGammaP", "(DDDI)D");
          mids$[mid_regularizedGammaP_ac1aa8d2032c33ab] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_99e3200dafc19573] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DD)D");
          mids$[mid_regularizedGammaQ_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_2d76000a36416433] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DDDI)D");
          mids$[mid_regularizedGammaQ_ac1aa8d2032c33ab] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_trigamma_04fd0666b613d2ab] = env->getStaticMethodID(cls, "trigamma", "(D)D");
          mids$[mid_trigamma_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "trigamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          GAMMA = env->getStaticDoubleField(cls, "GAMMA");
          LANCZOS_G = env->getStaticDoubleField(cls, "LANCZOS_G");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Gamma::digamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_digamma_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::digamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_digamma_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::gamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_gamma_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::gamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_gamma_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::invGamma1pm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_invGamma1pm1_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::invGamma1pm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_invGamma1pm1_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::lanczos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_lanczos_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::lanczos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_lanczos_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::logGamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::logGamma1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma1p_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma1p_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_2d76000a36416433], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_ac1aa8d2032c33ab], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_2d76000a36416433], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_ac1aa8d2032c33ab], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::trigamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trigamma_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::trigamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trigamma_6e00dc5eb352fe51], a0.this$));
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
      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Gamma__methods_[] = {
        DECLARE_METHOD(t_Gamma, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, digamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, gamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, invGamma1pm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, lanczos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaQ, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, trigamma, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Gamma)[] = {
        { Py_tp_methods, t_Gamma__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Gamma)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Gamma, t_Gamma, Gamma);

      void t_Gamma::install(PyObject *module)
      {
        installType(&PY_TYPE(Gamma), &PY_TYPE_DEF(Gamma), module, "Gamma", 0);
      }

      void t_Gamma::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "class_", make_descriptor(Gamma::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "wrapfn_", make_descriptor(t_Gamma::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "boxfn_", make_descriptor(boxObject));
        env->getClass(Gamma::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "GAMMA", make_descriptor(Gamma::GAMMA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "LANCZOS_G", make_descriptor(Gamma::LANCZOS_G));
      }

      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Gamma::initializeClass, 1)))
          return NULL;
        return t_Gamma::wrap_Object(Gamma(((t_Gamma *) arg)->object.this$));
      }
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Gamma::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "digamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "gamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "invGamma1pm1", args);
        return NULL;
      }

      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "lanczos", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma1p", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaP", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaQ", args);
        return NULL;
      }

      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "trigamma", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *FieldTimeDerivativesEquations::mids$ = NULL;
        bool FieldTimeDerivativesEquations::live$ = false;

        jclass FieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_f2b4bfa0af1007e8] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_f2b4bfa0af1007e8] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_c9e829dd925c6618] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldTimeDerivativesEquations::addKeplerContribution(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2b4bfa0af1007e8], a0.this$);
        }

        void FieldTimeDerivativesEquations::addMassDerivative(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_f2b4bfa0af1007e8], a0.this$);
        }

        void FieldTimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_c9e829dd925c6618], a0.this$);
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
        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args);
        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_FieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_FieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTimeDerivativesEquations, t_FieldTimeDerivativesEquations, FieldTimeDerivativesEquations);
        PyObject *t_FieldTimeDerivativesEquations::wrap_Object(const FieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTimeDerivativesEquations), &PY_TYPE_DEF(FieldTimeDerivativesEquations), module, "FieldTimeDerivativesEquations", 0);
        }

        void t_FieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "class_", make_descriptor(FieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_FieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_FieldTimeDerivativesEquations::wrap_Object(FieldTimeDerivativesEquations(((t_FieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalarFunction::class$ = NULL;
      jmethodID *TimeScalarFunction::mids$ = NULL;
      bool TimeScalarFunction::live$ = false;

      jclass TimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_fd347811007a6ba3] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_140b8964300ddedf] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScalarFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScalarFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_140b8964300ddedf], a0.this$));
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
      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args);

      static PyMethodDef t_TimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_TimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalarFunction)[] = {
        { Py_tp_methods, t_TimeScalarFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalarFunction, t_TimeScalarFunction, TimeScalarFunction);

      void t_TimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalarFunction), &PY_TYPE_DEF(TimeScalarFunction), module, "TimeScalarFunction", 0);
      }

      void t_TimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "class_", make_descriptor(TimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "wrapfn_", make_descriptor(t_TimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_TimeScalarFunction::wrap_Object(TimeScalarFunction(((t_TimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonIntegerLeastSquareSolver::class$ = NULL;
          jmethodID *PythonIntegerLeastSquareSolver::mids$ = NULL;
          bool PythonIntegerLeastSquareSolver::live$ = false;

          jclass PythonIntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_solveILS_78e4e9f588c2bfe0] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntegerLeastSquareSolver::PythonIntegerLeastSquareSolver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonIntegerLeastSquareSolver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonIntegerLeastSquareSolver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonIntegerLeastSquareSolver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self);
          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args);
          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3);
          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data);
          static PyGetSetDef t_PythonIntegerLeastSquareSolver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntegerLeastSquareSolver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_PythonIntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) t_PythonIntegerLeastSquareSolver_init_ },
            { Py_tp_getset, t_PythonIntegerLeastSquareSolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIntegerLeastSquareSolver, t_PythonIntegerLeastSquareSolver, PythonIntegerLeastSquareSolver);

          void t_PythonIntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntegerLeastSquareSolver), &PY_TYPE_DEF(PythonIntegerLeastSquareSolver), module, "PythonIntegerLeastSquareSolver", 1);
          }

          void t_PythonIntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "class_", make_descriptor(PythonIntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_PythonIntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntegerLeastSquareSolver::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonIntegerLeastSquareSolver_pythonDecRef0 },
              { "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonIntegerLeastSquareSolver_solveILS1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_PythonIntegerLeastSquareSolver::wrap_Object(PythonIntegerLeastSquareSolver(((t_PythonIntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds)
          {
            PythonIntegerLeastSquareSolver object((jobject) NULL);

            INT_CALL(object = PythonIntegerLeastSquareSolver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args)
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

          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > value((jobject) NULL);
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *o2 = JArray<jint>(a2).wrap();
            PyObject *o3 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a3));
            PyObject *result = PyObject_CallMethod(obj, "solveILS", "iOOO", (int) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("solveILS", result);
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

          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data)
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
#include "org/orekit/forces/drag/DragForce.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragForce::class$ = NULL;
        jmethodID *DragForce::mids$ = NULL;
        bool DragForce::live$ = false;

        jclass DragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d51f29c5e5b1e8b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getAtmosphere_51e24dc1f47828d4] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSpacecraft_bf04d13a51559009] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DragForce::DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_9d51f29c5e5b1e8b, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::orekit::models::earth::atmosphere::Atmosphere DragForce::getAtmosphere() const
        {
          return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_51e24dc1f47828d4]));
        }

        ::java::util::List DragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::forces::drag::DragSensitive DragForce::getSpacecraft() const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_bf04d13a51559009]));
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
      namespace drag {
        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self);
        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self);
        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data);
        static PyGetSetDef t_DragForce__fields_[] = {
          DECLARE_GET_FIELD(t_DragForce, atmosphere),
          DECLARE_GET_FIELD(t_DragForce, parametersDrivers),
          DECLARE_GET_FIELD(t_DragForce, spacecraft),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragForce__methods_[] = {
          DECLARE_METHOD(t_DragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getAtmosphere, METH_NOARGS),
          DECLARE_METHOD(t_DragForce, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getSpacecraft, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragForce)[] = {
          { Py_tp_methods, t_DragForce__methods_ },
          { Py_tp_init, (void *) t_DragForce_init_ },
          { Py_tp_getset, t_DragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(DragForce, t_DragForce, DragForce);

        void t_DragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(DragForce), &PY_TYPE_DEF(DragForce), module, "DragForce", 0);
        }

        void t_DragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "class_", make_descriptor(DragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "wrapfn_", make_descriptor(t_DragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragForce::initializeClass, 1)))
            return NULL;
          return t_DragForce::wrap_Object(DragForce(((t_DragForce *) arg)->object.this$));
        }
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
          DragForce object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DragForce(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args)
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

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
        }

        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self)
        {
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
        }

        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
          OBJ_CALL(value = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data)
        {
          ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurement::class$ = NULL;
        jmethodID *EstimatedMeasurement::mids$ = NULL;
        bool EstimatedMeasurement::live$ = false;

        jclass EstimatedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1751916beaa99c3d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getDerivativesDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getDerivativesDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getParameterDerivatives_3822ea7ff73f87e7] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;)[D");
            mids$[mid_getParameterDerivatives_9b6ae2200890bc5e] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_getStateDerivatives_23a0aa7ddbf2fcc5] = env->getMethodID(cls, "getStateDerivatives", "(I)[[D");
            mids$[mid_getStateSize_55546ef6a647f39b] = env->getMethodID(cls, "getStateSize", "()I");
            mids$[mid_setParameterDerivatives_0f81e0b84a8be2d3] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/utils/TimeSpanMap;)V");
            mids$[mid_setParameterDerivatives_5f1452ec188801bb] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_setStateDerivatives_fd10cb359d67ca83] = env->getMethodID(cls, "setStateDerivatives", "(I[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurement::EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->newObject(initializeClass, &mids$, mid_init$_1751916beaa99c3d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        ::java::util::stream::Stream EstimatedMeasurement::getDerivativesDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getDerivativesDrivers_14e21bf777ff0ccf]));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_3822ea7ff73f87e7], a0.this$));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_9b6ae2200890bc5e], a0.this$, a1.this$));
        }

        JArray< JArray< jdouble > > EstimatedMeasurement::getStateDerivatives(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getStateDerivatives_23a0aa7ddbf2fcc5], a0));
        }

        jint EstimatedMeasurement::getStateSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getStateSize_55546ef6a647f39b]);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::utils::TimeSpanMap & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_0f81e0b84a8be2d3], a0.this$, a1.this$);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_5f1452ec188801bb], a0.this$, a1.this$, a2.this$);
        }

        void EstimatedMeasurement::setStateDerivatives(jint a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setStateDerivatives_fd10cb359d67ca83], a0, a1.this$);
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
        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args);
        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data);
        static PyGetSetDef t_EstimatedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurement, derivativesDrivers),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, stateSize),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurement__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getDerivativesDrivers, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateDerivatives, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateSize, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setStateDerivatives, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurement)[] = {
          { Py_tp_methods, t_EstimatedMeasurement__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurement_init_ },
          { Py_tp_getset, t_EstimatedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::EstimatedMeasurementBase),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurement, t_EstimatedMeasurement, EstimatedMeasurement);
        PyObject *t_EstimatedMeasurement::wrap_Object(const EstimatedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurement), &PY_TYPE_DEF(EstimatedMeasurement), module, "EstimatedMeasurement", 0);
        }

        void t_EstimatedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "class_", make_descriptor(EstimatedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "wrapfn_", make_descriptor(t_EstimatedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurement::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurement::wrap_Object(EstimatedMeasurement(((t_EstimatedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurement(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0));
                return result.wrap();
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0, a1));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg)
        {
          jint a0;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStateDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "getStateDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStateSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          jint a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "I[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.setStateDerivatives(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStateDerivatives", args);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStateSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultiStartMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultiStartMultivariateOptimizer::mids$ = NULL;
      bool BaseMultiStartMultivariateOptimizer::live$ = false;

      jclass BaseMultiStartMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultiStartMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a27d203de71052f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/BaseMultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getOptima_24e2edd6319f4c5a] = env->getMethodID(cls, "getOptima", "()[Ljava/lang/Object;");
          mids$[mid_optimize_91381cab165160dc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_541690f9ee81d3ad] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_store_55f3c894852c27a3] = env->getMethodID(cls, "store", "(Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BaseMultiStartMultivariateOptimizer::BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_9a27d203de71052f, a0.this$, a1, a2.this$)) {}

      jint BaseMultiStartMultivariateOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      JArray< ::java::lang::Object > BaseMultiStartMultivariateOptimizer::getOptima() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getOptima_24e2edd6319f4c5a]));
      }

      ::java::lang::Object BaseMultiStartMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_91381cab165160dc], a0.this$));
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
      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultiStartMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, optima),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultiStartMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getEvaluations, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getOptima, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultiStartMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultiStartMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) t_BaseMultiStartMultivariateOptimizer_init_ },
        { Py_tp_getset, t_BaseMultiStartMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultiStartMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultiStartMultivariateOptimizer, t_BaseMultiStartMultivariateOptimizer, BaseMultiStartMultivariateOptimizer);
      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_Object(const BaseMultiStartMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultiStartMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultiStartMultivariateOptimizer), &PY_TYPE_DEF(BaseMultiStartMultivariateOptimizer), module, "BaseMultiStartMultivariateOptimizer", 0);
      }

      void t_BaseMultiStartMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "class_", make_descriptor(BaseMultiStartMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultiStartMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultiStartMultivariateOptimizer::wrap_Object(BaseMultiStartMultivariateOptimizer(((t_BaseMultiStartMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::optim::BaseMultivariateOptimizer a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
        BaseMultiStartMultivariateOptimizer object((jobject) NULL);

        if (!parseArgs(args, "KIk", ::org::hipparchus::optim::BaseMultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_BaseMultivariateOptimizer::parameters_, &a1, &a2))
        {
          INT_CALL(object = BaseMultiStartMultivariateOptimizer(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOptima());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOptima());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedCache::class$ = NULL;
      jmethodID *PythonTimeStampedCache::mids$ = NULL;
      bool PythonTimeStampedCache::live$ = false;

      jclass PythonTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_a63f3f151ca9e302] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_a63f3f151ca9e302] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_1fe1e227b3891e66] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_70177eb25c19b8d4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedCache::PythonTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args);
      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self);
      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data);
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedCache, t_PythonTimeStampedCache, PythonTimeStampedCache);
      PyObject *t_PythonTimeStampedCache::wrap_Object(const PythonTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedCache), &PY_TYPE_DEF(PythonTimeStampedCache), module, "PythonTimeStampedCache", 1);
      }

      void t_PythonTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "class_", make_descriptor(PythonTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "wrapfn_", make_descriptor(t_PythonTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getLatest1 },
          { "getMaxNeighborsSize", "()I", (void *) t_PythonTimeStampedCache_getMaxNeighborsSize2 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors3 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedCache_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedCache::wrap_Object(PythonTimeStampedCache(((t_PythonTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getMaxNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getMaxNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonReaderOpener.h"
#include "java/lang/Throwable.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonReaderOpener::class$ = NULL;
      jmethodID *PythonReaderOpener::mids$ = NULL;
      bool PythonReaderOpener::live$ = false;

      jclass PythonReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_b2bc6d3e210c2dd4] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonReaderOpener::PythonReaderOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonReaderOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonReaderOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonReaderOpener::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self);
      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args);
      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data);
      static PyGetSetDef t_PythonReaderOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonReaderOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonReaderOpener__methods_[] = {
        DECLARE_METHOD(t_PythonReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonReaderOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonReaderOpener)[] = {
        { Py_tp_methods, t_PythonReaderOpener__methods_ },
        { Py_tp_init, (void *) t_PythonReaderOpener_init_ },
        { Py_tp_getset, t_PythonReaderOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonReaderOpener, t_PythonReaderOpener, PythonReaderOpener);

      void t_PythonReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonReaderOpener), &PY_TYPE_DEF(PythonReaderOpener), module, "PythonReaderOpener", 1);
      }

      void t_PythonReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "class_", make_descriptor(PythonReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "wrapfn_", make_descriptor(t_PythonReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonReaderOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/Reader;", (void *) t_PythonReaderOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonReaderOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonReaderOpener::initializeClass, 1)))
          return NULL;
        return t_PythonReaderOpener::wrap_Object(PythonReaderOpener(((t_PythonReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonReaderOpener object((jobject) NULL);

        INT_CALL(object = PythonReaderOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::Reader value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::Reader::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
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

          ::java::lang::Class *BistaticRangeBuilder::class$ = NULL;
          jmethodID *BistaticRangeBuilder::mids$ = NULL;
          bool BistaticRangeBuilder::live$ = false;

          jclass BistaticRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3482c99d647cecc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_28a736369051bb03] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeBuilder::BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_3482c99d647cecc6, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRange BistaticRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRange(env->callObjectMethod(this$, mids$[mid_build_28a736369051bb03], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args);
          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeBuilder, t_BistaticRangeBuilder, BistaticRangeBuilder);
          PyObject *t_BistaticRangeBuilder::wrap_Object(const BistaticRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeBuilder), &PY_TYPE_DEF(BistaticRangeBuilder), module, "BistaticRangeBuilder", 0);
          }

          void t_BistaticRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "class_", make_descriptor(BistaticRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "wrapfn_", make_descriptor(t_BistaticRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeBuilder::wrap_Object(BistaticRangeBuilder(((t_BistaticRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data)
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
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonFieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonFieldTimeDerivativesEquations::mids$ = NULL;
        bool PythonFieldTimeDerivativesEquations::live$ = false;

        jclass PythonFieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_f2b4bfa0af1007e8] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_f2b4bfa0af1007e8] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_c9e829dd925c6618] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldTimeDerivativesEquations::PythonFieldTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldTimeDerivativesEquations::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self);
        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonFieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, self),
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonFieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonFieldTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonFieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldTimeDerivativesEquations, t_PythonFieldTimeDerivativesEquations, PythonFieldTimeDerivativesEquations);
        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_Object(const PythonFieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldTimeDerivativesEquations), &PY_TYPE_DEF(PythonFieldTimeDerivativesEquations), module, "PythonFieldTimeDerivativesEquations", 1);
        }

        void t_PythonFieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "class_", make_descriptor(PythonFieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonFieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V", (void *) t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonFieldTimeDerivativesEquations::wrap_Object(PythonFieldTimeDerivativesEquations(((t_PythonFieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonFieldTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data)
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
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *NullArgumentException::class$ = NULL;
      jmethodID *NullArgumentException::mids$ = NULL;
      bool NullArgumentException::live$ = false;

      jclass NullArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/NullArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NullArgumentException::NullArgumentException() : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      NullArgumentException::NullArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      ::java::lang::String NullArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String NullArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String NullArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > NullArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable NullArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
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
      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data);
      static PyGetSetDef t_NullArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_NullArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_NullArgumentException, message),
        DECLARE_GET_FIELD(t_NullArgumentException, parts),
        DECLARE_GET_FIELD(t_NullArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NullArgumentException__methods_[] = {
        DECLARE_METHOD(t_NullArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_NullArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NullArgumentException)[] = {
        { Py_tp_methods, t_NullArgumentException__methods_ },
        { Py_tp_init, (void *) t_NullArgumentException_init_ },
        { Py_tp_getset, t_NullArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NullArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::NullPointerException),
        NULL
      };

      DEFINE_TYPE(NullArgumentException, t_NullArgumentException, NullArgumentException);

      void t_NullArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(NullArgumentException), &PY_TYPE_DEF(NullArgumentException), module, "NullArgumentException", 0);
      }

      void t_NullArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "class_", make_descriptor(NullArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "wrapfn_", make_descriptor(t_NullArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NullArgumentException::initializeClass, 1)))
          return NULL;
        return t_NullArgumentException::wrap_Object(NullArgumentException(((t_NullArgumentException *) arg)->object.this$));
      }
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NullArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            NullArgumentException object((jobject) NULL);

            INT_CALL(object = NullArgumentException());
            self->object = object;
            break;
          }
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            NullArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = NullArgumentException(a0, a1));
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

      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/io/Serializable.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3D::class$ = NULL;
          jmethodID *Vector3D::mids$ = NULL;
          bool Vector3D::live$ = false;
          Vector3D *Vector3D::MINUS_I = NULL;
          Vector3D *Vector3D::MINUS_J = NULL;
          Vector3D *Vector3D::MINUS_K = NULL;
          Vector3D *Vector3D::NEGATIVE_INFINITY = NULL;
          Vector3D *Vector3D::NaN = NULL;
          Vector3D *Vector3D::PLUS_I = NULL;
          Vector3D *Vector3D::PLUS_J = NULL;
          Vector3D *Vector3D::PLUS_K = NULL;
          Vector3D *Vector3D::POSITIVE_INFINITY = NULL;
          Vector3D *Vector3D::ZERO = NULL;

          jclass Vector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_688418a8dded8238] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_4d03b5a4b38cf571] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_7dc05483761fd9c8] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_a2197b94a4469cd6] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_e21381ba36e4ea13] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_add_945415de2cc916d6] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_angle_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_crossProduct_e21381ba36e4ea13] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_crossProduct_301a09f2b4c627de] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distance1_2f915fa9762130df] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceInf_2f915fa9762130df] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceSq_2f915fa9762130df] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_dotProduct_2f915fa9762130df] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_dotProduct_4d0eb4d30dbd9ad9] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_460c5e2d9d51c6cc] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_b74f83833fdad017] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getDelta_b74f83833fdad017] = env->getMethodID(cls, "getDelta", "()D");
              mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_b74f83833fdad017] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_b74f83833fdad017] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
              mids$[mid_getZero_8b724f8b4fdad1a2] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_8b724f8b4fdad1a2] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_orthogonal_8b724f8b4fdad1a2] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_scalarMultiply_498f52cd8e5a7072] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_e21381ba36e4ea13] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_945415de2cc916d6] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector3D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_J = new Vector3D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_K = new Vector3D(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NEGATIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NaN = new Vector3D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_I = new Vector3D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_J = new Vector3D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_K = new Vector3D(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              POSITIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              ZERO = new Vector3D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3D::Vector3D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_688418a8dded8238, a0, a1.this$)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d03b5a4b38cf571, a0, a1.this$, a2, a3.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7dc05483761fd9c8, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5, jdouble a6, const Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2197b94a4469cd6, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector3D Vector3D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_e21381ba36e4ea13], a0.this$));
          }

          Vector3D Vector3D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_945415de2cc916d6], a0, a1.this$));
          }

          jdouble Vector3D::angle(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          Vector3D Vector3D::crossProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_e21381ba36e4ea13], a0.this$));
          }

          Vector3D Vector3D::crossProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_301a09f2b4c627de], a0.this$, a1.this$));
          }

          jdouble Vector3D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Vector3D::distance(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jdouble Vector3D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_2f915fa9762130df], a0.this$);
          }

          jdouble Vector3D::distance1(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_2f915fa9762130df], a0.this$);
          }

          jdouble Vector3D::distanceInf(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_2f915fa9762130df], a0.this$);
          }

          jdouble Vector3D::distanceSq(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jdouble Vector3D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_2f915fa9762130df], a0.this$);
          }

          jdouble Vector3D::dotProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jboolean Vector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jboolean Vector3D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble Vector3D::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_b74f83833fdad017]);
          }

          jdouble Vector3D::getDelta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDelta_b74f83833fdad017]);
          }

          jdouble Vector3D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
          }

          jdouble Vector3D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
          }

          jdouble Vector3D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_b74f83833fdad017]);
          }

          jdouble Vector3D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::Space Vector3D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
          }

          jdouble Vector3D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
          }

          jdouble Vector3D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
          }

          jdouble Vector3D::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
          }

          Vector3D Vector3D::getZero() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_getZero_8b724f8b4fdad1a2]));
          }

          jint Vector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean Vector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
          }

          jboolean Vector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          Vector3D Vector3D::negate() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_negate_8b724f8b4fdad1a2]));
          }

          Vector3D Vector3D::orthogonal() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_8b724f8b4fdad1a2]));
          }

          Vector3D Vector3D::scalarMultiply(jdouble a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_498f52cd8e5a7072], a0));
          }

          Vector3D Vector3D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_e21381ba36e4ea13], a0.this$));
          }

          Vector3D Vector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_945415de2cc916d6], a0, a1.this$));
          }

          JArray< jdouble > Vector3D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
          }

          ::java::lang::String Vector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String Vector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
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
          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self);
          static PyObject *t_Vector3D_getDelta(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self);
          static PyObject *t_Vector3D_getSpace(t_Vector3D *self);
          static PyObject *t_Vector3D_getX(t_Vector3D *self);
          static PyObject *t_Vector3D_getY(t_Vector3D *self);
          static PyObject *t_Vector3D_getZ(t_Vector3D *self);
          static PyObject *t_Vector3D_getZero(t_Vector3D *self);
          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self);
          static PyObject *t_Vector3D_isNaN(t_Vector3D *self);
          static PyObject *t_Vector3D_negate(t_Vector3D *self);
          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self);
          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_toArray(t_Vector3D *self);
          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data);
          static PyGetSetDef t_Vector3D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3D, alpha),
            DECLARE_GET_FIELD(t_Vector3D, delta),
            DECLARE_GET_FIELD(t_Vector3D, infinite),
            DECLARE_GET_FIELD(t_Vector3D, naN),
            DECLARE_GET_FIELD(t_Vector3D, norm),
            DECLARE_GET_FIELD(t_Vector3D, norm1),
            DECLARE_GET_FIELD(t_Vector3D, normInf),
            DECLARE_GET_FIELD(t_Vector3D, normSq),
            DECLARE_GET_FIELD(t_Vector3D, space),
            DECLARE_GET_FIELD(t_Vector3D, x),
            DECLARE_GET_FIELD(t_Vector3D, y),
            DECLARE_GET_FIELD(t_Vector3D, z),
            DECLARE_GET_FIELD(t_Vector3D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3D__methods_[] = {
            DECLARE_METHOD(t_Vector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, crossProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3D)[] = {
            { Py_tp_methods, t_Vector3D__methods_ },
            { Py_tp_init, (void *) t_Vector3D_init_ },
            { Py_tp_getset, t_Vector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector3D, t_Vector3D, Vector3D);

          void t_Vector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3D), &PY_TYPE_DEF(Vector3D), module, "Vector3D", 0);
          }

          void t_Vector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "class_", make_descriptor(Vector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "wrapfn_", make_descriptor(t_Vector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector3D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NEGATIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NaN", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "POSITIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "ZERO", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::ZERO)));
          }

          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3D::initializeClass, 1)))
              return NULL;
            return t_Vector3D::wrap_Object(Vector3D(((t_Vector3D *) arg)->object.this$));
          }
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                jdouble a6;
                Vector3D a7((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.crossProduct(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::crossProduct(a0, a1));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::dotProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg)
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

          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getDelta(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDelta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getSpace(t_Vector3D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector3D_getX(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getY(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZ(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZero(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_isNaN(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_negate(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg)
          {
            jdouble a0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector3D_toArray(t_Vector3D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDelta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data)
          {
            Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonDataField::class$ = NULL;
          jmethodID *PythonDataField::mids$ = NULL;
          bool PythonDataField::live$ = false;

          jclass PythonDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_booleanValue_48774c94bd8c4a87] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDataField::PythonDataField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonDataField::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonDataField::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonDataField::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self);
          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args);
          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data);
          static PyGetSetDef t_PythonDataField__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDataField, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDataField__methods_[] = {
            DECLARE_METHOD(t_PythonDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDataField, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDataField)[] = {
            { Py_tp_methods, t_PythonDataField__methods_ },
            { Py_tp_init, (void *) t_PythonDataField_init_ },
            { Py_tp_getset, t_PythonDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDataField, t_PythonDataField, PythonDataField);

          void t_PythonDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDataField), &PY_TYPE_DEF(PythonDataField), module, "PythonDataField", 1);
          }

          void t_PythonDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "class_", make_descriptor(PythonDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "wrapfn_", make_descriptor(t_PythonDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDataField::initializeClass);
            JNINativeMethod methods[] = {
              { "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z", (void *) t_PythonDataField_booleanValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonDataField_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDataField::initializeClass, 1)))
              return NULL;
            return t_PythonDataField::wrap_Object(PythonDataField(((t_PythonDataField *) arg)->object.this$));
          }
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds)
          {
            PythonDataField object((jobject) NULL);

            INT_CALL(object = PythonDataField());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args)
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

          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "booleanValue", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("booleanValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data)
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
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *BetaDistribution::class$ = NULL;
        jmethodID *BetaDistribution::mids$ = NULL;
        bool BetaDistribution::live$ = false;

        jclass BetaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/BetaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getAlpha_b74f83833fdad017] = env->getMethodID(cls, "getAlpha", "()D");
            mids$[mid_getBeta_b74f83833fdad017] = env->getMethodID(cls, "getBeta", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble BetaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble BetaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble BetaDistribution::getAlpha() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlpha_b74f83833fdad017]);
        }

        jdouble BetaDistribution::getBeta() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeta_b74f83833fdad017]);
        }

        jdouble BetaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble BetaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble BetaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble BetaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean BetaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble BetaDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data);
        static PyGetSetDef t_BetaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BetaDistribution, alpha),
          DECLARE_GET_FIELD(t_BetaDistribution, beta),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BetaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BetaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BetaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BetaDistribution__methods_[] = {
          DECLARE_METHOD(t_BetaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getAlpha, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getBeta, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BetaDistribution)[] = {
          { Py_tp_methods, t_BetaDistribution__methods_ },
          { Py_tp_init, (void *) t_BetaDistribution_init_ },
          { Py_tp_getset, t_BetaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BetaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(BetaDistribution, t_BetaDistribution, BetaDistribution);

        void t_BetaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BetaDistribution), &PY_TYPE_DEF(BetaDistribution), module, "BetaDistribution", 0);
        }

        void t_BetaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "class_", make_descriptor(BetaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "wrapfn_", make_descriptor(t_BetaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BetaDistribution::initializeClass, 1)))
            return NULL;
          return t_BetaDistribution::wrap_Object(BetaDistribution(((t_BetaDistribution *) arg)->object.this$));
        }
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BetaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BetaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BetaDistribution(a0, a1, a2));
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

        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlpha());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeta());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlpha());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeta());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data)
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
#include "org/hipparchus/Field.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *Field::class$ = NULL;
    jmethodID *Field::mids$ = NULL;
    bool Field::live$ = false;

    jclass Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/Field");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getOne_2ff8de927fda4153] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
        mids$[mid_getZero_2ff8de927fda4153] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement Field::getOne() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getOne_2ff8de927fda4153]));
    }

    ::java::lang::Class Field::getRuntimeClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
    }

    ::org::hipparchus::FieldElement Field::getZero() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getZero_2ff8de927fda4153]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_of_(t_Field *self, PyObject *args);
    static PyObject *t_Field_getOne(t_Field *self);
    static PyObject *t_Field_getRuntimeClass(t_Field *self);
    static PyObject *t_Field_getZero(t_Field *self);
    static PyObject *t_Field_get__one(t_Field *self, void *data);
    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data);
    static PyObject *t_Field_get__zero(t_Field *self, void *data);
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data);
    static PyGetSetDef t_Field__fields_[] = {
      DECLARE_GET_FIELD(t_Field, one),
      DECLARE_GET_FIELD(t_Field, runtimeClass),
      DECLARE_GET_FIELD(t_Field, zero),
      DECLARE_GET_FIELD(t_Field, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Field__methods_[] = {
      DECLARE_METHOD(t_Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, of_, METH_VARARGS),
      DECLARE_METHOD(t_Field, getOne, METH_NOARGS),
      DECLARE_METHOD(t_Field, getRuntimeClass, METH_NOARGS),
      DECLARE_METHOD(t_Field, getZero, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Field)[] = {
      { Py_tp_methods, t_Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Field__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Field)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Field, t_Field, Field);
    PyObject *t_Field::wrap_Object(const Field& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Field), &PY_TYPE_DEF(Field), module, "Field", 0);
    }

    void t_Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "class_", make_descriptor(Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "wrapfn_", make_descriptor(t_Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Field::initializeClass, 1)))
        return NULL;
      return t_Field::wrap_Object(Field(((t_Field *) arg)->object.this$));
    }
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Field_of_(t_Field *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Field_getOne(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getOne());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_Field_getRuntimeClass(t_Field *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Field_getZero(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getZero());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Field_get__one(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getOne());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }

    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_Field_get__zero(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getZero());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GumbelDistribution::class$ = NULL;
        jmethodID *GumbelDistribution::mids$ = NULL;
        bool GumbelDistribution::live$ = false;

        jclass GumbelDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GumbelDistribution");

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

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GumbelDistribution::GumbelDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble GumbelDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble GumbelDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble GumbelDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble GumbelDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean GumbelDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data);
        static PyGetSetDef t_GumbelDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GumbelDistribution, location),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GumbelDistribution, scale),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GumbelDistribution__methods_[] = {
          DECLARE_METHOD(t_GumbelDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GumbelDistribution)[] = {
          { Py_tp_methods, t_GumbelDistribution__methods_ },
          { Py_tp_init, (void *) t_GumbelDistribution_init_ },
          { Py_tp_getset, t_GumbelDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GumbelDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GumbelDistribution, t_GumbelDistribution, GumbelDistribution);

        void t_GumbelDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GumbelDistribution), &PY_TYPE_DEF(GumbelDistribution), module, "GumbelDistribution", 0);
        }

        void t_GumbelDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "class_", make_descriptor(GumbelDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "wrapfn_", make_descriptor(t_GumbelDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GumbelDistribution::initializeClass, 1)))
            return NULL;
          return t_GumbelDistribution::wrap_Object(GumbelDistribution(((t_GumbelDistribution *) arg)->object.this$));
        }
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GumbelDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          GumbelDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = GumbelDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data)
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
#include "org/hipparchus/distribution/continuous/LaplaceDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LaplaceDistribution::class$ = NULL;
        jmethodID *LaplaceDistribution::mids$ = NULL;
        bool LaplaceDistribution::live$ = false;

        jclass LaplaceDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LaplaceDistribution");

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

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaplaceDistribution::LaplaceDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble LaplaceDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble LaplaceDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble LaplaceDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble LaplaceDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean LaplaceDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data);
        static PyGetSetDef t_LaplaceDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LaplaceDistribution, location),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LaplaceDistribution, scale),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaplaceDistribution__methods_[] = {
          DECLARE_METHOD(t_LaplaceDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaplaceDistribution)[] = {
          { Py_tp_methods, t_LaplaceDistribution__methods_ },
          { Py_tp_init, (void *) t_LaplaceDistribution_init_ },
          { Py_tp_getset, t_LaplaceDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaplaceDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LaplaceDistribution, t_LaplaceDistribution, LaplaceDistribution);

        void t_LaplaceDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LaplaceDistribution), &PY_TYPE_DEF(LaplaceDistribution), module, "LaplaceDistribution", 0);
        }

        void t_LaplaceDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "class_", make_descriptor(LaplaceDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "wrapfn_", make_descriptor(t_LaplaceDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaplaceDistribution::initializeClass, 1)))
            return NULL;
          return t_LaplaceDistribution::wrap_Object(LaplaceDistribution(((t_LaplaceDistribution *) arg)->object.this$));
        }
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaplaceDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LaplaceDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LaplaceDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
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
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
                mids$[mid_getDataContext_687c2d3d1010744e] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
                mids$[mid_getHeader_e6dd83960ea2d5d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_isSimpleEOP_9ab94ac1dc23b105] = env->getMethodID(cls, "isSimpleEOP", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AbstractConstituentParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
            }

            ::org::orekit::utils::IERSConventions AbstractConstituentParser::getConventions() const
            {
              return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_53aaf70620a914af]));
            }

            ::org::orekit::data::DataContext AbstractConstituentParser::getDataContext() const
            {
              return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_687c2d3d1010744e]));
            }

            ::org::orekit::files::ccsds::section::Header AbstractConstituentParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_e6dd83960ea2d5d6]));
            }

            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior AbstractConstituentParser::getParsedUnitsBehavior() const
            {
              return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43]));
            }

            jboolean AbstractConstituentParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::isSimpleEOP() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
            }

            jboolean AbstractConstituentParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
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
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSLegacyNavigationMessage::class$ = NULL;
            jmethodID *GPSLegacyNavigationMessage::mids$ = NULL;
            bool GPSLegacyNavigationMessage::live$ = false;

            jclass GPSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSLegacyNavigationMessage::GPSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_GPSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSLegacyNavigationMessage, t_GPSLegacyNavigationMessage, GPSLegacyNavigationMessage);

            void t_GPSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSLegacyNavigationMessage), &PY_TYPE_DEF(GPSLegacyNavigationMessage), module, "GPSLegacyNavigationMessage", 0);
            }

            void t_GPSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "class_", make_descriptor(GPSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_GPSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSLegacyNavigationMessage::wrap_Object(GPSLegacyNavigationMessage(((t_GPSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GPSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = GPSLegacyNavigationMessage());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
