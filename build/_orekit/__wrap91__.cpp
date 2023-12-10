#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *TLEPropagatorBuilder::class$ = NULL;
        jmethodID *TLEPropagatorBuilder::mids$ = NULL;
        bool TLEPropagatorBuilder::live$ = false;

        jclass TLEPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/TLEPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_74fe3f418af898ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_init$_5805b462d88cb3bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/data/DataContext;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_9ad7da531a683a90] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
            mids$[mid_copy_009a67d896739747] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/TLEPropagatorBuilder;");
            mids$[mid_getTemplateTLE_e993eceec98c738b] = env->getMethodID(cls, "getTemplateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_74fe3f418af898ed, a0.this$, a1.this$, a2, a3.this$)) {}

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_5805b462d88cb3bd, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel TLEPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::tle::TLEPropagator TLEPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::tle::TLEPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_9ad7da531a683a90], a0.this$));
        }

        TLEPropagatorBuilder TLEPropagatorBuilder::copy() const
        {
          return TLEPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_009a67d896739747]));
        }

        ::org::orekit::propagation::analytical::tle::TLE TLEPropagatorBuilder::getTemplateTLE() const
        {
          return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTemplateTLE_e993eceec98c738b]));
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
        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self);
        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data);
        static PyGetSetDef t_TLEPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_TLEPropagatorBuilder, templateTLE),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TLEPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_TLEPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, getTemplateTLE, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TLEPropagatorBuilder)[] = {
          { Py_tp_methods, t_TLEPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_TLEPropagatorBuilder_init_ },
          { Py_tp_getset, t_TLEPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TLEPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(TLEPropagatorBuilder, t_TLEPropagatorBuilder, TLEPropagatorBuilder);

        void t_TLEPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(TLEPropagatorBuilder), &PY_TYPE_DEF(TLEPropagatorBuilder), module, "TLEPropagatorBuilder", 0);
        }

        void t_TLEPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "class_", make_descriptor(TLEPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "wrapfn_", make_descriptor(t_TLEPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TLEPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_TLEPropagatorBuilder::wrap_Object(TLEPropagatorBuilder(((t_TLEPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TLEPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a3((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a4((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDkk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3, &a4))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::tle::TLEPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::tle::t_TLEPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          TLEPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_TLEPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self)
        {
          ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
          OBJ_CALL(result = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
        }

        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
          OBJ_CALL(value = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftState::class$ = NULL;
      jmethodID *FieldSpacecraftState::mids$ = NULL;
      bool FieldSpacecraftState::live$ = false;

      jclass FieldSpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8d21b6d6b6f8eddf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_c3d565e121a0fb47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_91582abfdd07b6a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_e589ef57ecd550ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_f9bebdb3c1000d13] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_ae9dd7ac354b319f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_a3effa3dd188af62] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_init$_a724b159b42485f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_cd823ed5229c0e49] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_9ab7c84f99dca0e0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_f3aab0fb0829e4be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_116d360f2fab10d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_462284fa79787ed0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_8c4ee5c10c5a1e32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_ae8b51e11cc27769] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_6ddffbbe0d99a34d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_01c7dbb41f56cf2e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_3dd0dab955533973] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_addAdditionalState_ade1146235ecc059] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_ade1146235ecc059] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_1463d3d0d52f94dd] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAbsPVA_88db1a55f8ad67a5] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_f1183f1b2d548100] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStateDerivative_f1183f1b2d548100] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStatesDerivatives_a7763b9cf85435a1] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_a7763b9cf85435a1] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAttitude_710d0a4d1c9c9313] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_eba8e72a22c984ac] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMass_eba8e72a22c984ac] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_eba8e72a22c984ac] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOrbit_71338e41eb93eedd] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_getPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_f7bcbf2fe13428b6] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_716f50c86ffc8da7] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_f336610fe073f215] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hasAdditionalState_7edad2c2f64f4d68] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_7edad2c2f64f4d68] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_b108b35ef48e27bd] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_7712f88e5d66acc0] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_shiftedBy_8963827f6b4701f6] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_toSpacecraftState_c6311115fea01a34] = env->getMethodID(cls, "toSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_b4e9bd069b43219a] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_8c35d0b6fdd377c3] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d21b6d6b6f8eddf, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3d565e121a0fb47, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91582abfdd07b6a5, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e589ef57ecd550ef, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9bebdb3c1000d13, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae9dd7ac354b319f, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::SpacecraftState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3effa3dd188af62, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a724b159b42485f4, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd823ed5229c0e49, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ab7c84f99dca0e0, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3aab0fb0829e4be, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_116d360f2fab10d0, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_462284fa79787ed0, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c4ee5c10c5a1e32, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae8b51e11cc27769, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ddffbbe0d99a34d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01c7dbb41f56cf2e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dd0dab955533973, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState FieldSpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_ade1146235ecc059], a0.this$, a1.this$));
      }

      FieldSpacecraftState FieldSpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_ade1146235ecc059], a0.this$, a1.this$));
      }

      void FieldSpacecraftState::ensureCompatibleAdditionalStates(const FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_1463d3d0d52f94dd], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::orekit::utils::FieldAbsolutePVCoordinates FieldSpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_88db1a55f8ad67a5]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f1183f1b2d548100], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_f1183f1b2d548100], a0.this$));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_a7763b9cf85435a1]));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_a7763b9cf85435a1]));
      }

      ::org::orekit::attitudes::FieldAttitude FieldSpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_710d0a4d1c9c9313]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldSpacecraftState::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMass() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMass_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::FieldOrbit FieldSpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_71338e41eb93eedd]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f89522ff77904397]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f7bcbf2fe13428b6], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f336610fe073f215], a0.this$));
      }

      jboolean FieldSpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_7edad2c2f64f4d68], a0.this$);
      }

      jboolean FieldSpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_7edad2c2f64f4d68], a0.this$);
      }

      jboolean FieldSpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_b108b35ef48e27bd]);
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(jdouble a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_7712f88e5d66acc0], a0));
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_8963827f6b4701f6], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState FieldSpacecraftState::toSpacecraftState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_toSpacecraftState_c6311115fea01a34]));
      }

      ::org::orekit::frames::FieldStaticTransform FieldSpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_b4e9bd069b43219a]));
      }

      ::java::lang::String FieldSpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::orekit::frames::FieldTransform FieldSpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_toTransform_8c35d0b6fdd377c3]));
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
      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args);
      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data);
      static PyGetSetDef t_FieldSpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftState, a),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, attitude),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, date),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, e),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, frame),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, i),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lE),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lM),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lv),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mass),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mu),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbit),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, position),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftState__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toSpacecraftState, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftState)[] = {
        { Py_tp_methods, t_FieldSpacecraftState__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftState_init_ },
        { Py_tp_getset, t_FieldSpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftState, t_FieldSpacecraftState, FieldSpacecraftState);
      PyObject *t_FieldSpacecraftState::wrap_Object(const FieldSpacecraftState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftState), &PY_TYPE_DEF(FieldSpacecraftState), module, "FieldSpacecraftState", 0);
      }

      void t_FieldSpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "class_", make_descriptor(FieldSpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "wrapfn_", make_descriptor(t_FieldSpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftState::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftState::wrap_Object(FieldSpacecraftState(((t_FieldSpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg)
      {
        FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldSpacecraftState::initializeClass, &a0, &p0, t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self)
      {
        ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMass());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self)
      {
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args)
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
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args)
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

      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.toSpacecraftState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMass());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *HarrisPriester::class$ = NULL;
          jmethodID *HarrisPriester::mids$ = NULL;
          bool HarrisPriester::live$ = false;

          jclass HarrisPriester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/HarrisPriester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_66b28f080fa271fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
              mids$[mid_init$_ab4c033fbcb06e60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[D)V");
              mids$[mid_init$_d9fceafc8418f6bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_init$_2cc741a8331eec3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[DD)V");
              mids$[mid_getDensity_659f5a2caf346aee] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_2814c71be939a588] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMaxAlt_dff5885c2c873297] = env->getMethodID(cls, "getMaxAlt", "()D");
              mids$[mid_getMinAlt_dff5885c2c873297] = env->getMethodID(cls, "getMinAlt", "()D");
              mids$[mid_getTabDensity_0358d8ea02f2cdb1] = env->getMethodID(cls, "getTabDensity", "()[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_66b28f080fa271fc, a0.this$, a1.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4c033fbcb06e60, a0.this$, a1.this$, a2.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9fceafc8418f6bc, a0.this$, a1.this$, a2)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cc741a8331eec3e, a0.this$, a1.this$, a2.this$, a3)) {}

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_659f5a2caf346aee], a0.this$, a1.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_2814c71be939a588], a0.this$, a1.this$);
          }

          jdouble HarrisPriester::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame HarrisPriester::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          jdouble HarrisPriester::getMaxAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxAlt_dff5885c2c873297]);
          }

          jdouble HarrisPriester::getMinAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinAlt_dff5885c2c873297]);
          }

          JArray< JArray< jdouble > > HarrisPriester::getTabDensity() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getTabDensity_0358d8ea02f2cdb1]));
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
          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args);
          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data);
          static PyGetSetDef t_HarrisPriester__fields_[] = {
            DECLARE_GET_FIELD(t_HarrisPriester, frame),
            DECLARE_GET_FIELD(t_HarrisPriester, maxAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, minAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, tabDensity),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HarrisPriester__methods_[] = {
            DECLARE_METHOD(t_HarrisPriester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_HarrisPriester, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMaxAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMinAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getTabDensity, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HarrisPriester)[] = {
            { Py_tp_methods, t_HarrisPriester__methods_ },
            { Py_tp_init, (void *) t_HarrisPriester_init_ },
            { Py_tp_getset, t_HarrisPriester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HarrisPriester)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HarrisPriester, t_HarrisPriester, HarrisPriester);

          void t_HarrisPriester::install(PyObject *module)
          {
            installType(&PY_TYPE(HarrisPriester), &PY_TYPE_DEF(HarrisPriester), module, "HarrisPriester", 0);
          }

          void t_HarrisPriester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "class_", make_descriptor(HarrisPriester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "wrapfn_", make_descriptor(t_HarrisPriester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HarrisPriester::initializeClass, 1)))
              return NULL;
            return t_HarrisPriester::wrap_Object(HarrisPriester(((t_HarrisPriester *) arg)->object.this$));
          }
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HarrisPriester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = HarrisPriester(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[D", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                jdouble a2;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                jdouble a3;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[DD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2, a3));
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

          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTabDensity());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTabDensity());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *ClockCorrectionsProvider::class$ = NULL;
          jmethodID *ClockCorrectionsProvider::mids$ = NULL;
          bool ClockCorrectionsProvider::live$ = false;
          ::java::lang::String *ClockCorrectionsProvider::CLOCK_CORRECTIONS = NULL;

          jclass ClockCorrectionsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e8f3d0186004951c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSClockElements;)V");
              mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLOCK_CORRECTIONS = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_CORRECTIONS", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ClockCorrectionsProvider::ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8f3d0186004951c, a0.this$)) {}

          JArray< jdouble > ClockCorrectionsProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
          }

          ::java::lang::String ClockCorrectionsProvider::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self);
          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data);
          static PyGetSetDef t_ClockCorrectionsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ClockCorrectionsProvider, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ClockCorrectionsProvider__methods_[] = {
            DECLARE_METHOD(t_ClockCorrectionsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getAdditionalState, METH_O),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ClockCorrectionsProvider)[] = {
            { Py_tp_methods, t_ClockCorrectionsProvider__methods_ },
            { Py_tp_init, (void *) t_ClockCorrectionsProvider_init_ },
            { Py_tp_getset, t_ClockCorrectionsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ClockCorrectionsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ClockCorrectionsProvider, t_ClockCorrectionsProvider, ClockCorrectionsProvider);

          void t_ClockCorrectionsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ClockCorrectionsProvider), &PY_TYPE_DEF(ClockCorrectionsProvider), module, "ClockCorrectionsProvider", 0);
          }

          void t_ClockCorrectionsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "class_", make_descriptor(ClockCorrectionsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "wrapfn_", make_descriptor(t_ClockCorrectionsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "boxfn_", make_descriptor(boxObject));
            env->getClass(ClockCorrectionsProvider::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "CLOCK_CORRECTIONS", make_descriptor(j2p(*ClockCorrectionsProvider::CLOCK_CORRECTIONS)));
          }

          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ClockCorrectionsProvider::initializeClass, 1)))
              return NULL;
            return t_ClockCorrectionsProvider::wrap_Object(ClockCorrectionsProvider(((t_ClockCorrectionsProvider *) arg)->object.this$));
          }
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ClockCorrectionsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements a0((jobject) NULL);
            ClockCorrectionsProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements::initializeClass, &a0))
            {
              INT_CALL(object = ClockCorrectionsProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data)
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
#include "java/lang/Long.h"
#include "java/lang/Comparable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Long::class$ = NULL;
    jmethodID *Long::mids$ = NULL;
    bool Long::live$ = false;
    jint Long::BYTES = (jint) 0;
    jlong Long::MAX_VALUE = (jlong) 0;
    jlong Long::MIN_VALUE = (jlong) 0;
    jint Long::SIZE = (jint) 0;
    ::java::lang::Class *Long::TYPE = NULL;

    jclass Long::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Long");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_bitCount_d0f2acf0c955e055] = env->getStaticMethodID(cls, "bitCount", "(J)I");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_f926ef7b907478d5] = env->getStaticMethodID(cls, "compare", "(JJ)I");
        mids$[mid_compareTo_389b4602cb83822f] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Long;)I");
        mids$[mid_compareUnsigned_f926ef7b907478d5] = env->getStaticMethodID(cls, "compareUnsigned", "(JJ)I");
        mids$[mid_decode_2bdc5221c15e81d1] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_divideUnsigned_fe4804b67425641b] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getLong_2bdc5221c15e81d1] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_getLong_4a73a63ad05b3ccb] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
        mids$[mid_getLong_b5d59aaac53b8d7f] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_d0f2acf0c955e055] = env->getStaticMethodID(cls, "hashCode", "(J)I");
        mids$[mid_highestOneBit_02b241598e254a3f] = env->getStaticMethodID(cls, "highestOneBit", "(J)J");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_02b241598e254a3f] = env->getStaticMethodID(cls, "lowestOneBit", "(J)J");
        mids$[mid_max_fe4804b67425641b] = env->getStaticMethodID(cls, "max", "(JJ)J");
        mids$[mid_min_fe4804b67425641b] = env->getStaticMethodID(cls, "min", "(JJ)J");
        mids$[mid_numberOfLeadingZeros_d0f2acf0c955e055] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(J)I");
        mids$[mid_numberOfTrailingZeros_d0f2acf0c955e055] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(J)I");
        mids$[mid_parseLong_e3831db48e197f9e] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;)J");
        mids$[mid_parseLong_a55161457270b7bb] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseLong_23ebe56da7a4d223] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_parseUnsignedLong_e3831db48e197f9e] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;)J");
        mids$[mid_parseUnsignedLong_a55161457270b7bb] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseUnsignedLong_23ebe56da7a4d223] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_remainderUnsigned_fe4804b67425641b] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
        mids$[mid_reverse_02b241598e254a3f] = env->getStaticMethodID(cls, "reverse", "(J)J");
        mids$[mid_reverseBytes_02b241598e254a3f] = env->getStaticMethodID(cls, "reverseBytes", "(J)J");
        mids$[mid_rotateLeft_559895cd752223b6] = env->getStaticMethodID(cls, "rotateLeft", "(JI)J");
        mids$[mid_rotateRight_559895cd752223b6] = env->getStaticMethodID(cls, "rotateRight", "(JI)J");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_d0f2acf0c955e055] = env->getStaticMethodID(cls, "signum", "(J)I");
        mids$[mid_sum_fe4804b67425641b] = env->getStaticMethodID(cls, "sum", "(JJ)J");
        mids$[mid_toBinaryString_b42814811762ffb5] = env->getStaticMethodID(cls, "toBinaryString", "(J)Ljava/lang/String;");
        mids$[mid_toHexString_b42814811762ffb5] = env->getStaticMethodID(cls, "toHexString", "(J)Ljava/lang/String;");
        mids$[mid_toOctalString_b42814811762ffb5] = env->getStaticMethodID(cls, "toOctalString", "(J)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_b42814811762ffb5] = env->getStaticMethodID(cls, "toString", "(J)Ljava/lang/String;");
        mids$[mid_toString_2ea7c2740022ee2e] = env->getStaticMethodID(cls, "toString", "(JI)Ljava/lang/String;");
        mids$[mid_toUnsignedString_b42814811762ffb5] = env->getStaticMethodID(cls, "toUnsignedString", "(J)Ljava/lang/String;");
        mids$[mid_toUnsignedString_2ea7c2740022ee2e] = env->getStaticMethodID(cls, "toUnsignedString", "(JI)Ljava/lang/String;");
        mids$[mid_valueOf_2bdc5221c15e81d1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_valueOf_ccc2f3dad9f69e9b] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/Long;");
        mids$[mid_valueOf_971871236c3c323a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticLongField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticLongField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Long::Long(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Long::Long(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

    jint Long::bitCount(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_d0f2acf0c955e055], a0);
    }

    jbyte Long::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Long::compare(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f926ef7b907478d5], a0, a1);
    }

    jint Long::compareTo(const Long & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_389b4602cb83822f], a0.this$);
    }

    jint Long::compareUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_f926ef7b907478d5], a0, a1);
    }

    Long Long::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_decode_2bdc5221c15e81d1], a0.this$));
    }

    jlong Long::divideUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_fe4804b67425641b], a0, a1);
    }

    jdouble Long::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Long::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jfloat Long::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    Long Long::getLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_2bdc5221c15e81d1], a0.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, const Long & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_4a73a63ad05b3ccb], a0.this$, a1.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_b5d59aaac53b8d7f], a0.this$, a1));
    }

    jint Long::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Long::hashCode(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d0f2acf0c955e055], a0);
    }

    jlong Long::highestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_highestOneBit_02b241598e254a3f], a0);
    }

    jint Long::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jlong Long::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jlong Long::lowestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_lowestOneBit_02b241598e254a3f], a0);
    }

    jlong Long::max$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_max_fe4804b67425641b], a0, a1);
    }

    jlong Long::min$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_min_fe4804b67425641b], a0, a1);
    }

    jint Long::numberOfLeadingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_d0f2acf0c955e055], a0);
    }

    jint Long::numberOfTrailingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_d0f2acf0c955e055], a0);
    }

    jlong Long::parseLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_e3831db48e197f9e], a0.this$);
    }

    jlong Long::parseLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_a55161457270b7bb], a0.this$, a1);
    }

    jlong Long::parseLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_23ebe56da7a4d223], a0.this$, a1, a2, a3);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_e3831db48e197f9e], a0.this$);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_a55161457270b7bb], a0.this$, a1);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_23ebe56da7a4d223], a0.this$, a1, a2, a3);
    }

    jlong Long::remainderUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_fe4804b67425641b], a0, a1);
    }

    jlong Long::reverse(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverse_02b241598e254a3f], a0);
    }

    jlong Long::reverseBytes(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverseBytes_02b241598e254a3f], a0);
    }

    jlong Long::rotateLeft(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateLeft_559895cd752223b6], a0, a1);
    }

    jlong Long::rotateRight(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateRight_559895cd752223b6], a0, a1);
    }

    jshort Long::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    jint Long::signum(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_d0f2acf0c955e055], a0);
    }

    jlong Long::sum(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_sum_fe4804b67425641b], a0, a1);
    }

    ::java::lang::String Long::toBinaryString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_b42814811762ffb5], a0));
    }

    ::java::lang::String Long::toHexString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_b42814811762ffb5], a0));
    }

    ::java::lang::String Long::toOctalString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_b42814811762ffb5], a0));
    }

    ::java::lang::String Long::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Long::toString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_b42814811762ffb5], a0));
    }

    ::java::lang::String Long::toString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2ea7c2740022ee2e], a0, a1));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_b42814811762ffb5], a0));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_2ea7c2740022ee2e], a0, a1));
    }

    Long Long::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2bdc5221c15e81d1], a0.this$));
    }

    Long Long::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ccc2f3dad9f69e9b], a0));
    }

    Long Long::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_971871236c3c323a], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg);
    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_equals(t_Long *self, PyObject *args);
    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args);
    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_intValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_longValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toString(t_Long *self, PyObject *args);
    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Long__methods_[] = {
      DECLARE_METHOD(t_Long, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, compareTo, METH_O),
      DECLARE_METHOD(t_Long, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, equals, METH_VARARGS),
      DECLARE_METHOD(t_Long, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, getLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Long, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, parseLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, parseUnsignedLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toString, METH_VARARGS),
      DECLARE_METHOD(t_Long, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Long)[] = {
      { Py_tp_methods, t_Long__methods_ },
      { Py_tp_init, (void *) t_Long_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Long)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Long, t_Long, Long);

    void t_Long::install(PyObject *module)
    {
      installType(&PY_TYPE(Long), &PY_TYPE_DEF(Long), module, "Long", 0);
    }

    void t_Long::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "class_", make_descriptor(Long::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "wrapfn_", make_descriptor(unboxLong));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "boxfn_", make_descriptor(boxLong));
      env->getClass(Long::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "BYTES", make_descriptor(Long::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MAX_VALUE", make_descriptor(Long::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MIN_VALUE", make_descriptor(Long::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "SIZE", make_descriptor(Long::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Long::TYPE)));
    }

    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Long::initializeClass, 1)))
        return NULL;
      return t_Long::wrap_Object(Long(((t_Long *) arg)->object.this$));
    }
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Long::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Long object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Long(a0));
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

    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg)
    {
      Long a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Long), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Long result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::decode(a0));
        return t_Long::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::divideUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Long_equals(t_Long *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Long a1((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Long), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLong", args);
      return NULL;
    }

    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::highestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_intValue(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Long_longValue(t_Long *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::lowestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::max$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::min$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseLong", args);
      return NULL;
    }

    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedLong", args);
      return NULL;
    }

    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::remainderUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverseBytes(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateLeft(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateRight(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::sum(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Long_toString(t_Long *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        {
          jlong a0;
          Long result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1057::class$ = NULL;
              jmethodID *Rtcm1057::mids$ = NULL;
              bool Rtcm1057::live$ = false;

              jclass Rtcm1057::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1057::Rtcm1057(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args);
              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data);
              static PyGetSetDef t_Rtcm1057__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1057, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1057__methods_[] = {
                DECLARE_METHOD(t_Rtcm1057, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1057)[] = {
                { Py_tp_methods, t_Rtcm1057__methods_ },
                { Py_tp_init, (void *) t_Rtcm1057_init_ },
                { Py_tp_getset, t_Rtcm1057__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1057)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1057, t_Rtcm1057, Rtcm1057);
              PyObject *t_Rtcm1057::wrap_Object(const Rtcm1057& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1057::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1057::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1057), &PY_TYPE_DEF(Rtcm1057), module, "Rtcm1057", 0);
              }

              void t_Rtcm1057::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "class_", make_descriptor(Rtcm1057::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "wrapfn_", make_descriptor(t_Rtcm1057::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1057::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1057::wrap_Object(Rtcm1057(((t_Rtcm1057 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1057::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1057 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1057(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data)
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
#include "org/orekit/time/GMSTScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GMSTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble GMSTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GMSTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String GMSTScale::toString() const
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
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader$LineParameters::class$ = NULL;
            jmethodID *SOLFSMYDataLoader$LineParameters::mids$ = NULL;
            bool SOLFSMYDataLoader$LineParameters::live$ = false;

            jclass SOLFSMYDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a6955225de4fc928] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDD)V");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getF10_dff5885c2c873297] = env->getMethodID(cls, "getF10", "()D");
                mids$[mid_getF10B_dff5885c2c873297] = env->getMethodID(cls, "getF10B", "()D");
                mids$[mid_getS10_dff5885c2c873297] = env->getMethodID(cls, "getS10", "()D");
                mids$[mid_getS10B_dff5885c2c873297] = env->getMethodID(cls, "getS10B", "()D");
                mids$[mid_getXM10_dff5885c2c873297] = env->getMethodID(cls, "getXM10", "()D");
                mids$[mid_getXM10B_dff5885c2c873297] = env->getMethodID(cls, "getXM10B", "()D");
                mids$[mid_getY10_dff5885c2c873297] = env->getMethodID(cls, "getY10", "()D");
                mids$[mid_getY10B_dff5885c2c873297] = env->getMethodID(cls, "getY10B", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader$LineParameters::SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6955225de4fc928, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_dff5885c2c873297]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_dff5885c2c873297]);
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
            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10B),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10B, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader$LineParameters, t_SOLFSMYDataLoader$LineParameters, SOLFSMYDataLoader$LineParameters);

            void t_SOLFSMYDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader$LineParameters), &PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters), module, "SOLFSMYDataLoader$LineParameters", 0);
            }

            void t_SOLFSMYDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "class_", make_descriptor(SOLFSMYDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader$LineParameters::wrap_Object(SOLFSMYDataLoader$LineParameters(((t_SOLFSMYDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
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
              SOLFSMYDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = SOLFSMYDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10B());
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
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateFunction::mids$ = NULL;
      bool CalculusFieldUnivariateFunction::live$ = false;

      jclass CalculusFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateFunction, t_CalculusFieldUnivariateFunction, CalculusFieldUnivariateFunction);
      PyObject *t_CalculusFieldUnivariateFunction::wrap_Object(const CalculusFieldUnivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateFunction), &PY_TYPE_DEF(CalculusFieldUnivariateFunction), module, "CalculusFieldUnivariateFunction", 0);
      }

      void t_CalculusFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "class_", make_descriptor(CalculusFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateFunction::wrap_Object(CalculusFieldUnivariateFunction(((t_CalculusFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OnOff::class$ = NULL;
          jmethodID *OnOff::mids$ = NULL;
          bool OnOff::live$ = false;
          OnOff *OnOff::OFF = NULL;
          OnOff *OnOff::ON = NULL;

          jclass OnOff::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OnOff");

              mids$ = new jmethodID[max_mid];
              mids$[mid_isOn_b108b35ef48e27bd] = env->getMethodID(cls, "isOn", "()Z");
              mids$[mid_valueOf_2fa16bd229e33be8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OnOff;");
              mids$[mid_values_fa00b235f66b4b90] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OnOff;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              OFF = new OnOff(env->getStaticObjectField(cls, "OFF", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              ON = new OnOff(env->getStaticObjectField(cls, "ON", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean OnOff::isOn() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isOn_b108b35ef48e27bd]);
          }

          OnOff OnOff::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OnOff(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2fa16bd229e33be8], a0.this$));
          }

          JArray< OnOff > OnOff::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OnOff >(env->callStaticObjectMethod(cls, mids$[mid_values_fa00b235f66b4b90]));
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
          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args);
          static PyObject *t_OnOff_isOn(t_OnOff *self);
          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OnOff_values(PyTypeObject *type);
          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data);
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data);
          static PyGetSetDef t_OnOff__fields_[] = {
            DECLARE_GET_FIELD(t_OnOff, on),
            DECLARE_GET_FIELD(t_OnOff, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnOff__methods_[] = {
            DECLARE_METHOD(t_OnOff, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, of_, METH_VARARGS),
            DECLARE_METHOD(t_OnOff, isOn, METH_NOARGS),
            DECLARE_METHOD(t_OnOff, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OnOff, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnOff)[] = {
            { Py_tp_methods, t_OnOff__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OnOff__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnOff)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OnOff, t_OnOff, OnOff);
          PyObject *t_OnOff::wrap_Object(const OnOff& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OnOff::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OnOff::install(PyObject *module)
          {
            installType(&PY_TYPE(OnOff), &PY_TYPE_DEF(OnOff), module, "OnOff", 0);
          }

          void t_OnOff::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "class_", make_descriptor(OnOff::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "wrapfn_", make_descriptor(t_OnOff::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "boxfn_", make_descriptor(boxObject));
            env->getClass(OnOff::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "OFF", make_descriptor(t_OnOff::wrap_Object(*OnOff::OFF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "ON", make_descriptor(t_OnOff::wrap_Object(*OnOff::ON)));
          }

          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnOff::initializeClass, 1)))
              return NULL;
            return t_OnOff::wrap_Object(OnOff(((t_OnOff *) arg)->object.this$));
          }
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnOff::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OnOff_isOn(t_OnOff *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isOn());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OnOff result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::valueOf(a0));
              return t_OnOff::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OnOff_values(PyTypeObject *type)
          {
            JArray< OnOff > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::values());
            return JArray<jobject>(result.this$).wrap(t_OnOff::wrap_jobject);
          }
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isOn());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationsProvider::class$ = NULL;
        jmethodID *EstimationsProvider::mids$ = NULL;
        bool EstimationsProvider::live$ = false;

        jclass EstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEstimatedMeasurement_978ac7593c1405c5] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getNumber", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement EstimationsProvider::getEstimatedMeasurement(jint a0) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurement_978ac7593c1405c5], a0));
        }

        jint EstimationsProvider::getNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumber_570ce0828f81a2c1]);
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
        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg);
        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self);
        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data);
        static PyGetSetDef t_EstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationsProvider, number),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_EstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, getEstimatedMeasurement, METH_O),
          DECLARE_METHOD(t_EstimationsProvider, getNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationsProvider)[] = {
          { Py_tp_methods, t_EstimationsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimationsProvider, t_EstimationsProvider, EstimationsProvider);

        void t_EstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationsProvider), &PY_TYPE_DEF(EstimationsProvider), module, "EstimationsProvider", 0);
        }

        void t_EstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "class_", make_descriptor(EstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "wrapfn_", make_descriptor(t_EstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_EstimationsProvider::wrap_Object(EstimationsProvider(((t_EstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getEstimatedMeasurement(a0));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEstimatedMeasurement", arg);
          return NULL;
        }

        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumber());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadata::class$ = NULL;
            jmethodID *TdmMetadata::mids$ = NULL;
            bool TdmMetadata::live$ = false;

            jclass TdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEphemerisName_eb545b81bcb6baba] = env->getMethodID(cls, "addEphemerisName", "(ILjava/lang/String;)V");
                mids$[mid_addParticipant_eb545b81bcb6baba] = env->getMethodID(cls, "addParticipant", "(ILjava/lang/String;)V");
                mids$[mid_addReceiveDelay_bb79ca80d85d0a66] = env->getMethodID(cls, "addReceiveDelay", "(ID)V");
                mids$[mid_addTransmitDelay_bb79ca80d85d0a66] = env->getMethodID(cls, "addTransmitDelay", "(ID)V");
                mids$[mid_getAngleType_f91b4dea8518961e] = env->getMethodID(cls, "getAngleType", "()Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_getCorrectionAberrationDiurnal_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionAberrationDiurnal", "()D");
                mids$[mid_getCorrectionAberrationYearly_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionAberrationYearly", "()D");
                mids$[mid_getCorrectionAngle1_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionAngle1", "()D");
                mids$[mid_getCorrectionAngle2_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionAngle2", "()D");
                mids$[mid_getCorrectionDoppler_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionDoppler", "()D");
                mids$[mid_getCorrectionMagnitude_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionMagnitude", "()D");
                mids$[mid_getCorrectionRange_24af9cf244c434df] = env->getMethodID(cls, "getCorrectionRange", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getCorrectionRcs_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionRcs", "()D");
                mids$[mid_getCorrectionReceive_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionReceive", "()D");
                mids$[mid_getCorrectionTransmit_dff5885c2c873297] = env->getMethodID(cls, "getCorrectionTransmit", "()D");
                mids$[mid_getCorrectionsApplied_a2a54e9c1ed7c722] = env->getMethodID(cls, "getCorrectionsApplied", "()Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_getDataQuality_16a8165b3529c8d4] = env->getMethodID(cls, "getDataQuality", "()Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_getDataTypes_2afa36052df4765d] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                mids$[mid_getDopplerCountBias_dff5885c2c873297] = env->getMethodID(cls, "getDopplerCountBias", "()D");
                mids$[mid_getDopplerCountScale_dff5885c2c873297] = env->getMethodID(cls, "getDopplerCountScale", "()D");
                mids$[mid_getEphemerisNames_6f5a75ccd8c04465] = env->getMethodID(cls, "getEphemerisNames", "()Ljava/util/Map;");
                mids$[mid_getFreqOffset_dff5885c2c873297] = env->getMethodID(cls, "getFreqOffset", "()D");
                mids$[mid_getIntegrationInterval_dff5885c2c873297] = env->getMethodID(cls, "getIntegrationInterval", "()D");
                mids$[mid_getIntegrationRef_e26ae58265a29e20] = env->getMethodID(cls, "getIntegrationRef", "()Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_getInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                mids$[mid_getMode_7de625188c0e0e3d] = env->getMethodID(cls, "getMode", "()Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_getParticipants_6f5a75ccd8c04465] = env->getMethodID(cls, "getParticipants", "()Ljava/util/Map;");
                mids$[mid_getPath_d0635cea09dc178c] = env->getMethodID(cls, "getPath", "()[I");
                mids$[mid_getPath1_d0635cea09dc178c] = env->getMethodID(cls, "getPath1", "()[I");
                mids$[mid_getPath2_d0635cea09dc178c] = env->getMethodID(cls, "getPath2", "()[I");
                mids$[mid_getRangeMode_ddb62a126c432b32] = env->getMethodID(cls, "getRangeMode", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_getRangeModulus_24af9cf244c434df] = env->getMethodID(cls, "getRangeModulus", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getRangeUnits_d8e325ed615979df] = env->getMethodID(cls, "getRangeUnits", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_getRawCorrectionRange_dff5885c2c873297] = env->getMethodID(cls, "getRawCorrectionRange", "()D");
                mids$[mid_getRawRangeModulus_dff5885c2c873297] = env->getMethodID(cls, "getRawRangeModulus", "()D");
                mids$[mid_getReceiveBand_11b109bd155ca898] = env->getMethodID(cls, "getReceiveBand", "()Ljava/lang/String;");
                mids$[mid_getReceiveDelays_6f5a75ccd8c04465] = env->getMethodID(cls, "getReceiveDelays", "()Ljava/util/Map;");
                mids$[mid_getReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getStartTime_85703d13e302437e] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopTime_85703d13e302437e] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimetagRef_d9da4ce754c0b913] = env->getMethodID(cls, "getTimetagRef", "()Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_getTrackId_11b109bd155ca898] = env->getMethodID(cls, "getTrackId", "()Ljava/lang/String;");
                mids$[mid_getTransmitBand_11b109bd155ca898] = env->getMethodID(cls, "getTransmitBand", "()Ljava/lang/String;");
                mids$[mid_getTransmitDelays_6f5a75ccd8c04465] = env->getMethodID(cls, "getTransmitDelays", "()Ljava/util/Map;");
                mids$[mid_getTurnaroundDenominator_570ce0828f81a2c1] = env->getMethodID(cls, "getTurnaroundDenominator", "()I");
                mids$[mid_getTurnaroundNumerator_570ce0828f81a2c1] = env->getMethodID(cls, "getTurnaroundNumerator", "()I");
                mids$[mid_hasDopplerCountRollover_b108b35ef48e27bd] = env->getMethodID(cls, "hasDopplerCountRollover", "()Z");
                mids$[mid_setAngleType_85e7c7f200e5e122] = env->getMethodID(cls, "setAngleType", "(Lorg/orekit/files/ccsds/ndm/tdm/AngleType;)V");
                mids$[mid_setCorrectionAberrationDiurnal_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionAberrationDiurnal", "(D)V");
                mids$[mid_setCorrectionAberrationYearly_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionAberrationYearly", "(D)V");
                mids$[mid_setCorrectionAngle1_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionAngle1", "(D)V");
                mids$[mid_setCorrectionAngle2_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionAngle2", "(D)V");
                mids$[mid_setCorrectionDoppler_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionDoppler", "(D)V");
                mids$[mid_setCorrectionMagnitude_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionMagnitude", "(D)V");
                mids$[mid_setCorrectionRcs_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionRcs", "(D)V");
                mids$[mid_setCorrectionReceive_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionReceive", "(D)V");
                mids$[mid_setCorrectionTransmit_17db3a65980d3441] = env->getMethodID(cls, "setCorrectionTransmit", "(D)V");
                mids$[mid_setCorrectionsApplied_2153405ea927d10c] = env->getMethodID(cls, "setCorrectionsApplied", "(Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;)V");
                mids$[mid_setDataQuality_0d2938ec981ab5ae] = env->getMethodID(cls, "setDataQuality", "(Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;)V");
                mids$[mid_setDataTypes_de3e021e7266b71e] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                mids$[mid_setDopplerCountBias_17db3a65980d3441] = env->getMethodID(cls, "setDopplerCountBias", "(D)V");
                mids$[mid_setDopplerCountRollover_bd04c9335fb9e4cf] = env->getMethodID(cls, "setDopplerCountRollover", "(Z)V");
                mids$[mid_setDopplerCountScale_17db3a65980d3441] = env->getMethodID(cls, "setDopplerCountScale", "(D)V");
                mids$[mid_setEphemerisNames_db8de8bc54857165] = env->getMethodID(cls, "setEphemerisNames", "(Ljava/util/Map;)V");
                mids$[mid_setFreqOffset_17db3a65980d3441] = env->getMethodID(cls, "setFreqOffset", "(D)V");
                mids$[mid_setIntegrationInterval_17db3a65980d3441] = env->getMethodID(cls, "setIntegrationInterval", "(D)V");
                mids$[mid_setIntegrationRef_c2a64cb80d011139] = env->getMethodID(cls, "setIntegrationRef", "(Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;)V");
                mids$[mid_setInterpolationDegree_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                mids$[mid_setInterpolationMethod_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                mids$[mid_setMode_4401f9bb72642424] = env->getMethodID(cls, "setMode", "(Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;)V");
                mids$[mid_setParticipants_db8de8bc54857165] = env->getMethodID(cls, "setParticipants", "(Ljava/util/Map;)V");
                mids$[mid_setPath_d147d7ce001e2d45] = env->getMethodID(cls, "setPath", "([I)V");
                mids$[mid_setPath1_d147d7ce001e2d45] = env->getMethodID(cls, "setPath1", "([I)V");
                mids$[mid_setPath2_d147d7ce001e2d45] = env->getMethodID(cls, "setPath2", "([I)V");
                mids$[mid_setRangeMode_fbab2027dea0f22f] = env->getMethodID(cls, "setRangeMode", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;)V");
                mids$[mid_setRangeUnits_957470214b89d066] = env->getMethodID(cls, "setRangeUnits", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;)V");
                mids$[mid_setRawCorrectionRange_17db3a65980d3441] = env->getMethodID(cls, "setRawCorrectionRange", "(D)V");
                mids$[mid_setRawRangeModulus_17db3a65980d3441] = env->getMethodID(cls, "setRawRangeModulus", "(D)V");
                mids$[mid_setReceiveBand_d0bc48d5b00dc40c] = env->getMethodID(cls, "setReceiveBand", "(Ljava/lang/String;)V");
                mids$[mid_setReceiveDelays_db8de8bc54857165] = env->getMethodID(cls, "setReceiveDelays", "(Ljava/util/Map;)V");
                mids$[mid_setReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setStartTime_600a2a61652bc473] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopTime_600a2a61652bc473] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimetagRef_858a8a66d8c1b242] = env->getMethodID(cls, "setTimetagRef", "(Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;)V");
                mids$[mid_setTrackId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrackId", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitBand_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTransmitBand", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitDelays_db8de8bc54857165] = env->getMethodID(cls, "setTransmitDelays", "(Ljava/util/Map;)V");
                mids$[mid_setTurnaroundDenominator_99803b0791f320ff] = env->getMethodID(cls, "setTurnaroundDenominator", "(I)V");
                mids$[mid_setTurnaroundNumerator_99803b0791f320ff] = env->getMethodID(cls, "setTurnaroundNumerator", "(I)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmMetadata::TdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void TdmMetadata::addEphemerisName(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEphemerisName_eb545b81bcb6baba], a0, a1.this$);
            }

            void TdmMetadata::addParticipant(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addParticipant_eb545b81bcb6baba], a0, a1.this$);
            }

            void TdmMetadata::addReceiveDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addReceiveDelay_bb79ca80d85d0a66], a0, a1);
            }

            void TdmMetadata::addTransmitDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addTransmitDelay_bb79ca80d85d0a66], a0, a1);
            }

            ::org::orekit::files::ccsds::ndm::tdm::AngleType TdmMetadata::getAngleType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::AngleType(env->callObjectMethod(this$, mids$[mid_getAngleType_f91b4dea8518961e]));
            }

            jdouble TdmMetadata::getCorrectionAberrationDiurnal() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationDiurnal_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionAberrationYearly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationYearly_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionAngle1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle1_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionAngle2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle2_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionDoppler() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionDoppler_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionMagnitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionMagnitude_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRange_24af9cf244c434df], a0.this$);
            }

            jdouble TdmMetadata::getCorrectionRcs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRcs_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionReceive() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionReceive_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getCorrectionTransmit() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionTransmit_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied TdmMetadata::getCorrectionsApplied() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied(env->callObjectMethod(this$, mids$[mid_getCorrectionsApplied_a2a54e9c1ed7c722]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::DataQuality TdmMetadata::getDataQuality() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::DataQuality(env->callObjectMethod(this$, mids$[mid_getDataQuality_16a8165b3529c8d4]));
            }

            ::java::util::List TdmMetadata::getDataTypes() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_2afa36052df4765d]));
            }

            jdouble TdmMetadata::getDopplerCountBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountBias_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getDopplerCountScale() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountScale_dff5885c2c873297]);
            }

            ::java::util::Map TdmMetadata::getEphemerisNames() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getEphemerisNames_6f5a75ccd8c04465]));
            }

            jdouble TdmMetadata::getFreqOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getFreqOffset_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getIntegrationInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIntegrationInterval_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference TdmMetadata::getIntegrationRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference(env->callObjectMethod(this$, mids$[mid_getIntegrationRef_e26ae58265a29e20]));
            }

            jint TdmMetadata::getInterpolationDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_570ce0828f81a2c1]);
            }

            ::java::lang::String TdmMetadata::getInterpolationMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TrackingMode TdmMetadata::getMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TrackingMode(env->callObjectMethod(this$, mids$[mid_getMode_7de625188c0e0e3d]));
            }

            ::java::util::Map TdmMetadata::getParticipants() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParticipants_6f5a75ccd8c04465]));
            }

            JArray< jint > TdmMetadata::getPath() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath_d0635cea09dc178c]));
            }

            JArray< jint > TdmMetadata::getPath1() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath1_d0635cea09dc178c]));
            }

            JArray< jint > TdmMetadata::getPath2() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath2_d0635cea09dc178c]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeMode TdmMetadata::getRangeMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeMode(env->callObjectMethod(this$, mids$[mid_getRangeMode_ddb62a126c432b32]));
            }

            jdouble TdmMetadata::getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRangeModulus_24af9cf244c434df], a0.this$);
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeUnits TdmMetadata::getRangeUnits() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeUnits(env->callObjectMethod(this$, mids$[mid_getRangeUnits_d8e325ed615979df]));
            }

            jdouble TdmMetadata::getRawCorrectionRange() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawCorrectionRange_dff5885c2c873297]);
            }

            jdouble TdmMetadata::getRawRangeModulus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawRangeModulus_dff5885c2c873297]);
            }

            ::java::lang::String TdmMetadata::getReceiveBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiveBand_11b109bd155ca898]));
            }

            ::java::util::Map TdmMetadata::getReceiveDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getReceiveDelays_6f5a75ccd8c04465]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade TdmMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_5d5dd95b04037824]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStartTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStopTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_85703d13e302437e]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TimetagReference TdmMetadata::getTimetagRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TimetagReference(env->callObjectMethod(this$, mids$[mid_getTimetagRef_d9da4ce754c0b913]));
            }

            ::java::lang::String TdmMetadata::getTrackId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrackId_11b109bd155ca898]));
            }

            ::java::lang::String TdmMetadata::getTransmitBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransmitBand_11b109bd155ca898]));
            }

            ::java::util::Map TdmMetadata::getTransmitDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTransmitDelays_6f5a75ccd8c04465]));
            }

            jint TdmMetadata::getTurnaroundDenominator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundDenominator_570ce0828f81a2c1]);
            }

            jint TdmMetadata::getTurnaroundNumerator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundNumerator_570ce0828f81a2c1]);
            }

            jboolean TdmMetadata::hasDopplerCountRollover() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasDopplerCountRollover_b108b35ef48e27bd]);
            }

            void TdmMetadata::setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAngleType_85e7c7f200e5e122], a0.this$);
            }

            void TdmMetadata::setCorrectionAberrationDiurnal(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationDiurnal_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionAberrationYearly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationYearly_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionAngle1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle1_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionAngle2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle2_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionDoppler(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionDoppler_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionMagnitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionMagnitude_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionRcs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionRcs_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionReceive(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionReceive_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionTransmit(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionTransmit_17db3a65980d3441], a0);
            }

            void TdmMetadata::setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionsApplied_2153405ea927d10c], a0.this$);
            }

            void TdmMetadata::setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataQuality_0d2938ec981ab5ae], a0.this$);
            }

            void TdmMetadata::setDataTypes(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataTypes_de3e021e7266b71e], a0.this$);
            }

            void TdmMetadata::setDopplerCountBias(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountBias_17db3a65980d3441], a0);
            }

            void TdmMetadata::setDopplerCountRollover(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountRollover_bd04c9335fb9e4cf], a0);
            }

            void TdmMetadata::setDopplerCountScale(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountScale_17db3a65980d3441], a0);
            }

            void TdmMetadata::setEphemerisNames(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemerisNames_db8de8bc54857165], a0.this$);
            }

            void TdmMetadata::setFreqOffset(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFreqOffset_17db3a65980d3441], a0);
            }

            void TdmMetadata::setIntegrationInterval(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationInterval_17db3a65980d3441], a0);
            }

            void TdmMetadata::setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationRef_c2a64cb80d011139], a0.this$);
            }

            void TdmMetadata::setInterpolationDegree(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_99803b0791f320ff], a0);
            }

            void TdmMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_d0bc48d5b00dc40c], a0.this$);
            }

            void TdmMetadata::setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMode_4401f9bb72642424], a0.this$);
            }

            void TdmMetadata::setParticipants(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setParticipants_db8de8bc54857165], a0.this$);
            }

            void TdmMetadata::setPath(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath_d147d7ce001e2d45], a0.this$);
            }

            void TdmMetadata::setPath1(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath1_d147d7ce001e2d45], a0.this$);
            }

            void TdmMetadata::setPath2(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath2_d147d7ce001e2d45], a0.this$);
            }

            void TdmMetadata::setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeMode_fbab2027dea0f22f], a0.this$);
            }

            void TdmMetadata::setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeUnits_957470214b89d066], a0.this$);
            }

            void TdmMetadata::setRawCorrectionRange(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawCorrectionRange_17db3a65980d3441], a0);
            }

            void TdmMetadata::setRawRangeModulus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawRangeModulus_17db3a65980d3441], a0);
            }

            void TdmMetadata::setReceiveBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveBand_d0bc48d5b00dc40c], a0.this$);
            }

            void TdmMetadata::setReceiveDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveDelays_db8de8bc54857165], a0.this$);
            }

            void TdmMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_849bc9e3b38b9bcb], a0.this$);
            }

            void TdmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartTime_600a2a61652bc473], a0.this$);
            }

            void TdmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopTime_600a2a61652bc473], a0.this$);
            }

            void TdmMetadata::setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimetagRef_858a8a66d8c1b242], a0.this$);
            }

            void TdmMetadata::setTrackId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTrackId_d0bc48d5b00dc40c], a0.this$);
            }

            void TdmMetadata::setTransmitBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitBand_d0bc48d5b00dc40c], a0.this$);
            }

            void TdmMetadata::setTransmitDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitDelays_db8de8bc54857165], a0.this$);
            }

            void TdmMetadata::setTurnaroundDenominator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundDenominator_99803b0791f320ff], a0);
            }

            void TdmMetadata::setTurnaroundNumerator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundNumerator_99803b0791f320ff], a0);
            }

            void TdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data);
            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_TdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_TdmMetadata, angleType),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationDiurnal),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationYearly),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionDoppler),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionMagnitude),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionRcs),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionReceive),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionTransmit),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionsApplied),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataQuality),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataTypes),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountBias),
              DECLARE_SET_FIELD(t_TdmMetadata, dopplerCountRollover),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountScale),
              DECLARE_GETSET_FIELD(t_TdmMetadata, ephemerisNames),
              DECLARE_GETSET_FIELD(t_TdmMetadata, freqOffset),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationInterval),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationDegree),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationMethod),
              DECLARE_GETSET_FIELD(t_TdmMetadata, mode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, participants),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeMode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeUnits),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawCorrectionRange),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawRangeModulus),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, referenceFrame),
              DECLARE_GETSET_FIELD(t_TdmMetadata, startTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, stopTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, timetagRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, trackId),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundDenominator),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundNumerator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadata__methods_[] = {
              DECLARE_METHOD(t_TdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, addEphemerisName, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addParticipant, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addReceiveDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addTransmitDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, getAngleType, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationDiurnal, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationYearly, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionDoppler, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionMagnitude, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRcs, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionReceive, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionTransmit, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionsApplied, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataQuality, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataTypes, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountBias, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountScale, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getEphemerisNames, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getFreqOffset, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationInterval, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationDegree, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationMethod, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getParticipants, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getRangeUnits, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawCorrectionRange, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawRangeModulus, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStartTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStopTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTimetagRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTrackId, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundDenominator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundNumerator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, hasDopplerCountRollover, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, setAngleType, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationDiurnal, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationYearly, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionDoppler, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionMagnitude, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionRcs, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionReceive, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionTransmit, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionsApplied, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataQuality, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataTypes, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountBias, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountRollover, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountScale, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setEphemerisNames, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setFreqOffset, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationInterval, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationDegree, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationMethod, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setParticipants, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeUnits, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStartTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStopTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTimetagRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTrackId, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundDenominator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundNumerator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadata)[] = {
              { Py_tp_methods, t_TdmMetadata__methods_ },
              { Py_tp_init, (void *) t_TdmMetadata_init_ },
              { Py_tp_getset, t_TdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(TdmMetadata, t_TdmMetadata, TdmMetadata);

            void t_TdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadata), &PY_TYPE_DEF(TdmMetadata), module, "TdmMetadata", 0);
            }

            void t_TdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "class_", make_descriptor(TdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "wrapfn_", make_descriptor(t_TdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadata::initializeClass, 1)))
                return NULL;
              return t_TdmMetadata::wrap_Object(TdmMetadata(((t_TdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              TdmMetadata object((jobject) NULL);

              INT_CALL(object = TdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addEphemerisName(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEphemerisName", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addParticipant(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addParticipant", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addReceiveDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addReceiveDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addTransmitDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addTransmitDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCorrectionRange(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied result((jobject) NULL);
              OBJ_CALL(result = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(ObservationType));
            }

            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInterpolationMethod());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath1());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath2());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getRangeModulus(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTrackId());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasDopplerCountRollover());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::parameters_))
              {
                OBJ_CALL(self->object.setAngleType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAngleType", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationDiurnal(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationDiurnal", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationYearly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationYearly", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionDoppler(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionDoppler", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionMagnitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionMagnitude", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionRcs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionRcs", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionReceive(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionReceive", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionTransmit(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionTransmit", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::parameters_))
              {
                OBJ_CALL(self->object.setCorrectionsApplied(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionsApplied", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::parameters_))
              {
                OBJ_CALL(self->object.setDataQuality(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataQuality", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg)
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

            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountBias(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountBias", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountRollover(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountRollover", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountScale(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountScale", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setEphemerisNames(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemerisNames", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFreqOffset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFreqOffset", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIntegrationInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationInterval", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::parameters_))
              {
                OBJ_CALL(self->object.setIntegrationRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setInterpolationDegree(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInterpolationMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::parameters_))
              {
                OBJ_CALL(self->object.setMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setParticipants(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setParticipants", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::parameters_))
              {
                OBJ_CALL(self->object.setRangeMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::parameters_))
              {
                OBJ_CALL(self->object.setRangeUnits(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeUnits", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawCorrectionRange(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawRangeModulus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setReceiveBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setReceiveDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::parameters_))
              {
                OBJ_CALL(self->object.setTimetagRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimetagRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTrackId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTrackId", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTransmitBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setTransmitDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundDenominator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundDenominator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundNumerator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundNumerator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(value);
            }
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAngleType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "angleType", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationDiurnal(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationDiurnal", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationYearly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationYearly", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionDoppler(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionDoppler", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionMagnitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionMagnitude", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionRcs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionRcs", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionReceive(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionReceive", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionTransmit(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionTransmit", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
              OBJ_CALL(value = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(value);
            }
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &value))
                {
                  INT_CALL(self->object.setCorrectionsApplied(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionsApplied", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataQuality(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataQuality", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountBias(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountBias", arg);
              return -1;
            }

            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setDopplerCountRollover(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountRollover", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountScale(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountScale", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setEphemerisNames(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemerisNames", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFreqOffset(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "freqOffset", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIntegrationInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationInterval", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntegrationRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setInterpolationDegree(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInterpolationMethod());
              return j2p(value);
            }
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInterpolationMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setParticipants(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "participants", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath1());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath2());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeMode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeUnits(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeUnits", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawCorrectionRange(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawCorrectionRange", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawRangeModulus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawRangeModulus", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setReceiveBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setReceiveDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimetagRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timetagRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTrackId());
              return j2p(value);
            }
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTrackId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "trackId", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTransmitBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setTransmitDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundDenominator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundDenominator", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundNumerator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundNumerator", arg);
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
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile::class$ = NULL;
        jmethodID *STKEphemerisFile::mids$ = NULL;
        bool STKEphemerisFile::live$ = false;

        jclass STKEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_82d6648e75220ef9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/stk/STKEphemerisFile$STKEphemeris;)V");
            mids$[mid_getSTKVersion_11b109bd155ca898] = env->getMethodID(cls, "getSTKVersion", "()Ljava/lang/String;");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile::STKEphemerisFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82d6648e75220ef9, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String STKEphemerisFile::getSTKVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSTKVersion_11b109bd155ca898]));
        }

        ::java::util::Map STKEphemerisFile::getSatellites() const
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
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data);
        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data);
        static PyGetSetDef t_STKEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile, sTKVersion),
          DECLARE_GET_FIELD(t_STKEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, getSTKVersion, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile)[] = {
          { Py_tp_methods, t_STKEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile_init_ },
          { Py_tp_getset, t_STKEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile, t_STKEphemerisFile, STKEphemerisFile);

        void t_STKEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile), &PY_TYPE_DEF(STKEphemerisFile), module, "STKEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKCoordinateSystem", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemeris", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemerisSegment", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment)));
        }

        void t_STKEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "class_", make_descriptor(STKEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "wrapfn_", make_descriptor(t_STKEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile::wrap_Object(STKEphemerisFile(((t_STKEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris a2((jobject) NULL);
          STKEphemerisFile object((jobject) NULL);

          if (!parseArgs(args, "ssk", ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = STKEphemerisFile(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSTKVersion());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemeris));
        }

        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSTKVersion());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialSplineFunction::class$ = NULL;
        jmethodID *FieldPolynomialSplineFunction::mids$ = NULL;
        bool FieldPolynomialSplineFunction::live$ = false;

        jclass FieldPolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6b3c91cce4813aba] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)V");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getKnots_226a0b2040b1d2e1] = env->getMethodID(cls, "getKnots", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_b83535a7ed9ac540] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_isValidPoint_a13b338b73b102ba] = env->getMethodID(cls, "isValidPoint", "(Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_polynomialSplineDerivative_8f167d00dfb6a1fa] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");
            mids$[mid_value_616c74807d7607b4] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialSplineFunction::FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b3c91cce4813aba, a0.this$, a1.this$)) {}

        ::org::hipparchus::Field FieldPolynomialSplineFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialSplineFunction::getKnots() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getKnots_226a0b2040b1d2e1]));
        }

        jint FieldPolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > FieldPolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_b83535a7ed9ac540]));
        }

        jboolean FieldPolynomialSplineFunction::isValidPoint(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_a13b338b73b102ba], a0.this$);
        }

        FieldPolynomialSplineFunction FieldPolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_8f167d00dfb6a1fa]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_616c74807d7607b4], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
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
      namespace polynomials {
        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, polynomials),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialSplineFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialSplineFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialSplineFunction, t_FieldPolynomialSplineFunction, FieldPolynomialSplineFunction);
        PyObject *t_FieldPolynomialSplineFunction::wrap_Object(const FieldPolynomialSplineFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialSplineFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialSplineFunction), &PY_TYPE_DEF(FieldPolynomialSplineFunction), module, "FieldPolynomialSplineFunction", 0);
        }

        void t_FieldPolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "class_", make_descriptor(FieldPolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "wrapfn_", make_descriptor(t_FieldPolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialSplineFunction::wrap_Object(FieldPolynomialSplineFunction(((t_FieldPolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldPolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::parameters_))
          {
            INT_CALL(object = FieldPolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self)
        {
          FieldPolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_FieldPolynomialSplineFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLambert::class$ = NULL;
        jmethodID *IodLambert::mids$ = NULL;
        bool IodLambert::live$ = false;

        jclass IodLambert::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLambert");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_99189e0f683258ab] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_643985b8729db69b] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e5f61ab1cb45bea2] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLambert::IodLambert(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::PV & a3, const ::org::orekit::estimation::measurements::PV & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_99189e0f683258ab], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::Position & a3, const ::org::orekit::estimation::measurements::Position & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_643985b8729db69b], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e5f61ab1cb45bea2], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$));
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
        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args);

        static PyMethodDef t_IodLambert__methods_[] = {
          DECLARE_METHOD(t_IodLambert, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLambert)[] = {
          { Py_tp_methods, t_IodLambert__methods_ },
          { Py_tp_init, (void *) t_IodLambert_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLambert)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLambert, t_IodLambert, IodLambert);

        void t_IodLambert::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLambert), &PY_TYPE_DEF(IodLambert), module, "IodLambert", 0);
        }

        void t_IodLambert::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "class_", make_descriptor(IodLambert::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "wrapfn_", make_descriptor(t_IodLambert::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLambert::initializeClass, 1)))
            return NULL;
          return t_IodLambert::wrap_Object(IodLambert(((t_IodLambert *) arg)->object.this$));
        }
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLambert::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLambert object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLambert(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::PV a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::Position a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSLegacyNavigationMessage::class$ = NULL;
            jmethodID *QZSSLegacyNavigationMessage::mids$ = NULL;
            bool QZSSLegacyNavigationMessage::live$ = false;

            jclass QZSSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSLegacyNavigationMessage::QZSSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSLegacyNavigationMessage, t_QZSSLegacyNavigationMessage, QZSSLegacyNavigationMessage);

            void t_QZSSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSLegacyNavigationMessage), &PY_TYPE_DEF(QZSSLegacyNavigationMessage), module, "QZSSLegacyNavigationMessage", 0);
            }

            void t_QZSSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "class_", make_descriptor(QZSSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_QZSSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSLegacyNavigationMessage::wrap_Object(QZSSLegacyNavigationMessage(((t_QZSSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              QZSSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = QZSSLegacyNavigationMessage());
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
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000InputParameters::class$ = NULL;
          jmethodID *DTM2000InputParameters::mids$ = NULL;
          bool DTM2000InputParameters::live$ = false;

          jclass DTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_get24HoursKp_bf1d7732f1acb697] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_bf1d7732f1acb697] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble DTM2000InputParameters::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_bf1d7732f1acb697], a0.this$);
          }

          jdouble DTM2000InputParameters::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_bf1d7732f1acb697], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
          }

          jdouble DTM2000InputParameters::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_bf1d7732f1acb697], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
          }

          jdouble DTM2000InputParameters::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_bf1d7732f1acb697], a0.this$);
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
          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data);
          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data);
          static PyGetSetDef t_DTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000InputParameters, maxDate),
            DECLARE_GET_FIELD(t_DTM2000InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_DTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, get24HoursKp, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getInstantFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getMeanFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getThreeHourlyKP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000InputParameters)[] = {
            { Py_tp_methods, t_DTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(DTM2000InputParameters, t_DTM2000InputParameters, DTM2000InputParameters);

          void t_DTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000InputParameters), &PY_TYPE_DEF(DTM2000InputParameters), module, "DTM2000InputParameters", 0);
          }

          void t_DTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "class_", make_descriptor(DTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "wrapfn_", make_descriptor(t_DTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_DTM2000InputParameters::wrap_Object(DTM2000InputParameters(((t_DTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.get24HoursKp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "get24HoursKp", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInstantFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInstantFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMeanFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKP", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldContinueOnEvent::class$ = NULL;
          jmethodID *FieldContinueOnEvent::mids$ = NULL;
          bool FieldContinueOnEvent::live$ = false;

          jclass FieldContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldContinueOnEvent::FieldContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action FieldContinueOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args);
          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args);
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data);
          static PyGetSetDef t_FieldContinueOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldContinueOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldContinueOnEvent)[] = {
            { Py_tp_methods, t_FieldContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldContinueOnEvent_init_ },
            { Py_tp_getset, t_FieldContinueOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldContinueOnEvent, t_FieldContinueOnEvent, FieldContinueOnEvent);
          PyObject *t_FieldContinueOnEvent::wrap_Object(const FieldContinueOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldContinueOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldContinueOnEvent), &PY_TYPE_DEF(FieldContinueOnEvent), module, "FieldContinueOnEvent", 0);
          }

          void t_FieldContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "class_", make_descriptor(FieldContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "wrapfn_", make_descriptor(t_FieldContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldContinueOnEvent::wrap_Object(FieldContinueOnEvent(((t_FieldContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldContinueOnEvent object((jobject) NULL);

            INT_CALL(object = FieldContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencySmoother::class$ = NULL;
          jmethodID *SingleFrequencySmoother::mids$ = NULL;
          bool SingleFrequencySmoother::live$ = false;

          jclass SingleFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e7ac04e1ff03d0a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/MeasurementType;DID)V");
              mids$[mid_copyObservationData_a2626020949c0710] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_e1080ec0c25a2b2c] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter;");
              mids$[mid_filterDataSet_e781233a691e29e8] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_16a1de631a9b7527] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_16a1de631a9b7527] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencySmoother::SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7ac04e1ff03d0a2, a0.this$, a1, a2, a3)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_a2626020949c0710], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter SingleFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::SatelliteSystem & a2) const
          {
            return ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_e1080ec0c25a2b2c], a0.this$, a1.this$, a2.this$));
          }

          void SingleFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_e781233a691e29e8], a0.this$, a1.this$, a2, a3.this$);
          }

          ::java::util::HashMap SingleFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_16a1de631a9b7527]));
          }

          ::java::util::HashMap SingleFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_16a1de631a9b7527]));
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
        namespace filtering {
          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data);
          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data);
          static PyGetSetDef t_SingleFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingleFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_SingleFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencySmoother)[] = {
            { Py_tp_methods, t_SingleFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencySmoother_init_ },
            { Py_tp_getset, t_SingleFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleFrequencySmoother, t_SingleFrequencySmoother, SingleFrequencySmoother);

          void t_SingleFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencySmoother), &PY_TYPE_DEF(SingleFrequencySmoother), module, "SingleFrequencySmoother", 0);
          }

          void t_SingleFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "class_", make_descriptor(SingleFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "wrapfn_", make_descriptor(t_SingleFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencySmoother::wrap_Object(SingleFrequencySmoother(((t_SingleFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::MeasurementType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jdouble a3;
            SingleFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "KDID", ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_MeasurementType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleFrequencySmoother(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2));
              return ::org::orekit::estimation::measurements::filtering::t_SingleFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KKIK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(SingleFrequencyHatchFilter));
          }

          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Opm::class$ = NULL;
              jmethodID *Opm::mids$ = NULL;
              bool Opm::live$ = false;
              ::java::lang::String *Opm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Opm::ROOT = NULL;

              jclass Opm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Opm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2b261aaf5054b0fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_generateCartesianOrbit_e5effdf9a992f1f2] = env->getMethodID(cls, "generateCartesianOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
                  mids$[mid_generateKeplerianOrbit_3b8c2ada972e4fd7] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_c6311115fea01a34] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_getData_795b1cd6af2ec6a7] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmData;");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManeuver_7e1ee5600d637967] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_2afa36052df4765d] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_db01ddc8c0b55b51] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;");
                  mids$[mid_getNbManeuvers_570ce0828f81a2c1] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_hasManeuvers_b108b35ef48e27bd] = env->getMethodID(cls, "hasManeuvers", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Opm::Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_2b261aaf5054b0fb, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::orbits::CartesianOrbit Opm::generateCartesianOrbit() const
              {
                return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_generateCartesianOrbit_e5effdf9a992f1f2]));
              }

              ::org::orekit::orbits::KeplerianOrbit Opm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_3b8c2ada972e4fd7]));
              }

              ::org::orekit::propagation::SpacecraftState Opm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_c6311115fea01a34]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::OpmData Opm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::OpmData(env->callObjectMethod(this$, mids$[mid_getData_795b1cd6af2ec6a7]));
              }

              ::org::orekit::time::AbsoluteDate Opm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver Opm::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_7e1ee5600d637967], a0));
              }

              ::java::util::List Opm::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata Opm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_db01ddc8c0b55b51]));
              }

              jint Opm::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_570ce0828f81a2c1]);
              }

              ::org::orekit::utils::TimeStampedPVCoordinates Opm::getPVCoordinates() const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_c204436deca11d94]));
              }

              jboolean Opm::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_b108b35ef48e27bd]);
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
              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args);
              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self);
              static PyObject *t_Opm_getData(t_Opm *self);
              static PyObject *t_Opm_getDate(t_Opm *self);
              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg);
              static PyObject *t_Opm_getManeuvers(t_Opm *self);
              static PyObject *t_Opm_getMetadata(t_Opm *self);
              static PyObject *t_Opm_getNbManeuvers(t_Opm *self);
              static PyObject *t_Opm_getPVCoordinates(t_Opm *self);
              static PyObject *t_Opm_hasManeuvers(t_Opm *self);
              static PyObject *t_Opm_get__data(t_Opm *self, void *data);
              static PyObject *t_Opm_get__date(t_Opm *self, void *data);
              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data);
              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data);
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data);
              static PyGetSetDef t_Opm__fields_[] = {
                DECLARE_GET_FIELD(t_Opm, data),
                DECLARE_GET_FIELD(t_Opm, date),
                DECLARE_GET_FIELD(t_Opm, maneuvers),
                DECLARE_GET_FIELD(t_Opm, metadata),
                DECLARE_GET_FIELD(t_Opm, nbManeuvers),
                DECLARE_GET_FIELD(t_Opm, pVCoordinates),
                DECLARE_GET_FIELD(t_Opm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Opm__methods_[] = {
                DECLARE_METHOD(t_Opm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Opm, generateCartesianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getManeuver, METH_O),
                DECLARE_METHOD(t_Opm, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getPVCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_Opm, hasManeuvers, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Opm)[] = {
                { Py_tp_methods, t_Opm__methods_ },
                { Py_tp_init, (void *) t_Opm_init_ },
                { Py_tp_getset, t_Opm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Opm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Opm, t_Opm, Opm);
              PyObject *t_Opm::wrap_Object(const Opm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Opm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Opm::install(PyObject *module)
              {
                installType(&PY_TYPE(Opm), &PY_TYPE_DEF(Opm), module, "Opm", 0);
              }

              void t_Opm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "class_", make_descriptor(Opm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "wrapfn_", make_descriptor(t_Opm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Opm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Opm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "ROOT", make_descriptor(j2p(*Opm::ROOT)));
              }

              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Opm::initializeClass, 1)))
                  return NULL;
                return t_Opm::wrap_Object(Opm(((t_Opm *) arg)->object.this$));
              }
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Opm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Opm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Opm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateCartesianOrbit());
                return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Opm_getData(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(result);
              }

              static PyObject *t_Opm_getDate(t_Opm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_Opm_getManeuvers(t_Opm *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_Opm_getMetadata(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(result);
              }

              static PyObject *t_Opm_getNbManeuvers(t_Opm *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Opm_getPVCoordinates(t_Opm *self)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }

              static PyObject *t_Opm_hasManeuvers(t_Opm *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Opm_get__data(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(value);
              }

              static PyObject *t_Opm_get__date(t_Opm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(value);
              }

              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
                OBJ_CALL(value = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonComparableMeasurement::class$ = NULL;
        jmethodID *PythonComparableMeasurement::mids$ = NULL;
        bool PythonComparableMeasurement::live$ = false;

        jclass PythonComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_compareTo_aa79741dc73b1207] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getObservedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonComparableMeasurement::PythonComparableMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonComparableMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonComparableMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonComparableMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self);
        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args);
        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data);
        static PyGetSetDef t_PythonComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonComparableMeasurement, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonComparableMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonComparableMeasurement)[] = {
          { Py_tp_methods, t_PythonComparableMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonComparableMeasurement_init_ },
          { Py_tp_getset, t_PythonComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonComparableMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonComparableMeasurement, t_PythonComparableMeasurement, PythonComparableMeasurement);

        void t_PythonComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonComparableMeasurement), &PY_TYPE_DEF(PythonComparableMeasurement), module, "PythonComparableMeasurement", 1);
        }

        void t_PythonComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "class_", make_descriptor(PythonComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "wrapfn_", make_descriptor(t_PythonComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonComparableMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonComparableMeasurement_compareTo0 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonComparableMeasurement_getDate1 },
            { "getObservedValue", "()[D", (void *) t_PythonComparableMeasurement_getObservedValue2 },
            { "pythonDecRef", "()V", (void *) t_PythonComparableMeasurement_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonComparableMeasurement::wrap_Object(PythonComparableMeasurement(((t_PythonComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonComparableMeasurement object((jobject) NULL);

          INT_CALL(object = PythonComparableMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args)
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

        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_435bbf4c27b04320] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Segment;)V");
              mids$[mid_init$_71ad1166b72158fd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;)V");
              mids$[mid_init$_5da06482a46416aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_39f3eaf75a0716fa] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/SubLine;Z)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_435bbf4c27b04320, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71ad1166b72158fd, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5da06482a46416aa, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_39f3eaf75a0716fa], a0.this$, a1));
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
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::IntervalsSet a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::oned::IntervalsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
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

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kZ", SubLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmClockCorrectionData::class$ = NULL;
              jmethodID *RtcmClockCorrectionData::mids$ = NULL;
              bool RtcmClockCorrectionData::live$ = false;

              jclass RtcmClockCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ac204103acb34678] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_b67ff9100e1cd031] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmClockCorrectionData::RtcmClockCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmClockCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ac204103acb34678]));
              }

              void RtcmClockCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_b67ff9100e1cd031], a0.this$);
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
              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self);
              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data);
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmClockCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmClockCorrectionData, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmClockCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmClockCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmClockCorrectionData)[] = {
                { Py_tp_methods, t_RtcmClockCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmClockCorrectionData_init_ },
                { Py_tp_getset, t_RtcmClockCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmClockCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmClockCorrectionData, t_RtcmClockCorrectionData, RtcmClockCorrectionData);

              void t_RtcmClockCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmClockCorrectionData), &PY_TYPE_DEF(RtcmClockCorrectionData), module, "RtcmClockCorrectionData", 0);
              }

              void t_RtcmClockCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "class_", make_descriptor(RtcmClockCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "wrapfn_", make_descriptor(t_RtcmClockCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmClockCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmClockCorrectionData::wrap_Object(RtcmClockCorrectionData(((t_RtcmClockCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmClockCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmClockCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmClockCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesRangeBuilder::class$ = NULL;
          jmethodID *InterSatellitesRangeBuilder::mids$ = NULL;
          bool InterSatellitesRangeBuilder::live$ = false;

          jclass InterSatellitesRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87c67e94c0f0ada9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZDD)V");
              mids$[mid_build_a30a461826347d0c] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/InterSatellitesRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesRangeBuilder::InterSatellitesRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jboolean a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_87c67e94c0f0ada9, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::InterSatellitesRange InterSatellitesRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::InterSatellitesRange(env->callObjectMethod(this$, mids$[mid_build_a30a461826347d0c], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRangeBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesRangeBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesRangeBuilder, t_InterSatellitesRangeBuilder, InterSatellitesRangeBuilder);
          PyObject *t_InterSatellitesRangeBuilder::wrap_Object(const InterSatellitesRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesRangeBuilder), &PY_TYPE_DEF(InterSatellitesRangeBuilder), module, "InterSatellitesRangeBuilder", 0);
          }

          void t_InterSatellitesRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "class_", make_descriptor(InterSatellitesRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "wrapfn_", make_descriptor(t_InterSatellitesRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesRangeBuilder::wrap_Object(InterSatellitesRangeBuilder(((t_InterSatellitesRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkZDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::InterSatellitesRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_InterSatellitesRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionLagrangeForm::class$ = NULL;
        jmethodID *PolynomialFunctionLagrangeForm::mids$ = NULL;
        bool PolynomialFunctionLagrangeForm::live$ = false;

        jclass PolynomialFunctionLagrangeForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_570ce0828f81a2c1] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_81770d1e77838f28] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getInterpolatingPoints_60c7040667a7dc5c] = env->getMethodID(cls, "getInterpolatingPoints", "()[D");
            mids$[mid_getInterpolatingValues_60c7040667a7dc5c] = env->getMethodID(cls, "getInterpolatingValues", "()[D");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_verifyInterpolationArray_2a23e9f4a2692a23] = env->getStaticMethodID(cls, "verifyInterpolationArray", "([D[DZ)Z");
            mids$[mid_computeCoefficients_0fa09c18fee449d5] = env->getMethodID(cls, "computeCoefficients", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionLagrangeForm::PolynomialFunctionLagrangeForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

        jint PolynomialFunctionLagrangeForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_570ce0828f81a2c1]);
        }

        jdouble PolynomialFunctionLagrangeForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_81770d1e77838f28], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_60c7040667a7dc5c]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingPoints() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingPoints_60c7040667a7dc5c]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingValues_60c7040667a7dc5c]));
        }

        jdouble PolynomialFunctionLagrangeForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        jboolean PolynomialFunctionLagrangeForm::verifyInterpolationArray(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_verifyInterpolationArray_2a23e9f4a2692a23], a0.this$, a1.this$, a2);
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
      namespace polynomials {
        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionLagrangeForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingPoints),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingValues),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionLagrangeForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingPoints, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingValues, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, value, METH_O),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, verifyInterpolationArray, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionLagrangeForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionLagrangeForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionLagrangeForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionLagrangeForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionLagrangeForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionLagrangeForm, t_PolynomialFunctionLagrangeForm, PolynomialFunctionLagrangeForm);

        void t_PolynomialFunctionLagrangeForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionLagrangeForm), &PY_TYPE_DEF(PolynomialFunctionLagrangeForm), module, "PolynomialFunctionLagrangeForm", 0);
        }

        void t_PolynomialFunctionLagrangeForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "class_", make_descriptor(PolynomialFunctionLagrangeForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "wrapfn_", make_descriptor(t_PolynomialFunctionLagrangeForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionLagrangeForm::wrap_Object(PolynomialFunctionLagrangeForm(((t_PolynomialFunctionLagrangeForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionLagrangeForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionLagrangeForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingPoints());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingValues());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jboolean result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::verifyInterpolationArray(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "verifyInterpolationArray", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingPoints());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingValues());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
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
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_7c39c5f4719b16a0] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_85703d13e302437e] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_6219f6b430651d68] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel PropagatorBuilder::buildLeastSquaresModel(const JArray< PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_0c183831cad84280], a0.this$));
        }

        PropagatorBuilder PropagatorBuilder::copy() const
        {
          return PropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_7c39c5f4719b16a0]));
        }

        ::org::orekit::frames::Frame PropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::time::AbsoluteDate PropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_85703d13e302437e]));
        }

        jdouble PropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::orbits::OrbitType PropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_bd51074bfd9d41da]));
        }

        ::org::orekit::orbits::PositionAngleType PropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_bd51074bfd9d41da]));
        }

        JArray< jdouble > PropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_60c7040667a7dc5c]));
        }

        void PropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_6219f6b430651d68], a0.this$);
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
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MaxSelector::class$ = NULL;
        jmethodID *MaxSelector::mids$ = NULL;
        bool MaxSelector::live$ = false;

        jclass MaxSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MaxSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_a6f97f104ac734f2] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MaxSelector;");
            mids$[mid_selectFirst_ff85a0d8ff097ee5] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MaxSelector MaxSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MaxSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_a6f97f104ac734f2]));
        }

        jboolean MaxSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_ff85a0d8ff097ee5], a0, a1);
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
        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args);
        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data);
        static PyGetSetDef t_MaxSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MaxSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MaxSelector__methods_[] = {
          DECLARE_METHOD(t_MaxSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MaxSelector)[] = {
          { Py_tp_methods, t_MaxSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MaxSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MaxSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MaxSelector, t_MaxSelector, MaxSelector);

        void t_MaxSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MaxSelector), &PY_TYPE_DEF(MaxSelector), module, "MaxSelector", 0);
        }

        void t_MaxSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "class_", make_descriptor(MaxSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "wrapfn_", make_descriptor(t_MaxSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MaxSelector::initializeClass, 1)))
            return NULL;
          return t_MaxSelector::wrap_Object(MaxSelector(((t_MaxSelector *) arg)->object.this$));
        }
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MaxSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type)
        {
          MaxSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MaxSelector::getInstance());
          return t_MaxSelector::wrap_Object(result);
        }

        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MaxSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data)
        {
          MaxSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MaxSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolverUtils::class$ = NULL;
        jmethodID *UnivariateSolverUtils::mids$ = NULL;
        bool UnivariateSolverUtils::live$ = false;

        jclass UnivariateSolverUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolverUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_bracket_7d07e834d1560d20] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)[D");
            mids$[mid_bracket_ae44ff21090a05a0] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_6eb0163ea54a62ee] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_7566829eb722c317] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDI)[D");
            mids$[mid_bracket_c193ecb21a9ce776] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDDDI)[D");
            mids$[mid_bracket_92a809184785c765] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_forceSide_f88463ece891564f] = env->getStaticMethodID(cls, "forceSide", "(ILorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_isBracketing_017290ba39975b30] = env->getStaticMethodID(cls, "isBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)Z");
            mids$[mid_isSequence_01c0c8b0c5f55ddf] = env->getStaticMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_midpoint_86ffecc08a63eff0] = env->getStaticMethodID(cls, "midpoint", "(DD)D");
            mids$[mid_solve_d5a404b7fd8792e0] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_3d7ade767bbea1e3] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_verifyBracketing_0f8fa28d44d7129e] = env->getStaticMethodID(cls, "verifyBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)V");
            mids$[mid_verifyInterval_8f2e782d5278b131] = env->getStaticMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_2c56b6dd4d4b1dec] = env->getStaticMethodID(cls, "verifySequence", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_7d07e834d1560d20], a0.this$, a1, a2, a3));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_ae44ff21090a05a0], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_6eb0163ea54a62ee], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_7566829eb722c317], a0.this$, a1, a2, a3, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_c193ecb21a9ce776], a0.this$, a1, a2, a3, a4, a5, a6));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_92a809184785c765], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
        }

        jdouble UnivariateSolverUtils::forceSide(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::hipparchus::analysis::solvers::AllowedSolution & a6)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_forceSide_f88463ece891564f], a0, a1.this$, a2.this$, a3, a4, a5, a6.this$);
        }

        jboolean UnivariateSolverUtils::isBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isBracketing_017290ba39975b30], a0.this$, a1, a2);
        }

        jboolean UnivariateSolverUtils::isSequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isSequence_01c0c8b0c5f55ddf], a0, a1, a2);
        }

        jdouble UnivariateSolverUtils::midpoint(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_midpoint_86ffecc08a63eff0], a0, a1);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_d5a404b7fd8792e0], a0.this$, a1, a2);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_3d7ade767bbea1e3], a0.this$, a1, a2, a3);
        }

        void UnivariateSolverUtils::verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyBracketing_0f8fa28d44d7129e], a0.this$, a1, a2);
        }

        void UnivariateSolverUtils::verifyInterval(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyInterval_8f2e782d5278b131], a0, a1);
        }

        void UnivariateSolverUtils::verifySequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifySequence_2c56b6dd4d4b1dec], a0, a1, a2);
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
        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_UnivariateSolverUtils__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolverUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, bracket, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, forceSide, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isSequence, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, midpoint, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, solve, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifySequence, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolverUtils)[] = {
          { Py_tp_methods, t_UnivariateSolverUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolverUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateSolverUtils, t_UnivariateSolverUtils, UnivariateSolverUtils);

        void t_UnivariateSolverUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolverUtils), &PY_TYPE_DEF(UnivariateSolverUtils), module, "UnivariateSolverUtils", 0);
        }

        void t_UnivariateSolverUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "class_", make_descriptor(UnivariateSolverUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "wrapfn_", make_descriptor(t_UnivariateSolverUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolverUtils::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolverUtils::wrap_Object(UnivariateSolverUtils(((t_UnivariateSolverUtils *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolverUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return result.wrap();
              }
            }
            break;
           case 5:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            break;
           case 7:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
              PyTypeObject **p5;
              jint a6;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jint a6;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError(type, "bracket", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::hipparchus::analysis::solvers::AllowedSolution a6((jobject) NULL);
          PyTypeObject **p6;
          jdouble result;

          if (!parseArgs(args, "IkKDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_, &a3, &a4, &a5, &a6, &p6, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::forceSide(a0, a1, a2, a3, a4, a5, a6));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "forceSide", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isBracketing(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isSequence(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isSequence", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::midpoint(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "midpoint", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "solve", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyBracketing(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyInterval(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyInterval", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifySequence(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifySequence", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *AbstractKalmanFilter::class$ = NULL;
        jmethodID *AbstractKalmanFilter::mids$ = NULL;
        bool AbstractKalmanFilter::live$ = false;

        jclass AbstractKalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/AbstractKalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrected_c93ddc26f3b3eef4] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_c93ddc26f3b3eef4] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_predict_982284b8d8a1f193] = env->getMethodID(cls, "predict", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_correct_45b900b87520adad] = env->getMethodID(cls, "correct", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeInnovationCovarianceMatrix_ef6b3f5b68ab82a9] = env->getMethodID(cls, "computeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_c93ddc26f3b3eef4]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_c93ddc26f3b3eef4]));
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
        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args);
        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data);
        static PyGetSetDef t_AbstractKalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, corrected),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, predicted),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanFilter__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanFilter)[] = {
          { Py_tp_methods, t_AbstractKalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanFilter, t_AbstractKalmanFilter, AbstractKalmanFilter);
        PyObject *t_AbstractKalmanFilter::wrap_Object(const AbstractKalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractKalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanFilter), &PY_TYPE_DEF(AbstractKalmanFilter), module, "AbstractKalmanFilter", 0);
        }

        void t_AbstractKalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "class_", make_descriptor(AbstractKalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "wrapfn_", make_descriptor(t_AbstractKalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanFilter::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanFilter::wrap_Object(AbstractKalmanFilter(((t_AbstractKalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
