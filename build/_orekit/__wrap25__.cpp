#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *BrouwerLyddanePropagatorBuilder::class$ = NULL;
        jmethodID *BrouwerLyddanePropagatorBuilder::mids$ = NULL;
        bool BrouwerLyddanePropagatorBuilder::live$ = false;

        jclass BrouwerLyddanePropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d8b5fe1f61da07bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_init$_6ae2b837dfc4df8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_80113f1d2f6fbb9e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_78c05949a4dc269b] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/BrouwerLyddanePropagator;");
            mids$[mid_copy_1cdb106a2927cf00] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, jdouble a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d8b5fe1f61da07bb, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, jdouble a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_6ae2b837dfc4df8d, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, const ::org::orekit::orbits::OrbitType & a8, const ::org::orekit::orbits::PositionAngleType & a9, jdouble a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_80113f1d2f6fbb9e, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8.this$, a9.this$, a10, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel BrouwerLyddanePropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::BrouwerLyddanePropagator BrouwerLyddanePropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::BrouwerLyddanePropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_78c05949a4dc269b], a0.this$));
        }

        BrouwerLyddanePropagatorBuilder BrouwerLyddanePropagatorBuilder::copy() const
        {
          return BrouwerLyddanePropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_1cdb106a2927cf00]));
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
        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_BrouwerLyddanePropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagatorBuilder)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagatorBuilder, t_BrouwerLyddanePropagatorBuilder, BrouwerLyddanePropagatorBuilder);

        void t_BrouwerLyddanePropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagatorBuilder), &PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder), module, "BrouwerLyddanePropagatorBuilder", 0);
        }

        void t_BrouwerLyddanePropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "class_", make_descriptor(BrouwerLyddanePropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagatorBuilder::wrap_Object(BrouwerLyddanePropagatorBuilder(((t_BrouwerLyddanePropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              ::org::orekit::orbits::OrbitType a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::orbits::PositionAngleType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDKKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::orbits::t_OrbitType::parameters_, &a9, &p9, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a10, &a11))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::t_BrouwerLyddanePropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          BrouwerLyddanePropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_BrouwerLyddanePropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphereGenerator::class$ = NULL;
          jmethodID *SphereGenerator::mids$ = NULL;
          bool SphereGenerator::live$ = false;

          jclass SphereGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphereGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_6deb4972134b40de] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphereGenerator::SphereGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphereGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_6deb4972134b40de], a0.this$));
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
          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg);

          static PyMethodDef t_SphereGenerator__methods_[] = {
            DECLARE_METHOD(t_SphereGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphereGenerator)[] = {
            { Py_tp_methods, t_SphereGenerator__methods_ },
            { Py_tp_init, (void *) t_SphereGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphereGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphereGenerator, t_SphereGenerator, SphereGenerator);

          void t_SphereGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(SphereGenerator), &PY_TYPE_DEF(SphereGenerator), module, "SphereGenerator", 0);
          }

          void t_SphereGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "class_", make_descriptor(SphereGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "wrapfn_", make_descriptor(t_SphereGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphereGenerator::initializeClass, 1)))
              return NULL;
            return t_SphereGenerator::wrap_Object(SphereGenerator(((t_SphereGenerator *) arg)->object.this$));
          }
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphereGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds)
          {
            SphereGenerator object((jobject) NULL);

            INT_CALL(object = SphereGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D), ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PositionAngleDetector::class$ = NULL;
        jmethodID *PositionAngleDetector::mids$ = NULL;
        bool PositionAngleDetector::live$ = false;

        jclass PositionAngleDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PositionAngleDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6f3b6a9a2f8f2118] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_025744b01c4aa6fc] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAngle_9981f74b2d109da6] = env->getMethodID(cls, "getAngle", "()D");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_2741a0a6bb9de47a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/PositionAngleDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PositionAngleDetector::PositionAngleDetector(const ::org::orekit::orbits::OrbitType & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6f3b6a9a2f8f2118, a0.this$, a1.this$, a2)) {}

        PositionAngleDetector::PositionAngleDetector(jdouble a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_025744b01c4aa6fc, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble PositionAngleDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble PositionAngleDetector::getAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAngle_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::OrbitType PositionAngleDetector::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::orbits::PositionAngleType PositionAngleDetector::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        void PositionAngleDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args);
        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data);
        static PyGetSetDef t_PositionAngleDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PositionAngleDetector, angle),
          DECLARE_GET_FIELD(t_PositionAngleDetector, orbitType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, positionAngleType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PositionAngleDetector__methods_[] = {
          DECLARE_METHOD(t_PositionAngleDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PositionAngleDetector)[] = {
          { Py_tp_methods, t_PositionAngleDetector__methods_ },
          { Py_tp_init, (void *) t_PositionAngleDetector_init_ },
          { Py_tp_getset, t_PositionAngleDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PositionAngleDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PositionAngleDetector, t_PositionAngleDetector, PositionAngleDetector);
        PyObject *t_PositionAngleDetector::wrap_Object(const PositionAngleDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PositionAngleDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PositionAngleDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PositionAngleDetector), &PY_TYPE_DEF(PositionAngleDetector), module, "PositionAngleDetector", 0);
        }

        void t_PositionAngleDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "class_", make_descriptor(PositionAngleDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "wrapfn_", make_descriptor(t_PositionAngleDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PositionAngleDetector::initializeClass, 1)))
            return NULL;
          return t_PositionAngleDetector::wrap_Object(PositionAngleDetector(((t_PositionAngleDetector *) arg)->object.this$));
        }
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PositionAngleDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::OrbitType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "KKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "DDKKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
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

        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_handleGeneratedMeasurement_ccec3dc40c67aef1] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGeneratedMeasurementSubscriber::PythonGeneratedMeasurementSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonGeneratedMeasurementSubscriber::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonGeneratedMeasurementSubscriber::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonGeneratedMeasurementSubscriber::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ButcherArrayProvider::class$ = NULL;
        jmethodID *ButcherArrayProvider::mids$ = NULL;
        bool ButcherArrayProvider::live$ = false;

        jclass ButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< jdouble > > ButcherArrayProvider::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > ButcherArrayProvider::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > ButcherArrayProvider::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data);
        static PyGetSetDef t_ButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_ButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_ButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ButcherArrayProvider)[] = {
          { Py_tp_methods, t_ButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ButcherArrayProvider, t_ButcherArrayProvider, ButcherArrayProvider);

        void t_ButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(ButcherArrayProvider), &PY_TYPE_DEF(ButcherArrayProvider), module, "ButcherArrayProvider", 0);
        }

        void t_ButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "class_", make_descriptor(ButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "wrapfn_", make_descriptor(t_ButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_ButcherArrayProvider::wrap_Object(ButcherArrayProvider(((t_ButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/StepEndEventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *StepEndEventState::class$ = NULL;
        jmethodID *StepEndEventState::mids$ = NULL;
        bool StepEndEventState::live$ = false;

        jclass StepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/StepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3dff193c3948a094] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
            mids$[mid_doEvent_85cb4cee6c2ee34d] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_a2d4078e6169b71f] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_9981f74b2d109da6] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_getHandler_33c35f2cadb708df] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEStepEndHandler;");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_setStepEnd_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setStepEnd", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepEndEventState::StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dff193c3948a094, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence StepEndEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_85cb4cee6c2ee34d], a0.this$));
        }

        jboolean StepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_a2d4078e6169b71f], a0.this$);
        }

        jdouble StepEndEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_9981f74b2d109da6]);
        }

        ::org::hipparchus::ode::events::ODEStepEndHandler StepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_33c35f2cadb708df]));
        }

        void StepEndEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
        }

        void StepEndEventState::setStepEnd(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_1ad26e8c8c0cd65b], a0);
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
        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args);
        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data);
        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data);
        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data);
        static PyGetSetDef t_StepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_StepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_StepEndEventState, handler),
          DECLARE_SET_FIELD(t_StepEndEventState, stepEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepEndEventState__methods_[] = {
          DECLARE_METHOD(t_StepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_StepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_StepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_StepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepEndEventState)[] = {
          { Py_tp_methods, t_StepEndEventState__methods_ },
          { Py_tp_init, (void *) t_StepEndEventState_init_ },
          { Py_tp_getset, t_StepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepEndEventState, t_StepEndEventState, StepEndEventState);

        void t_StepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(StepEndEventState), &PY_TYPE_DEF(StepEndEventState), module, "StepEndEventState", 0);
        }

        void t_StepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "class_", make_descriptor(StepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "wrapfn_", make_descriptor(t_StepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepEndEventState::initializeClass, 1)))
            return NULL;
          return t_StepEndEventState::wrap_Object(StepEndEventState(((t_StepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);
          StepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
          {
            INT_CALL(object = StepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(result);
        }

        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args)
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

        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(value);
        }

        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser$RowConverter::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser$RowConverter::mids$ = NULL;
      bool SimpleTimeStampedTableParser$RowConverter::live$ = false;

      jclass SimpleTimeStampedTableParser$RowConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser$RowConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convert_1472636f7f49bc1e] = env->getMethodID(cls, "convert", "([D)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped SimpleTimeStampedTableParser$RowConverter::convert(const JArray< jdouble > & a0) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_convert_1472636f7f49bc1e], a0.this$));
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
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser$RowConverter__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser$RowConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser$RowConverter__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, convert, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser$RowConverter)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser$RowConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SimpleTimeStampedTableParser$RowConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser$RowConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser$RowConverter, t_SimpleTimeStampedTableParser$RowConverter, SimpleTimeStampedTableParser$RowConverter);
      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(const SimpleTimeStampedTableParser$RowConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser$RowConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser$RowConverter), &PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter), module, "SimpleTimeStampedTableParser$RowConverter", 0);
      }

      void t_SimpleTimeStampedTableParser$RowConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "class_", make_descriptor(SimpleTimeStampedTableParser$RowConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(SimpleTimeStampedTableParser$RowConverter(((t_SimpleTimeStampedTableParser$RowConverter *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::orekit::time::TimeStamped result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.convert(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convert", arg);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$SumAndResidual::class$ = NULL;
      jmethodID *MathUtils$SumAndResidual::mids$ = NULL;
      bool MathUtils$SumAndResidual::live$ = false;

      jclass MathUtils$SumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$SumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_9981f74b2d109da6] = env->getMethodID(cls, "getResidual", "()D");
          mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathUtils$SumAndResidual::getResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getResidual_9981f74b2d109da6]);
      }

      jdouble MathUtils$SumAndResidual::getSum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
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
      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data);
      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$SumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, sum),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$SumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$SumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$SumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$SumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$SumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$SumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$SumAndResidual, t_MathUtils$SumAndResidual, MathUtils$SumAndResidual);

      void t_MathUtils$SumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$SumAndResidual), &PY_TYPE_DEF(MathUtils$SumAndResidual), module, "MathUtils$SumAndResidual", 0);
      }

      void t_MathUtils$SumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "class_", make_descriptor(MathUtils$SumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$SumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$SumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$SumAndResidual::wrap_Object(MathUtils$SumAndResidual(((t_MathUtils$SumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$SumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSum());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
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
          mids$[mid_init$_56fd5115385e7d35] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/BaseMultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getOptima_2ab86268ef7a6631] = env->getMethodID(cls, "getOptima", "()[Ljava/lang/Object;");
          mids$[mid_optimize_7c1cfcae8b9ddcfc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_704a5bee58538972] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_store_83ee235bb1e64e94] = env->getMethodID(cls, "store", "(Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BaseMultiStartMultivariateOptimizer::BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_56fd5115385e7d35, a0.this$, a1, a2.this$)) {}

      jint BaseMultiStartMultivariateOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      JArray< ::java::lang::Object > BaseMultiStartMultivariateOptimizer::getOptima() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getOptima_2ab86268ef7a6631]));
      }

      ::java::lang::Object BaseMultiStartMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_7c1cfcae8b9ddcfc], a0.this$));
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
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *StateMapper::class$ = NULL;
        jmethodID *StateMapper::mids$ = NULL;
        bool StateMapper::live$ = false;

        jclass StateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/StateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapArrayToState_b723a334e6cd3f92] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapArrayToState_7629d8431d8fb922] = env->getMethodID(cls, "mapArrayToState", "(D[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapDateToDouble_209f08246d708042] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_mapDoubleToDate_d2854c25a21df51f] = env->getMethodID(cls, "mapDoubleToDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapDoubleToDate_4b32f25aab0493dc] = env->getMethodID(cls, "mapDoubleToDate", "(DLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapStateToArray_c528401cf6a8f557] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider StateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
        }

        ::org::orekit::frames::Frame StateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        jdouble StateMapper::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::OrbitType StateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::orbits::PositionAngleType StateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_b723a334e6cd3f92], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_7629d8431d8fb922], a0, a1.this$, a2.this$, a3.this$));
        }

        jdouble StateMapper::mapDateToDouble(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mapDateToDouble_209f08246d708042], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_d2854c25a21df51f], a0));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_4b32f25aab0493dc], a0, a1.this$));
        }

        void StateMapper::mapStateToArray(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_c528401cf6a8f557], a0.this$, a1.this$, a2.this$);
        }

        void StateMapper::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
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
        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self);
        static PyObject *t_StateMapper_getFrame(t_StateMapper *self);
        static PyObject *t_StateMapper_getMu(t_StateMapper *self);
        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self);
        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self);
        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self);
        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data);
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data);
        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data);
        static PyGetSetDef t_StateMapper__fields_[] = {
          DECLARE_GETSET_FIELD(t_StateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_StateMapper, frame),
          DECLARE_GET_FIELD(t_StateMapper, mu),
          DECLARE_GET_FIELD(t_StateMapper, orbitType),
          DECLARE_GET_FIELD(t_StateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_StateMapper, referenceDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StateMapper__methods_[] = {
          DECLARE_METHOD(t_StateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_StateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateMapper)[] = {
          { Py_tp_methods, t_StateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateMapper, t_StateMapper, StateMapper);

        void t_StateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(StateMapper), &PY_TYPE_DEF(StateMapper), module, "StateMapper", 0);
        }

        void t_StateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "class_", make_descriptor(StateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "wrapfn_", make_descriptor(t_StateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateMapper::initializeClass, 1)))
            return NULL;
          return t_StateMapper::wrap_Object(StateMapper(((t_StateMapper *) arg)->object.this$));
        }
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getFrame(t_StateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getMu(t_StateMapper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[D[DK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "D[D[DK", ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg)
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

        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data)
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

        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f46fa5f6c40a5c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Line;)V");
              mids$[mid_init$_7f7842afd4d898dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_distance_fa70b1ee85089725] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_getEnd_0490d0574aafb07c] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getLength_9981f74b2d109da6] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getLine_72d7a4f683ad4a34] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getStart_0490d0574aafb07c] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::geometry::euclidean::twod::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f46fa5f6c40a5c85, a0.this$, a1.this$, a2.this$)) {}

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f7842afd4d898dc, a0.this$, a1.this$, a2)) {}

          jdouble Segment::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_fa70b1ee85089725], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEnd_0490d0574aafb07c]));
          }

          jdouble Segment::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Line(env->callObjectMethod(this$, mids$[mid_getLine_72d7a4f683ad4a34]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getStart_0490d0574aafb07c]));
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLength(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__length(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, length),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, distance, METH_O),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Line a2((jobject) NULL);
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Line::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
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

          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLength(t_Segment *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__length(t_Segment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorBuilder::class$ = NULL;
        jmethodID *PythonAbstractPropagatorBuilder::mids$ = NULL;
        bool PythonAbstractPropagatorBuilder::live$ = false;

        jclass PythonAbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4cf869ebdedb5ece] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DZ)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_3ae868590960a3fb] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorBuilder::PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, jboolean a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_4cf869ebdedb5ece, a0.this$, a1.this$, a2, a3)) {}

        void PythonAbstractPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractPropagatorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self);
        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorBuilder, t_PythonAbstractPropagatorBuilder, PythonAbstractPropagatorBuilder);

        void t_PythonAbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorBuilder), &PY_TYPE_DEF(PythonAbstractPropagatorBuilder), module, "PythonAbstractPropagatorBuilder", 1);
        }

        void t_PythonAbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "class_", make_descriptor(PythonAbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonAbstractPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonAbstractPropagatorBuilder_copy2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorBuilder_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorBuilder::wrap_Object(PythonAbstractPropagatorBuilder(((t_PythonAbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jboolean a3;
          PythonAbstractPropagatorBuilder object((jobject) NULL);

          if (!parseArgs(args, "kKDZ", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data)
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
#include "org/orekit/utils/FieldLegendrePolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldLegendrePolynomials::class$ = NULL;
      jmethodID *FieldLegendrePolynomials::mids$ = NULL;
      bool FieldLegendrePolynomials::live$ = false;

      jclass FieldLegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldLegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_08bd359f79f8d5e2] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getPnm_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getPnm", "(II)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLegendrePolynomials::FieldLegendrePolynomials(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08bd359f79f8d5e2, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldLegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPnm_89a7d1b6c5e4fe60], a0, a1));
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
      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args);
      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args);
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data);
      static PyGetSetDef t_FieldLegendrePolynomials__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLegendrePolynomials, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_FieldLegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLegendrePolynomials)[] = {
        { Py_tp_methods, t_FieldLegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_FieldLegendrePolynomials_init_ },
        { Py_tp_getset, t_FieldLegendrePolynomials__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLegendrePolynomials, t_FieldLegendrePolynomials, FieldLegendrePolynomials);
      PyObject *t_FieldLegendrePolynomials::wrap_Object(const FieldLegendrePolynomials& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLegendrePolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLegendrePolynomials), &PY_TYPE_DEF(FieldLegendrePolynomials), module, "FieldLegendrePolynomials", 0);
      }

      void t_FieldLegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "class_", make_descriptor(FieldLegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "wrapfn_", make_descriptor(t_FieldLegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_FieldLegendrePolynomials::wrap_Object(FieldLegendrePolynomials(((t_FieldLegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldLegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldLegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator::mids$ = NULL;
      bool AbstractFieldTimeInterpolator::live$ = false;
      jdouble AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_35f01709a876513a] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/FieldTimeInterpolator;I)V");
          mids$[mid_getCentralDate_b2f7fe9d83f790e1] = env->getStaticMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/ImmutableFieldTimeStampedCache;D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_f4186cd94813d116] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_ecda3df535f73158] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_6a638f4b2a02f57a] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_c7bd7093c656df75] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/FieldTimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_79346064d4531e41] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldTimeInterpolator::AbstractFieldTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      void AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_35f01709a876513a], a0.this$, a1);
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator::getCentralDate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::ImmutableFieldTimeStampedCache & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCentralDate_b2f7fe9d83f790e1], a0.this$, a1.this$, a2));
      }

      jdouble AbstractFieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_9981f74b2d109da6]);
      }

      jint AbstractFieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_d6ab429752e7c267]);
      }

      ::java::util::List AbstractFieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_f4186cd94813d116], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ecda3df535f73158], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getCentralDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getCentralDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator, t_AbstractFieldTimeInterpolator, AbstractFieldTimeInterpolator);
      PyObject *t_AbstractFieldTimeInterpolator::wrap_Object(const AbstractFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator), &PY_TYPE_DEF(AbstractFieldTimeInterpolator), module, "AbstractFieldTimeInterpolator", 0);
      }

      void t_AbstractFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "class_", make_descriptor(AbstractFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractFieldTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator::wrap_Object(AbstractFieldTimeInterpolator(((t_AbstractFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractFieldTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractFieldTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldTimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getCentralDate(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ImmutableFieldTimeStampedCache a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::ImmutableFieldTimeStampedCache::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbstractFieldTimeInterpolator::getCentralDate(a0, a1, a2));
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCentralDate", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherIntegrator::class$ = NULL;
        jmethodID *LutherIntegrator::mids$ = NULL;
        bool LutherIntegrator::live$ = false;

        jclass LutherIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_707d0876d46e8c09] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegrator::LutherIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > LutherIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > LutherIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > LutherIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data);
        static PyGetSetDef t_LutherIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherIntegrator, a),
          DECLARE_GET_FIELD(t_LutherIntegrator, b),
          DECLARE_GET_FIELD(t_LutherIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegrator)[] = {
          { Py_tp_methods, t_LutherIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherIntegrator_init_ },
          { Py_tp_getset, t_LutherIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherIntegrator, t_LutherIntegrator, LutherIntegrator);

        void t_LutherIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegrator), &PY_TYPE_DEF(LutherIntegrator), module, "LutherIntegrator", 0);
        }

        void t_LutherIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "class_", make_descriptor(LutherIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "wrapfn_", make_descriptor(t_LutherIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherIntegrator::wrap_Object(LutherIntegrator(((t_LutherIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSConstants::class$ = NULL;
            jmethodID *GNSSConstants::mids$ = NULL;
            bool GNSSConstants::live$ = false;
            jdouble GNSSConstants::BEIDOU_AV = (jdouble) 0;
            jdouble GNSSConstants::BEIDOU_MU = (jdouble) 0;
            jint GNSSConstants::BEIDOU_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GALILEO_AV = (jdouble) 0;
            jdouble GNSSConstants::GALILEO_MU = (jdouble) 0;
            jint GNSSConstants::GALILEO_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GLONASS_MU = (jdouble) 0;
            jdouble GNSSConstants::GLONASS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_WEEK_IN_SECONDS = (jdouble) 0;
            jdouble GNSSConstants::GPS_AV = (jdouble) 0;
            jdouble GNSSConstants::GPS_MU = (jdouble) 0;
            jint GNSSConstants::GPS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::IRNSS_AV = (jdouble) 0;
            jdouble GNSSConstants::IRNSS_MU = (jdouble) 0;
            jint GNSSConstants::IRNSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::QZSS_AV = (jdouble) 0;
            jdouble GNSSConstants::QZSS_MU = (jdouble) 0;
            jint GNSSConstants::QZSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::SBAS_MU = (jdouble) 0;

            jclass GNSSConstants::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSConstants");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BEIDOU_AV = env->getStaticDoubleField(cls, "BEIDOU_AV");
                BEIDOU_MU = env->getStaticDoubleField(cls, "BEIDOU_MU");
                BEIDOU_WEEK_NB = env->getStaticIntField(cls, "BEIDOU_WEEK_NB");
                GALILEO_AV = env->getStaticDoubleField(cls, "GALILEO_AV");
                GALILEO_MU = env->getStaticDoubleField(cls, "GALILEO_MU");
                GALILEO_WEEK_NB = env->getStaticIntField(cls, "GALILEO_WEEK_NB");
                GLONASS_MU = env->getStaticDoubleField(cls, "GLONASS_MU");
                GLONASS_PI = env->getStaticDoubleField(cls, "GLONASS_PI");
                GNSS_PI = env->getStaticDoubleField(cls, "GNSS_PI");
                GNSS_WEEK_IN_SECONDS = env->getStaticDoubleField(cls, "GNSS_WEEK_IN_SECONDS");
                GPS_AV = env->getStaticDoubleField(cls, "GPS_AV");
                GPS_MU = env->getStaticDoubleField(cls, "GPS_MU");
                GPS_WEEK_NB = env->getStaticIntField(cls, "GPS_WEEK_NB");
                IRNSS_AV = env->getStaticDoubleField(cls, "IRNSS_AV");
                IRNSS_MU = env->getStaticDoubleField(cls, "IRNSS_MU");
                IRNSS_WEEK_NB = env->getStaticIntField(cls, "IRNSS_WEEK_NB");
                QZSS_AV = env->getStaticDoubleField(cls, "QZSS_AV");
                QZSS_MU = env->getStaticDoubleField(cls, "QZSS_MU");
                QZSS_WEEK_NB = env->getStaticIntField(cls, "QZSS_WEEK_NB");
                SBAS_MU = env->getStaticDoubleField(cls, "SBAS_MU");
                live$ = true;
              }
              return (jclass) class$->this$;
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
            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_GNSSConstants__methods_[] = {
              DECLARE_METHOD(t_GNSSConstants, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSConstants, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSConstants)[] = {
              { Py_tp_methods, t_GNSSConstants__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSConstants)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GNSSConstants, t_GNSSConstants, GNSSConstants);

            void t_GNSSConstants::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSConstants), &PY_TYPE_DEF(GNSSConstants), module, "GNSSConstants", 0);
            }

            void t_GNSSConstants::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "class_", make_descriptor(GNSSConstants::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "wrapfn_", make_descriptor(t_GNSSConstants::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "boxfn_", make_descriptor(boxObject));
              env->getClass(GNSSConstants::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_AV", make_descriptor(GNSSConstants::BEIDOU_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_MU", make_descriptor(GNSSConstants::BEIDOU_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_WEEK_NB", make_descriptor(GNSSConstants::BEIDOU_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_AV", make_descriptor(GNSSConstants::GALILEO_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_MU", make_descriptor(GNSSConstants::GALILEO_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_WEEK_NB", make_descriptor(GNSSConstants::GALILEO_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_MU", make_descriptor(GNSSConstants::GLONASS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_PI", make_descriptor(GNSSConstants::GLONASS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_PI", make_descriptor(GNSSConstants::GNSS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_WEEK_IN_SECONDS", make_descriptor(GNSSConstants::GNSS_WEEK_IN_SECONDS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_AV", make_descriptor(GNSSConstants::GPS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_MU", make_descriptor(GNSSConstants::GPS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_WEEK_NB", make_descriptor(GNSSConstants::GPS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_AV", make_descriptor(GNSSConstants::IRNSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_MU", make_descriptor(GNSSConstants::IRNSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_WEEK_NB", make_descriptor(GNSSConstants::IRNSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_AV", make_descriptor(GNSSConstants::QZSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_MU", make_descriptor(GNSSConstants::QZSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_WEEK_NB", make_descriptor(GNSSConstants::QZSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "SBAS_MU", make_descriptor(GNSSConstants::SBAS_MU));
            }

            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSConstants::initializeClass, 1)))
                return NULL;
              return t_GNSSConstants::wrap_Object(GNSSConstants(((t_GNSSConstants *) arg)->object.this$));
            }
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSConstants::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader$Parser::mids$ = NULL;
      bool UTCTAIOffsetsLoader$Parser::live$ = false;

      jclass UTCTAIOffsetsLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_cf69cc549132f899], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIOffsetsLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader$Parser, t_UTCTAIOffsetsLoader$Parser, UTCTAIOffsetsLoader$Parser);

      void t_UTCTAIOffsetsLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader$Parser), &PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser), module, "UTCTAIOffsetsLoader$Parser", 0);
      }

      void t_UTCTAIOffsetsLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "class_", make_descriptor(UTCTAIOffsetsLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader$Parser::wrap_Object(UTCTAIOffsetsLoader$Parser(((t_UTCTAIOffsetsLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acosh::class$ = NULL;
        jmethodID *Acosh::mids$ = NULL;
        bool Acosh::live$ = false;

        jclass Acosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acosh::Acosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Acosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args);

        static PyMethodDef t_Acosh__methods_[] = {
          DECLARE_METHOD(t_Acosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acosh)[] = {
          { Py_tp_methods, t_Acosh__methods_ },
          { Py_tp_init, (void *) t_Acosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acosh, t_Acosh, Acosh);

        void t_Acosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Acosh), &PY_TYPE_DEF(Acosh), module, "Acosh", 0);
        }

        void t_Acosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "class_", make_descriptor(Acosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "wrapfn_", make_descriptor(t_Acosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acosh::initializeClass, 1)))
            return NULL;
          return t_Acosh::wrap_Object(Acosh(((t_Acosh *) arg)->object.this$));
        }
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds)
        {
          Acosh object((jobject) NULL);

          INT_CALL(object = Acosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSatelliteEphemeris::class$ = NULL;
              jmethodID *OemSatelliteEphemeris::mids$ = NULL;
              bool OemSatelliteEphemeris::live$ = false;

              jclass OemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_efa13fade9859f0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSatelliteEphemeris::OemSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efa13fade9859f0d, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              jdouble OemSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
              }

              ::java::util::List OemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OemSatelliteEphemeris, t_OemSatelliteEphemeris, OemSatelliteEphemeris);

              void t_OemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSatelliteEphemeris), &PY_TYPE_DEF(OemSatelliteEphemeris), module, "OemSatelliteEphemeris", 0);
              }

              void t_OemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "class_", make_descriptor(OemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "wrapfn_", make_descriptor(t_OemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OemSatelliteEphemeris::wrap_Object(OemSatelliteEphemeris(((t_OemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OemSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment));
              }

              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonTLEPropagator::class$ = NULL;
          jmethodID *PythonTLEPropagator::mids$ = NULL;
          bool PythonTLEPropagator::live$ = false;

          jclass PythonTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_40bdc63bf602b2a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_877f7a4f81da784a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_sxpInitialize_ff7cb6c242604316] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_40bdc63bf602b2a8, a0.this$, a1.this$, a2)) {}

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_877f7a4f81da784a, a0.this$, a1.this$, a2, a3.this$)) {}

          void PythonTLEPropagator::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonTLEPropagator::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonTLEPropagator::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self);
          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args);
          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data);
          static PyGetSetDef t_PythonTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTLEPropagator, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_PythonTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTLEPropagator, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTLEPropagator)[] = {
            { Py_tp_methods, t_PythonTLEPropagator__methods_ },
            { Py_tp_init, (void *) t_PythonTLEPropagator_init_ },
            { Py_tp_getset, t_PythonTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(PythonTLEPropagator, t_PythonTLEPropagator, PythonTLEPropagator);

          void t_PythonTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTLEPropagator), &PY_TYPE_DEF(PythonTLEPropagator), module, "PythonTLEPropagator", 1);
          }

          void t_PythonTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "class_", make_descriptor(PythonTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "wrapfn_", make_descriptor(t_PythonTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTLEPropagator::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonTLEPropagator_pythonDecRef0 },
              { "sxpInitialize", "()V", (void *) t_PythonTLEPropagator_sxpInitialize1 },
              { "sxpPropagate", "(D)V", (void *) t_PythonTLEPropagator_sxpPropagate2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_PythonTLEPropagator::wrap_Object(PythonTLEPropagator(((t_PythonTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args)
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

          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpInitialize", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpPropagate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Skewness::class$ = NULL;
          jmethodID *Skewness::mids$ = NULL;
          bool Skewness::live$ = false;

          jclass Skewness::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Skewness");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_0334ba61b9e7f8eb] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Skewness;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Skewness::Skewness() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Skewness::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Skewness Skewness::copy() const
          {
            return Skewness(env->callObjectMethod(this$, mids$[mid_copy_0334ba61b9e7f8eb]));
          }

          jdouble Skewness::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong Skewness::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Skewness::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Skewness::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
        namespace moment {
          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data);
          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data);
          static PyGetSetDef t_Skewness__fields_[] = {
            DECLARE_GET_FIELD(t_Skewness, n),
            DECLARE_GET_FIELD(t_Skewness, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Skewness__methods_[] = {
            DECLARE_METHOD(t_Skewness, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, clear, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, copy, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getN, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Skewness)[] = {
            { Py_tp_methods, t_Skewness__methods_ },
            { Py_tp_init, (void *) t_Skewness_init_ },
            { Py_tp_getset, t_Skewness__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Skewness)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Skewness, t_Skewness, Skewness);

          void t_Skewness::install(PyObject *module)
          {
            installType(&PY_TYPE(Skewness), &PY_TYPE_DEF(Skewness), module, "Skewness", 0);
          }

          void t_Skewness::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "class_", make_descriptor(Skewness::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "wrapfn_", make_descriptor(t_Skewness::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Skewness::initializeClass, 1)))
              return NULL;
            return t_Skewness::wrap_Object(Skewness(((t_Skewness *) arg)->object.this$));
          }
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Skewness::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds)
          {
            Skewness object((jobject) NULL);

            INT_CALL(object = Skewness());
            self->object = object;

            return 0;
          }

          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args)
          {
            Skewness result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Skewness::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args)
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

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data)
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
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MendesPavlisModel::class$ = NULL;
          jmethodID *MendesPavlisModel::mids$ = NULL;
          bool MendesPavlisModel::live$ = false;

          jclass MendesPavlisModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MendesPavlisModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_computeZenithDelay_cf38abfd6de73cb1] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_2a8a1978d107f938] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_d372e21d3f28e181] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MendesPavlisModel;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MendesPavlisModel::MendesPavlisModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

          JArray< jdouble > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_cf38abfd6de73cb1], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_2a8a1978d107f938], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List MendesPavlisModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          MendesPavlisModel MendesPavlisModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MendesPavlisModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_d372e21d3f28e181], a0));
          }

          JArray< jdouble > MendesPavlisModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement MendesPavlisModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble MendesPavlisModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self);
          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data);
          static PyGetSetDef t_MendesPavlisModel__fields_[] = {
            DECLARE_GET_FIELD(t_MendesPavlisModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MendesPavlisModel__methods_[] = {
            DECLARE_METHOD(t_MendesPavlisModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MendesPavlisModel)[] = {
            { Py_tp_methods, t_MendesPavlisModel__methods_ },
            { Py_tp_init, (void *) t_MendesPavlisModel_init_ },
            { Py_tp_getset, t_MendesPavlisModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MendesPavlisModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MendesPavlisModel, t_MendesPavlisModel, MendesPavlisModel);

          void t_MendesPavlisModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MendesPavlisModel), &PY_TYPE_DEF(MendesPavlisModel), module, "MendesPavlisModel", 0);
          }

          void t_MendesPavlisModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "class_", make_descriptor(MendesPavlisModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "wrapfn_", make_descriptor(t_MendesPavlisModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MendesPavlisModel::initializeClass, 1)))
              return NULL;
            return t_MendesPavlisModel::wrap_Object(MendesPavlisModel(((t_MendesPavlisModel *) arg)->object.this$));
          }
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MendesPavlisModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MendesPavlisModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MendesPavlisModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MendesPavlisModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MendesPavlisModel::getStandardModel(a0));
              return t_MendesPavlisModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *MaxGapInterpolationGrid::class$ = NULL;
            jmethodID *MaxGapInterpolationGrid::mids$ = NULL;
            bool MaxGapInterpolationGrid::live$ = false;

            jclass MaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getGridPoints_4c8160a53aa8811b] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MaxGapInterpolationGrid::MaxGapInterpolationGrid(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

            JArray< jdouble > MaxGapInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4c8160a53aa8811b], a0, a1));
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
            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_MaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_MaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_MaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_MaxGapInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MaxGapInterpolationGrid, t_MaxGapInterpolationGrid, MaxGapInterpolationGrid);

            void t_MaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(MaxGapInterpolationGrid), &PY_TYPE_DEF(MaxGapInterpolationGrid), module, "MaxGapInterpolationGrid", 0);
            }

            void t_MaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "class_", make_descriptor(MaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_MaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_MaxGapInterpolationGrid::wrap_Object(MaxGapInterpolationGrid(((t_MaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              MaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MaxGapInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *OrbitCorrection::class$ = NULL;
            jmethodID *OrbitCorrection::mids$ = NULL;
            bool OrbitCorrection::live$ = false;

            jclass OrbitCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/OrbitCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_af295e83e836228f] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
                mids$[mid_getDeltaOrbitAlongTrack_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaOrbitAlongTrack", "()D");
                mids$[mid_getDeltaOrbitCrossTrack_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaOrbitCrossTrack", "()D");
                mids$[mid_getDeltaOrbitRadial_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaOrbitRadial", "()D");
                mids$[mid_getDotOrbitDeltaAlongTrack_9981f74b2d109da6] = env->getMethodID(cls, "getDotOrbitDeltaAlongTrack", "()D");
                mids$[mid_getDotOrbitDeltaCrossTrack_9981f74b2d109da6] = env->getMethodID(cls, "getDotOrbitDeltaCrossTrack", "()D");
                mids$[mid_getDotOrbitDeltaRadial_9981f74b2d109da6] = env->getMethodID(cls, "getDotOrbitDeltaRadial", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OrbitCorrection::OrbitCorrection(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_af295e83e836228f, a0, a1, a2, a3, a4, a5)) {}

            jdouble OrbitCorrection::getDeltaOrbitAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitAlongTrack_9981f74b2d109da6]);
            }

            jdouble OrbitCorrection::getDeltaOrbitCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitCrossTrack_9981f74b2d109da6]);
            }

            jdouble OrbitCorrection::getDeltaOrbitRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitRadial_9981f74b2d109da6]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaAlongTrack_9981f74b2d109da6]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaCrossTrack_9981f74b2d109da6]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaRadial_9981f74b2d109da6]);
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
          namespace common {
            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data);
            static PyGetSetDef t_OrbitCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitRadial),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaRadial),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OrbitCorrection__methods_[] = {
              DECLARE_METHOD(t_OrbitCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitRadial, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaRadial, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OrbitCorrection)[] = {
              { Py_tp_methods, t_OrbitCorrection__methods_ },
              { Py_tp_init, (void *) t_OrbitCorrection_init_ },
              { Py_tp_getset, t_OrbitCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OrbitCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(OrbitCorrection, t_OrbitCorrection, OrbitCorrection);

            void t_OrbitCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(OrbitCorrection), &PY_TYPE_DEF(OrbitCorrection), module, "OrbitCorrection", 0);
            }

            void t_OrbitCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "class_", make_descriptor(OrbitCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "wrapfn_", make_descriptor(t_OrbitCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OrbitCorrection::initializeClass, 1)))
                return NULL;
              return t_OrbitCorrection::wrap_Object(OrbitCorrection(((t_OrbitCorrection *) arg)->object.this$));
            }
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OrbitCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              OrbitCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = OrbitCorrection(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaRadial());
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
            mids$[mid_firstIncluded_eee3de00fe971136] = env->getMethodID(cls, "firstIncluded", "()Z");
            mids$[mid_lastIncluded_eee3de00fe971136] = env->getMethodID(cls, "lastIncluded", "()Z");
            mids$[mid_valueOf_d7e678bf6783ca22] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");
            mids$[mid_values_4e5d829f44944550] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");

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
          return env->callBooleanMethod(this$, mids$[mid_firstIncluded_eee3de00fe971136]);
        }

        jboolean StepNormalizerBounds::lastIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_lastIncluded_eee3de00fe971136]);
        }

        StepNormalizerBounds StepNormalizerBounds::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerBounds(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d7e678bf6783ca22], a0.this$));
        }

        JArray< StepNormalizerBounds > StepNormalizerBounds::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerBounds >(env->callStaticObjectMethod(cls, mids$[mid_values_4e5d829f44944550]));
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
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultRealMatrixPreservingVisitor::live$ = false;

      jclass DefaultRealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_e98d7b3e971b6087] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixPreservingVisitor::DefaultRealMatrixPreservingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      jdouble DefaultRealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void DefaultRealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      void DefaultRealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_e98d7b3e971b6087], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixPreservingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixPreservingVisitor, t_DefaultRealMatrixPreservingVisitor, DefaultRealMatrixPreservingVisitor);

      void t_DefaultRealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultRealMatrixPreservingVisitor), module, "DefaultRealMatrixPreservingVisitor", 0);
      }

      void t_DefaultRealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "class_", make_descriptor(DefaultRealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixPreservingVisitor::wrap_Object(DefaultRealMatrixPreservingVisitor(((t_DefaultRealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixPreservingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixPreservingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDoubleHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedDoubleHermiteInterpolator::mids$ = NULL;
      bool TimeStampedDoubleHermiteInterpolator::live$ = false;

      jclass TimeStampedDoubleHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDoubleHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_314de1f0ffc0db99] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedDouble;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedDoubleHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDoubleHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDoubleHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDoubleHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedDoubleHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDoubleHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedDoubleHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDoubleHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedDoubleHermiteInterpolator, t_TimeStampedDoubleHermiteInterpolator, TimeStampedDoubleHermiteInterpolator);
      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_Object(const TimeStampedDoubleHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedDoubleHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDoubleHermiteInterpolator), &PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator), module, "TimeStampedDoubleHermiteInterpolator", 0);
      }

      void t_TimeStampedDoubleHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "class_", make_descriptor(TimeStampedDoubleHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedDoubleHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDoubleHermiteInterpolator::wrap_Object(TimeStampedDoubleHermiteInterpolator(((t_TimeStampedDoubleHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedDoubleHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
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
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TilesCache::class$ = NULL;
        jmethodID *TilesCache::mids$ = NULL;
        bool TilesCache::live$ = false;

        jclass TilesCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TilesCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c14b32994c471389] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileFactory;Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getTile_de8760a8a4fbd57b] = env->getMethodID(cls, "getTile", "(DD)Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TilesCache::TilesCache(const ::org::orekit::rugged::raster::TileFactory & a0, const ::org::orekit::rugged::raster::TileUpdater & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c14b32994c471389, a0.this$, a1.this$, a2)) {}

        ::org::orekit::rugged::raster::Tile TilesCache::getTile(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_getTile_de8760a8a4fbd57b], a0, a1));
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
        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args);
        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args);
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data);
        static PyGetSetDef t_TilesCache__fields_[] = {
          DECLARE_GET_FIELD(t_TilesCache, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TilesCache__methods_[] = {
          DECLARE_METHOD(t_TilesCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, of_, METH_VARARGS),
          DECLARE_METHOD(t_TilesCache, getTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TilesCache)[] = {
          { Py_tp_methods, t_TilesCache__methods_ },
          { Py_tp_init, (void *) t_TilesCache_init_ },
          { Py_tp_getset, t_TilesCache__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TilesCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TilesCache, t_TilesCache, TilesCache);
        PyObject *t_TilesCache::wrap_Object(const TilesCache& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TilesCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TilesCache::install(PyObject *module)
        {
          installType(&PY_TYPE(TilesCache), &PY_TYPE_DEF(TilesCache), module, "TilesCache", 0);
        }

        void t_TilesCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "class_", make_descriptor(TilesCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "wrapfn_", make_descriptor(t_TilesCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TilesCache::initializeClass, 1)))
            return NULL;
          return t_TilesCache::wrap_Object(TilesCache(((t_TilesCache *) arg)->object.this$));
        }
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TilesCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileFactory a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::raster::TileUpdater a1((jobject) NULL);
          jint a2;
          TilesCache object((jobject) NULL);

          if (!parseArgs(args, "KkI", ::org::orekit::rugged::raster::TileFactory::initializeClass, ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &p0, ::org::orekit::rugged::raster::t_TileFactory::parameters_, &a1, &a2))
          {
            INT_CALL(object = TilesCache(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getTile(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getTile", args);
          return NULL;
        }
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealVector::class$ = NULL;
      jmethodID *OpenMapRealVector::mids$ = NULL;
      bool OpenMapRealVector::live$ = false;
      jdouble OpenMapRealVector::DEFAULT_ZERO_TOLERANCE = (jdouble) 0;

      jclass OpenMapRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_3d3b8362311739ce] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_99bb541b0ecf3230] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_19a01fdb4baa56b0] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_f7e9747cdcd2cea2] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;D)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_e98d7b3e971b6087] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_add_c4b62513600b4f58] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_add_bf8d75e459632544] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_c4b62513600b4f58] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_793501de279e164e] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_0c797a447eb4ff71] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_copy_b677a29415ab6d99] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeDivide_793501de279e164e] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeMultiply_793501de279e164e] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_e26aa9a2bfe70300] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_ce4c02d583456bc9] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_e26aa9a2bfe70300] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getL1Distance_510dfb60b80a1bc5] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getSparsity_9981f74b2d109da6] = env->getMethodID(cls, "getSparsity", "()D");
          mids$[mid_getSubVector_21edf7b8aaef852b] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_mapAdd_0c797a447eb4ff71] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_mapAddToSelf_0c797a447eb4ff71] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_set_1ad26e8c8c0cd65b] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_4320462275d66e78] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_543485b1a87e5329] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_c4b62513600b4f58] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_subtract_bf8d75e459632544] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_b677a29415ab6d99] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_unitize_ff7cb6c242604316] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_isDefaultValue_7bc657d327f0f830] = env->getMethodID(cls, "isDefaultValue", "(D)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ZERO_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_ZERO_TOLERANCE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealVector::OpenMapRealVector() : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_3d3b8362311739ce, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_99bb541b0ecf3230, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_19a01fdb4baa56b0, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_f7e9747cdcd2cea2, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1, jdouble a2) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_e98d7b3e971b6087, a0, a1, a2)) {}

      OpenMapRealVector OpenMapRealVector::add(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_add_c4b62513600b4f58], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_add_bf8d75e459632544], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_c4b62513600b4f58], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_793501de279e164e], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_0c797a447eb4ff71], a0));
      }

      OpenMapRealVector OpenMapRealVector::copy() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_copy_b677a29415ab6d99]));
      }

      OpenMapRealVector OpenMapRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_793501de279e164e], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_793501de279e164e], a0.this$));
      }

      jboolean OpenMapRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint OpenMapRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      jdouble OpenMapRealVector::getDistance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_e26aa9a2bfe70300], a0.this$);
      }

      jdouble OpenMapRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble OpenMapRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_ce4c02d583456bc9], a0);
      }

      jdouble OpenMapRealVector::getL1Distance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_e26aa9a2bfe70300], a0.this$);
      }

      jdouble OpenMapRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble OpenMapRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble OpenMapRealVector::getSparsity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSparsity_9981f74b2d109da6]);
      }

      OpenMapRealVector OpenMapRealVector::getSubVector(jint a0, jint a1) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_21edf7b8aaef852b], a0, a1));
      }

      jint OpenMapRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean OpenMapRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean OpenMapRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      OpenMapRealVector OpenMapRealVector::mapAdd(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_0c797a447eb4ff71], a0));
      }

      OpenMapRealVector OpenMapRealVector::mapAddToSelf(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_0c797a447eb4ff71], a0));
      }

      void OpenMapRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_1ad26e8c8c0cd65b], a0);
      }

      void OpenMapRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_4320462275d66e78], a0, a1);
      }

      void OpenMapRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_543485b1a87e5329], a0, a1.this$);
      }

      ::java::util::Iterator OpenMapRealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_4f613ccd2f803b4b]));
      }

      OpenMapRealVector OpenMapRealVector::subtract(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_subtract_c4b62513600b4f58], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_subtract_bf8d75e459632544], a0.this$));
      }

      JArray< jdouble > OpenMapRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
      }

      OpenMapRealVector OpenMapRealVector::unitVector() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_unitVector_b677a29415ab6d99]));
      }

      void OpenMapRealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_ff7cb6c242604316]);
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
      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self);
      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data);
      static PyGetSetDef t_OpenMapRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealVector, dimension),
        DECLARE_GET_FIELD(t_OpenMapRealVector, infinite),
        DECLARE_GET_FIELD(t_OpenMapRealVector, naN),
        DECLARE_GET_FIELD(t_OpenMapRealVector, sparsity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealVector__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSparsity, METH_NOARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAdd, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, sparseIterator, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealVector)[] = {
        { Py_tp_methods, t_OpenMapRealVector__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealVector_init_ },
        { Py_tp_getset, t_OpenMapRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::SparseRealVector),
        NULL
      };

      DEFINE_TYPE(OpenMapRealVector, t_OpenMapRealVector, OpenMapRealVector);

      void t_OpenMapRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealVector), &PY_TYPE_DEF(OpenMapRealVector), module, "OpenMapRealVector", 0);
      }

      void t_OpenMapRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "class_", make_descriptor(OpenMapRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "wrapfn_", make_descriptor(t_OpenMapRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(OpenMapRealVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "DEFAULT_ZERO_TOLERANCE", make_descriptor(OpenMapRealVector::DEFAULT_ZERO_TOLERANCE));
      }

      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealVector::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealVector::wrap_Object(OpenMapRealVector(((t_OpenMapRealVector *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenMapRealVector object((jobject) NULL);

            INT_CALL(object = OpenMapRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OD", ::java::lang::PY_TYPE(Double), &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
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
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1, a2));
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

      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSparsity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAdd", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.sparseIterator());
          return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "sparseIterator", args, 2);
      }

      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.unitVector());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.unitize());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitize", args, 2);
      }

      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSparsity());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlTokenBuilder::class$ = NULL;
            jmethodID *XmlTokenBuilder::mids$ = NULL;
            bool XmlTokenBuilder::live$ = false;

            jclass XmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::List XmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_bb6f0a25fbefd346], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_XmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_XmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlTokenBuilder)[] = {
              { Py_tp_methods, t_XmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlTokenBuilder, t_XmlTokenBuilder, XmlTokenBuilder);

            void t_XmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlTokenBuilder), &PY_TYPE_DEF(XmlTokenBuilder), module, "XmlTokenBuilder", 0);
            }

            void t_XmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "class_", make_descriptor(XmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "wrapfn_", make_descriptor(t_XmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_XmlTokenBuilder::wrap_Object(XmlTokenBuilder(((t_XmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args)
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
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldRotation::class$ = NULL;
          jmethodID *FieldRotation::mids$ = NULL;
          bool FieldRotation::live$ = false;

          jclass FieldRotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldRotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_45d220651e48f081] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_1d7654747a97875b] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/CalculusFieldElement;D)V");
              mids$[mid_init$_67493a0743323b57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
              mids$[mid_init$_932492fd27af1630] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_6fff80aed6ccb177] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_3f69a26f157cde18] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_1d5219772450f61f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Z)V");
              mids$[mid_applyInverseTo_5a1b7d6ed4b4f387] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_df37e4d755ff0467] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_fdf2c698f521cc21] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_f577b57448bfefd2] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_f505830437b92c46] = env->getMethodID(cls, "applyInverseTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_7709cb51638b2622] = env->getMethodID(cls, "applyInverseTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_4d48ecd7a3a818eb] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_d24da01432850594] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_5a1b7d6ed4b4f387] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_df37e4d755ff0467] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_fdf2c698f521cc21] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_f577b57448bfefd2] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_f505830437b92c46] = env->getMethodID(cls, "applyTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_7709cb51638b2622] = env->getMethodID(cls, "applyTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_4d48ecd7a3a818eb] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_d24da01432850594] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_compose_269023ef73a640c2] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_compose_c51154664f6e214d] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_269023ef73a640c2] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_c51154664f6e214d] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_distance_6b0cc5ad87dddb65] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngle_08d37e3f77b7239d] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngles_c78eddae8510fb04] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAxis_e381526ea6eceb85] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getIdentity_1618d8dd33222dca] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_getMatrix_4d010bb8d4780d51] = env->getMethodID(cls, "getMatrix", "()[[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ0_08d37e3f77b7239d] = env->getMethodID(cls, "getQ0", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ1_08d37e3f77b7239d] = env->getMethodID(cls, "getQ1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ2_08d37e3f77b7239d] = env->getMethodID(cls, "getQ2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ3_08d37e3f77b7239d] = env->getMethodID(cls, "getQ3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_revert_5c8e6f300713559c] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_toRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "toRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45d220651e48f081, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d7654747a97875b, a0.this$, a1)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67493a0743323b57, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_932492fd27af1630, a0.this$, a1.this$, a2.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6fff80aed6ccb177, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f69a26f157cde18, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d5219772450f61f, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          FieldRotation FieldRotation::applyInverseTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_5a1b7d6ed4b4f387], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_df37e4d755ff0467], a0.this$));
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_fdf2c698f521cc21], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_f577b57448bfefd2], a0.this$));
          }

          void FieldRotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_f505830437b92c46], a0.this$, a1.this$);
          }

          void FieldRotation::applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_7709cb51638b2622], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_4d48ecd7a3a818eb], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_d24da01432850594], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::applyTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_5a1b7d6ed4b4f387], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_df37e4d755ff0467], a0.this$));
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_fdf2c698f521cc21], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_f577b57448bfefd2], a0.this$));
          }

          void FieldRotation::applyTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_f505830437b92c46], a0.this$, a1.this$);
          }

          void FieldRotation::applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_7709cb51638b2622], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyTo_4d48ecd7a3a818eb], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyTo_d24da01432850594], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_269023ef73a640c2], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_c51154664f6e214d], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_269023ef73a640c2], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_c51154664f6e214d], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::distance(const FieldRotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_6b0cc5ad87dddb65], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getAngle() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAngle_08d37e3f77b7239d]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldRotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAngles_c78eddae8510fb04], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxis_e381526ea6eceb85], a0.this$));
          }

          FieldRotation FieldRotation::getIdentity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_1618d8dd33222dca], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldRotation::getMatrix() const
          {
            return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getMatrix_4d010bb8d4780d51]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ0() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ0_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ1_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ2_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ3_08d37e3f77b7239d]));
          }

          FieldRotation FieldRotation::revert() const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_revert_5c8e6f300713559c]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Rotation FieldRotation::toRotation() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_4d68cff5f6e4403a]));
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
          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args);
          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg);
          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self);
          static PyObject *t_FieldRotation_revert(t_FieldRotation *self);
          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self);
          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data);
          static PyGetSetDef t_FieldRotation__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRotation, angle),
            DECLARE_GET_FIELD(t_FieldRotation, matrix),
            DECLARE_GET_FIELD(t_FieldRotation, q0),
            DECLARE_GET_FIELD(t_FieldRotation, q1),
            DECLARE_GET_FIELD(t_FieldRotation, q2),
            DECLARE_GET_FIELD(t_FieldRotation, q3),
            DECLARE_GET_FIELD(t_FieldRotation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRotation__methods_[] = {
            DECLARE_METHOD(t_FieldRotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, getAxis, METH_O),
            DECLARE_METHOD(t_FieldRotation, getIdentity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, revert, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, toRotation, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRotation)[] = {
            { Py_tp_methods, t_FieldRotation__methods_ },
            { Py_tp_init, (void *) t_FieldRotation_init_ },
            { Py_tp_getset, t_FieldRotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRotation, t_FieldRotation, FieldRotation);
          PyObject *t_FieldRotation::wrap_Object(const FieldRotation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRotation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRotation::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRotation), &PY_TYPE_DEF(FieldRotation), module, "FieldRotation", 0);
          }

          void t_FieldRotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "class_", make_descriptor(FieldRotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "wrapfn_", make_descriptor(t_FieldRotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRotation::initializeClass, 1)))
              return NULL;
            return t_FieldRotation::wrap_Object(FieldRotation(((t_FieldRotation *) arg)->object.this$));
          }
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "[[KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jboolean a4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyInverseTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args)
          {
            FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldRotation::initializeClass, FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::distance(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAngle());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::getIdentity(a0));
              return t_FieldRotation::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIdentity", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ0());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_revert(t_FieldRotation *self)
          {
            FieldRotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldRotation::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.toRotation());
            return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
          }
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAngle());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ0());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ2());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ3());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorUtil::class$ = NULL;
        jmethodID *KalmanEstimatorUtil::mids$ = NULL;
        bool KalmanEstimatorUtil::live$ = false;

        jclass KalmanEstimatorUtil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorUtil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyDynamicOutlierFilter_d09e08c6418a1258] = env->getStaticMethodID(cls, "applyDynamicOutlierFilter", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_checkDimension_cbfea3e6e8388456] = env->getStaticMethodID(cls, "checkDimension", "(ILorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;)V");
            mids$[mid_computeInnovationVector_7c6de54c62f403d7] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_computeInnovationVector_e42d51cf83e89d41] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;[D)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_decorate_d5c17893ca0d456d] = env->getStaticMethodID(cls, "decorate", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_decorateUnscented_d5c17893ca0d456d] = env->getStaticMethodID(cls, "decorateUnscented", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_filterRelevant_09c715f8a82f1a3a] = env->getStaticMethodID(cls, "filterRelevant", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;[Lorg/orekit/propagation/SpacecraftState;)[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_normalizeCovarianceMatrix_d05ff823d5dfec7c] = env->getStaticMethodID(cls, "normalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeCovarianceMatrix_d05ff823d5dfec7c] = env->getStaticMethodID(cls, "unnormalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeInnovationCovarianceMatrix_d05ff823d5dfec7c] = env->getStaticMethodID(cls, "unnormalizeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeKalmanGainMatrix_aa0dce4c57339931] = env->getStaticMethodID(cls, "unnormalizeKalmanGainMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeMeasurementJacobian_aa0dce4c57339931] = env->getStaticMethodID(cls, "unnormalizeMeasurementJacobian", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeStateTransitionMatrix_d05ff823d5dfec7c] = env->getStaticMethodID(cls, "unnormalizeStateTransitionMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanEstimatorUtil::applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_applyDynamicOutlierFilter_d09e08c6418a1258], a0.this$, a1.this$);
        }

        void KalmanEstimatorUtil::checkDimension(jint a0, const ::org::orekit::utils::ParameterDriversList & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::utils::ParameterDriversList & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkDimension_cbfea3e6e8388456], a0, a1.this$, a2.this$, a3.this$);
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_7c6de54c62f403d7], a0.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_e42d51cf83e89d41], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorate_d5c17893ca0d456d], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorateUnscented_d5c17893ca0d456d], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimatorUtil::filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callStaticObjectMethod(cls, mids$[mid_filterRelevant_09c715f8a82f1a3a], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_normalizeCovarianceMatrix_d05ff823d5dfec7c], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeCovarianceMatrix_d05ff823d5dfec7c], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeInnovationCovarianceMatrix_d05ff823d5dfec7c], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeKalmanGainMatrix_aa0dce4c57339931], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeMeasurementJacobian_aa0dce4c57339931], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeStateTransitionMatrix_d05ff823d5dfec7c], a0.this$, a1.this$));
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
        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_KalmanEstimatorUtil__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorUtil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, applyDynamicOutlierFilter, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, checkDimension, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, computeInnovationVector, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorateUnscented, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, filterRelevant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, normalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeInnovationCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeKalmanGainMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeMeasurementJacobian, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeStateTransitionMatrix, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorUtil)[] = {
          { Py_tp_methods, t_KalmanEstimatorUtil__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorUtil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorUtil, t_KalmanEstimatorUtil, KalmanEstimatorUtil);

        void t_KalmanEstimatorUtil::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorUtil), &PY_TYPE_DEF(KalmanEstimatorUtil), module, "KalmanEstimatorUtil", 0);
        }

        void t_KalmanEstimatorUtil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "class_", make_descriptor(KalmanEstimatorUtil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "wrapfn_", make_descriptor(t_KalmanEstimatorUtil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorUtil::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorUtil::wrap_Object(KalmanEstimatorUtil(((t_KalmanEstimatorUtil *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorUtil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::applyDynamicOutlierFilter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "applyDynamicOutlierFilter", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList a1((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);

          if (!parseArgs(args, "Ikkk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::checkDimension(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkDimension", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K[D", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0, a1));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeInnovationVector", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorate(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorate", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorateUnscented(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorateUnscented", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::filterRelevant(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          }

          PyErr_SetArgsError(type, "filterRelevant", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::normalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "normalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeInnovationCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeKalmanGainMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeMeasurementJacobian(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeMeasurementJacobian", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeStateTransitionMatrix", args);
          return NULL;
        }
      }
    }
  }
}
