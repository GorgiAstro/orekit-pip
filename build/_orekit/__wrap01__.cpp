#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagatorBuilder::class$ = NULL;
          jmethodID *SBASPropagatorBuilder::mids$ = NULL;
          bool SBASPropagatorBuilder::live$ = false;

          jclass SBASPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7bd6f9e81a7105f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;)V");
              mids$[mid_init$_945420a0972f4b1f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_0952149c61182d46] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_build_70869a450ee7c848] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
              mids$[mid_ecef_2b14ec5f74b35e8d] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_eci_2b14ec5f74b35e8d] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mass_d0414e7e79d1c862] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mu_d0414e7e79d1c862] = env->getMethodID(cls, "mu", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bd6f9e81a7105f8, a0.this$)) {}

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_945420a0972f4b1f, a0.this$, a1.this$)) {}

          SBASPropagatorBuilder SBASPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_0952149c61182d46], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_build_70869a450ee7c848]));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_2b14ec5f74b35e8d], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_2b14ec5f74b35e8d], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mass(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_d0414e7e79d1c862], a0));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mu(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mu_d0414e7e79d1c862], a0));
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
          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self);
          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_SBASPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_SBASPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mass, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mu, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagatorBuilder)[] = {
            { Py_tp_methods, t_SBASPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_SBASPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SBASPropagatorBuilder, t_SBASPropagatorBuilder, SBASPropagatorBuilder);

          void t_SBASPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagatorBuilder), &PY_TYPE_DEF(SBASPropagatorBuilder), module, "SBASPropagatorBuilder", 0);
          }

          void t_SBASPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "class_", make_descriptor(SBASPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "wrapfn_", make_descriptor(t_SBASPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_SBASPropagatorBuilder::wrap_Object(SBASPropagatorBuilder(((t_SBASPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0, a1));
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

          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
          }

          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mu(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanObserver::class$ = NULL;
        jmethodID *KalmanObserver::mids$ = NULL;
        bool KalmanObserver::live$ = false;

        jclass KalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_a9c60094e0bfed76] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanObserver::evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_a9c60094e0bfed76], a0.this$);
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
        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg);

        static PyMethodDef t_KalmanObserver__methods_[] = {
          DECLARE_METHOD(t_KalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, evaluationPerformed, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanObserver)[] = {
          { Py_tp_methods, t_KalmanObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanObserver, t_KalmanObserver, KalmanObserver);

        void t_KalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanObserver), &PY_TYPE_DEF(KalmanObserver), module, "KalmanObserver", 0);
        }

        void t_KalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "class_", make_descriptor(KalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "wrapfn_", make_descriptor(t_KalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanObserver::initializeClass, 1)))
            return NULL;
          return t_KalmanObserver::wrap_Object(KalmanObserver(((t_KalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanEstimation a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &a0))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesRangeModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesRangeModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bedd188d9f399c34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesRangeModifier::OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedd188d9f399c34, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OnBoardAntennaInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesRangeModifier, t_OnBoardAntennaInterSatellitesRangeModifier, OnBoardAntennaInterSatellitesRangeModifier);

          void t_OnBoardAntennaInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesRangeModifier), module, "OnBoardAntennaInterSatellitesRangeModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesRangeModifier::wrap_Object(OnBoardAntennaInterSatellitesRangeModifier(((t_OnBoardAntennaInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Min::class$ = NULL;
        jmethodID *Min::mids$ = NULL;
        bool Min::live$ = false;

        jclass Min::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Min");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Min::Min() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Min::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Min_value(t_Min *self, PyObject *args);

        static PyMethodDef t_Min__methods_[] = {
          DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
          { Py_tp_methods, t_Min__methods_ },
          { Py_tp_init, (void *) t_Min_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Min)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Min, t_Min, Min);

        void t_Min::install(PyObject *module)
        {
          installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
        }

        void t_Min::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Min::initializeClass, 1)))
            return NULL;
          return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
        }
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Min::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
        {
          Min object((jobject) NULL);

          INT_CALL(object = Min());
          self->object = object;

          return 0;
        }

        static PyObject *t_Min_value(t_Min *self, PyObject *args)
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
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbDescription::class$ = NULL;
        jmethodID *DcbDescription::mids$ = NULL;
        bool DcbDescription::live$ = false;

        jclass DcbDescription::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbDescription");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBiasMode_0090f7797e403f43] = env->getMethodID(cls, "getBiasMode", "()Ljava/lang/String;");
            mids$[mid_getDeterminationMethod_0090f7797e403f43] = env->getMethodID(cls, "getDeterminationMethod", "()Ljava/lang/String;");
            mids$[mid_getObservationSampling_f2f64475e4580546] = env->getMethodID(cls, "getObservationSampling", "()I");
            mids$[mid_getParameterSpacing_f2f64475e4580546] = env->getMethodID(cls, "getParameterSpacing", "()I");
            mids$[mid_getTimeSystem_b58d3545739694ee] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_setBiasMode_e939c6558ae8d313] = env->getMethodID(cls, "setBiasMode", "(Ljava/lang/String;)V");
            mids$[mid_setDeterminationMethod_e939c6558ae8d313] = env->getMethodID(cls, "setDeterminationMethod", "(Ljava/lang/String;)V");
            mids$[mid_setObservationSampling_0a2a1ac2721c0336] = env->getMethodID(cls, "setObservationSampling", "(I)V");
            mids$[mid_setParameterSpacing_0a2a1ac2721c0336] = env->getMethodID(cls, "setParameterSpacing", "(I)V");
            mids$[mid_setTimeSystem_4733fc8266dc541c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbDescription::DcbDescription() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::lang::String DcbDescription::getBiasMode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBiasMode_0090f7797e403f43]));
        }

        ::java::lang::String DcbDescription::getDeterminationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeterminationMethod_0090f7797e403f43]));
        }

        jint DcbDescription::getObservationSampling() const
        {
          return env->callIntMethod(this$, mids$[mid_getObservationSampling_f2f64475e4580546]);
        }

        jint DcbDescription::getParameterSpacing() const
        {
          return env->callIntMethod(this$, mids$[mid_getParameterSpacing_f2f64475e4580546]);
        }

        ::org::orekit::gnss::TimeSystem DcbDescription::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_b58d3545739694ee]));
        }

        void DcbDescription::setBiasMode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBiasMode_e939c6558ae8d313], a0.this$);
        }

        void DcbDescription::setDeterminationMethod(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDeterminationMethod_e939c6558ae8d313], a0.this$);
        }

        void DcbDescription::setObservationSampling(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObservationSampling_0a2a1ac2721c0336], a0);
        }

        void DcbDescription::setParameterSpacing(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterSpacing_0a2a1ac2721c0336], a0);
        }

        void DcbDescription::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_4733fc8266dc541c], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self);
        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data);
        static PyGetSetDef t_DcbDescription__fields_[] = {
          DECLARE_GETSET_FIELD(t_DcbDescription, biasMode),
          DECLARE_GETSET_FIELD(t_DcbDescription, determinationMethod),
          DECLARE_GETSET_FIELD(t_DcbDescription, observationSampling),
          DECLARE_GETSET_FIELD(t_DcbDescription, parameterSpacing),
          DECLARE_GETSET_FIELD(t_DcbDescription, timeSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbDescription__methods_[] = {
          DECLARE_METHOD(t_DcbDescription, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, getBiasMode, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getDeterminationMethod, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getObservationSampling, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getParameterSpacing, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, setBiasMode, METH_O),
          DECLARE_METHOD(t_DcbDescription, setDeterminationMethod, METH_O),
          DECLARE_METHOD(t_DcbDescription, setObservationSampling, METH_O),
          DECLARE_METHOD(t_DcbDescription, setParameterSpacing, METH_O),
          DECLARE_METHOD(t_DcbDescription, setTimeSystem, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbDescription)[] = {
          { Py_tp_methods, t_DcbDescription__methods_ },
          { Py_tp_init, (void *) t_DcbDescription_init_ },
          { Py_tp_getset, t_DcbDescription__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbDescription)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbDescription, t_DcbDescription, DcbDescription);

        void t_DcbDescription::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbDescription), &PY_TYPE_DEF(DcbDescription), module, "DcbDescription", 0);
        }

        void t_DcbDescription::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "class_", make_descriptor(DcbDescription::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "wrapfn_", make_descriptor(t_DcbDescription::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbDescription::initializeClass, 1)))
            return NULL;
          return t_DcbDescription::wrap_Object(DcbDescription(((t_DcbDescription *) arg)->object.this$));
        }
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbDescription::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds)
        {
          DcbDescription object((jobject) NULL);

          INT_CALL(object = DcbDescription());
          self->object = object;

          return 0;
        }

        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getBiasMode());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeterminationMethod());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getObservationSampling());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getParameterSpacing());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setBiasMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBiasMode", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDeterminationMethod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDeterminationMethod", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setObservationSampling(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObservationSampling", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setParameterSpacing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterSpacing", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg)
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

        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getBiasMode());
          return j2p(value);
        }
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setBiasMode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "biasMode", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeterminationMethod());
          return j2p(value);
        }
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDeterminationMethod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "determinationMethod", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getObservationSampling());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setObservationSampling(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observationSampling", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getParameterSpacing());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setParameterSpacing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parameterSpacing", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "org/orekit/time/TimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftState::class$ = NULL;
      jmethodID *SpacecraftState::mids$ = NULL;
      bool SpacecraftState::live$ = false;
      jdouble SpacecraftState::DEFAULT_MASS = (jdouble) 0;

      jclass SpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_073e85bdda4ac909] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_cac0876957c83a07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_4113b01e3f013ea8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_2cfe80d4c8f771e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;D)V");
          mids$[mid_init$_bedbb88fd5c96a0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_3246ce2d8d1e813c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_b088b68c4e93a489] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
          mids$[mid_init$_f46c916b57b2fddc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_cfb5a80032a9ea52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_eaa9801c626b609c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_b9a0b4387a439d7c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_f66b76ba9f271ec3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_d44940232ffa9ece] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_9660dccae5113b7e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_6237ff20bb39d491] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_c554ee2e12ba2ef8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_e1f80ec9e89fc9f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_addAdditionalState_8a6f4fa701b1f728] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_8a6f4fa701b1f728] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_2b88003f931f70a7] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getAbsPVA_821da029915a6e75] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_5fc57a69c973af17] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStateDerivative_5fc57a69c973af17] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStatesDerivatives_08f613b585562583] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_08f613b585562583] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAttitude_78dca83e076ede35] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getKeplerianMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
          mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getOrbit_551bf685780e3c1f] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_f8a365e30a3ddce1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_b070efa02e5e2595] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hasAdditionalState_6b161f495ea569b8] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_6b161f495ea569b8] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_e470b6d9e0d979db] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_d8572e79ca9ff46b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_85643104a022b593] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_631c2f99a847a383] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_073e85bdda4ac909, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cac0876957c83a07, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4113b01e3f013ea8, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cfe80d4c8f771e1, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedbb88fd5c96a0b, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3246ce2d8d1e813c, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b088b68c4e93a489, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f46c916b57b2fddc, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfb5a80032a9ea52, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eaa9801c626b609c, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9a0b4387a439d7c, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f66b76ba9f271ec3, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d44940232ffa9ece, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9660dccae5113b7e, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6237ff20bb39d491, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c554ee2e12ba2ef8, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f80ec9e89fc9f9, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState SpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_8a6f4fa701b1f728], a0.this$, a1.this$));
      }

      SpacecraftState SpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_8a6f4fa701b1f728], a0.this$, a1.this$));
      }

      void SpacecraftState::ensureCompatibleAdditionalStates(const SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_2b88003f931f70a7], a0.this$);
      }

      jdouble SpacecraftState::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      ::org::orekit::utils::AbsolutePVCoordinates SpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_821da029915a6e75]));
      }

      JArray< jdouble > SpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_5fc57a69c973af17], a0.this$));
      }

      JArray< jdouble > SpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_5fc57a69c973af17], a0.this$));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_08f613b585562583]));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_08f613b585562583]));
      }

      ::org::orekit::attitudes::Attitude SpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_78dca83e076ede35]));
      }

      ::org::orekit::time::AbsoluteDate SpacecraftState::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble SpacecraftState::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Frame SpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      jdouble SpacecraftState::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getMass() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
      }

      jdouble SpacecraftState::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::Orbit SpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_551bf685780e3c1f]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6890805957bea2cd]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f8a365e30a3ddce1], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b070efa02e5e2595], a0.this$));
      }

      jboolean SpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_6b161f495ea569b8], a0.this$);
      }

      jboolean SpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_6b161f495ea569b8], a0.this$);
      }

      jboolean SpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_e470b6d9e0d979db]);
      }

      SpacecraftState SpacecraftState::shiftedBy(jdouble a0) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_d8572e79ca9ff46b], a0));
      }

      ::org::orekit::frames::StaticTransform SpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_85643104a022b593]));
      }

      ::java::lang::String SpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::orekit::frames::Transform SpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_toTransform_631c2f99a847a383]));
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
      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data);
      static PyGetSetDef t_SpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftState, a),
        DECLARE_GET_FIELD(t_SpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_SpacecraftState, attitude),
        DECLARE_GET_FIELD(t_SpacecraftState, date),
        DECLARE_GET_FIELD(t_SpacecraftState, e),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_SpacecraftState, frame),
        DECLARE_GET_FIELD(t_SpacecraftState, hx),
        DECLARE_GET_FIELD(t_SpacecraftState, hy),
        DECLARE_GET_FIELD(t_SpacecraftState, i),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_SpacecraftState, lE),
        DECLARE_GET_FIELD(t_SpacecraftState, lM),
        DECLARE_GET_FIELD(t_SpacecraftState, lv),
        DECLARE_GET_FIELD(t_SpacecraftState, mass),
        DECLARE_GET_FIELD(t_SpacecraftState, mu),
        DECLARE_GET_FIELD(t_SpacecraftState, orbit),
        DECLARE_GET_FIELD(t_SpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_SpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_SpacecraftState, position),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftState__methods_[] = {
        DECLARE_METHOD(t_SpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, shiftedBy, METH_O),
        DECLARE_METHOD(t_SpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftState)[] = {
        { Py_tp_methods, t_SpacecraftState__methods_ },
        { Py_tp_init, (void *) t_SpacecraftState_init_ },
        { Py_tp_getset, t_SpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpacecraftState, t_SpacecraftState, SpacecraftState);

      void t_SpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftState), &PY_TYPE_DEF(SpacecraftState), module, "SpacecraftState", 0);
      }

      void t_SpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "class_", make_descriptor(SpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "wrapfn_", make_descriptor(t_SpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "boxfn_", make_descriptor(boxObject));
        env->getClass(SpacecraftState::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "DEFAULT_MASS", make_descriptor(SpacecraftState::DEFAULT_MASS));
      }

      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftState::initializeClass, 1)))
          return NULL;
        return t_SpacecraftState::wrap_Object(SpacecraftState(((t_SpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg)
      {
        SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMass());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg)
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

      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
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

      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg)
      {
        jdouble a0;
        SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_Transform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::AbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMass());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractEphemerisMessage::class$ = NULL;
            jmethodID *AbstractEphemerisMessage::mids$ = NULL;
            bool AbstractEphemerisMessage::live$ = false;

            jclass AbstractEphemerisMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEpochToc_aaa854c403487cf3] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getHealth_456d9a2f64d6b28d] = env->getMethodID(cls, "getHealth", "()D");
                mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_setDate_e82d68cd9f886886] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setEpochToc_e82d68cd9f886886] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setHealth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setHealth", "(D)V");
                mids$[mid_setPRN_0a2a1ac2721c0336] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setX_77e0f9a1f260e2e5] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXDot", "(D)V");
                mids$[mid_setXDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXDotDot", "(D)V");
                mids$[mid_setY_77e0f9a1f260e2e5] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYDot", "(D)V");
                mids$[mid_setYDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYDotDot", "(D)V");
                mids$[mid_setZ_77e0f9a1f260e2e5] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setZDot", "(D)V");
                mids$[mid_setZDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setZDotDot", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEphemerisMessage::AbstractEphemerisMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_aaa854c403487cf3]));
            }

            jdouble AbstractEphemerisMessage::getHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHealth_456d9a2f64d6b28d]);
            }

            jint AbstractEphemerisMessage::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
            }

            jdouble AbstractEphemerisMessage::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractEphemerisMessage::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_456d9a2f64d6b28d]);
            }

            void AbstractEphemerisMessage::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_e82d68cd9f886886], a0.this$);
            }

            void AbstractEphemerisMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_e82d68cd9f886886], a0.this$);
            }

            void AbstractEphemerisMessage::setHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_0a2a1ac2721c0336], a0);
            }

            void AbstractEphemerisMessage::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setXDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setXDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDotDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setYDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setYDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDotDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setZDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractEphemerisMessage::setZDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDotDot_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractEphemerisMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, date),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, health),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, pRN),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, x),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, y),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, z),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEphemerisMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractEphemerisMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getX, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getY, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZ, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setDate, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setHealth, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setPRN, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setX, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setY, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZ, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDotDot, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEphemerisMessage)[] = {
              { Py_tp_methods, t_AbstractEphemerisMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractEphemerisMessage_init_ },
              { Py_tp_getset, t_AbstractEphemerisMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEphemerisMessage)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEphemerisMessage, t_AbstractEphemerisMessage, AbstractEphemerisMessage);

            void t_AbstractEphemerisMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEphemerisMessage), &PY_TYPE_DEF(AbstractEphemerisMessage), module, "AbstractEphemerisMessage", 0);
            }

            void t_AbstractEphemerisMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "class_", make_descriptor(AbstractEphemerisMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "wrapfn_", make_descriptor(t_AbstractEphemerisMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEphemerisMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractEphemerisMessage::wrap_Object(AbstractEphemerisMessage(((t_AbstractEphemerisMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEphemerisMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds)
            {
              AbstractEphemerisMessage object((jobject) NULL);

              INT_CALL(object = AbstractEphemerisMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDotDot", arg);
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
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSObserver::class$ = NULL;
        jmethodID *BatchLSObserver::mids$ = NULL;
        bool BatchLSObserver::live$ = false;

        jclass BatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_385d95579a122c42] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BatchLSObserver::evaluationPerformed(jint a0, jint a1, const JArray< ::org::orekit::orbits::Orbit > & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::utils::ParameterDriversList & a4, const ::org::orekit::utils::ParameterDriversList & a5, const ::org::orekit::estimation::measurements::EstimationsProvider & a6, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a7) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_385d95579a122c42], a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$);
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
      namespace leastsquares {
        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args);

        static PyMethodDef t_BatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_BatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, evaluationPerformed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSObserver)[] = {
          { Py_tp_methods, t_BatchLSObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSObserver, t_BatchLSObserver, BatchLSObserver);

        void t_BatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSObserver), &PY_TYPE_DEF(BatchLSObserver), module, "BatchLSObserver", 0);
        }

        void t_BatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "class_", make_descriptor(BatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "wrapfn_", make_descriptor(t_BatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_BatchLSObserver::wrap_Object(BatchLSObserver(((t_BatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::orbits::Orbit > a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a4((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a5((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimationsProvider a6((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a7((jobject) NULL);

          if (!parseArgs(args, "II[kkkkkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::measurements::EstimationsProvider::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialFunction::class$ = NULL;
        jmethodID *FieldPolynomialFunction::mids$ = NULL;
        bool FieldPolynomialFunction::live$ = false;

        jclass FieldPolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4c337e4c1ec6f647] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_add_32f3b75a8b9571d6] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_antiDerivative_26bb6c8ddaa2c385] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_degree_f2f64475e4580546] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_getCoefficients_01c7d10e96d5cf94] = env->getMethodID(cls, "getCoefficients", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_integrate_df565f90ecf8d53c] = env->getMethodID(cls, "integrate", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_75c7ce7d33e7324b] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_multiply_32f3b75a8b9571d6] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_negate_26bb6c8ddaa2c385] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_polynomialDerivative_26bb6c8ddaa2c385] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_subtract_32f3b75a8b9571d6] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_value_cc0a3d6abf820939] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_068ef23bc9763e86] = env->getStaticMethodID(cls, "evaluate", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_differentiate_45349640cfb1ab66] = env->getStaticMethodID(cls, "differentiate", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialFunction::FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c337e4c1ec6f647, a0.this$)) {}

        FieldPolynomialFunction FieldPolynomialFunction::add(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_32f3b75a8b9571d6], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::antiDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_26bb6c8ddaa2c385]));
        }

        jint FieldPolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialFunction::getCoefficients() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCoefficients_01c7d10e96d5cf94]));
        }

        ::org::hipparchus::Field FieldPolynomialFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_df565f90ecf8d53c], a0, a1));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_75c7ce7d33e7324b], a0.this$, a1.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::multiply(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_32f3b75a8b9571d6], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::negate() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_26bb6c8ddaa2c385]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::polynomialDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_26bb6c8ddaa2c385]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::subtract(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_32f3b75a8b9571d6], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_cc0a3d6abf820939], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
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
        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args);
        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, coefficients),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialFunction, t_FieldPolynomialFunction, FieldPolynomialFunction);
        PyObject *t_FieldPolynomialFunction::wrap_Object(const FieldPolynomialFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialFunction), &PY_TYPE_DEF(FieldPolynomialFunction), module, "FieldPolynomialFunction", 0);
        }

        void t_FieldPolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "class_", make_descriptor(FieldPolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "wrapfn_", make_descriptor(t_FieldPolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialFunction::wrap_Object(FieldPolynomialFunction(((t_FieldPolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldPolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args)
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
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonAbstractIntegratedPropagator::live$ = false;

        jclass PythonAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fad51e50ea7e824a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_083e2bc1612e9def] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_9c7da9606951e4f0] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractIntegratedPropagator::PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fad51e50ea7e824a, a0.this$, a1.this$)) {}

        void PythonAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractIntegratedPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self);
        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractIntegratedPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractIntegratedPropagator, t_PythonAbstractIntegratedPropagator, PythonAbstractIntegratedPropagator);

        void t_PythonAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonAbstractIntegratedPropagator), module, "PythonAbstractIntegratedPropagator", 1);
        }

        void t_PythonAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "class_", make_descriptor(PythonAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;", (void *) t_PythonAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractIntegratedPropagator::wrap_Object(PythonAbstractIntegratedPropagator(((t_PythonAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;
          PythonAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonAbstractIntegratedPropagator(a0, a1));
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

        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::StateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OdOOOO", o0, (double) a1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::StateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(::org::hipparchus::ode::ODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data)
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
#include "org/orekit/propagation/analytical/KeplerianPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *KeplerianPropagator::class$ = NULL;
        jmethodID *KeplerianPropagator::mids$ = NULL;
        bool KeplerianPropagator::live$ = false;

        jclass KeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/KeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_b088b68c4e93a489] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
            mids$[mid_init$_78ad6e50a2fd5c3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_df2189de2d62b7d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_9945d4571d3b6964] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DD)V");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b088b68c4e93a489, a0.this$, a1)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_78ad6e50a2fd5c3b, a0.this$, a1.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_df2189de2d62b7d0, a0.this$, a1.this$, a2)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9945d4571d3b6964, a0.this$, a1.this$, a2, a3)) {}

        void KeplerianPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
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
        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagator)[] = {
          { Py_tp_methods, t_KeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagator, t_KeplerianPropagator, KeplerianPropagator);

        void t_KeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagator), &PY_TYPE_DEF(KeplerianPropagator), module, "KeplerianPropagator", 0);
        }

        void t_KeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "class_", make_descriptor(KeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "wrapfn_", make_descriptor(t_KeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagator::wrap_Object(KeplerianPropagator(((t_KeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = KeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(KeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *EnclosingBall::class$ = NULL;
        jmethodID *EnclosingBall::mids$ = NULL;
        bool EnclosingBall::live$ = false;

        jclass EnclosingBall::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/EnclosingBall");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a92fa33132e2e6cb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;D[Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_contains_ceb3835b9ab36ec4] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;)Z");
            mids$[mid_contains_302ed2f0b34524bb] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;D)Z");
            mids$[mid_getCenter_268784e47ab908a6] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getRadius", "()D");
            mids$[mid_getSupport_a65b446f3778f2ab] = env->getMethodID(cls, "getSupport", "()[Lorg/hipparchus/geometry/Point;");
            mids$[mid_getSupportSize_f2f64475e4580546] = env->getMethodID(cls, "getSupportSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnclosingBall::EnclosingBall(const ::org::hipparchus::geometry::Point & a0, jdouble a1, const JArray< ::org::hipparchus::geometry::Point > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a92fa33132e2e6cb, a0.this$, a1, a2.this$)) {}

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_ceb3835b9ab36ec4], a0.this$);
        }

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_302ed2f0b34524bb], a0.this$, a1);
        }

        ::org::hipparchus::geometry::Point EnclosingBall::getCenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getCenter_268784e47ab908a6]));
        }

        jdouble EnclosingBall::getRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRadius_456d9a2f64d6b28d]);
        }

        JArray< ::org::hipparchus::geometry::Point > EnclosingBall::getSupport() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getSupport_a65b446f3778f2ab]));
        }

        jint EnclosingBall::getSupportSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportSize_f2f64475e4580546]);
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
      namespace enclosing {
        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args);
        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args);
        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data);
        static PyGetSetDef t_EnclosingBall__fields_[] = {
          DECLARE_GET_FIELD(t_EnclosingBall, center),
          DECLARE_GET_FIELD(t_EnclosingBall, radius),
          DECLARE_GET_FIELD(t_EnclosingBall, support),
          DECLARE_GET_FIELD(t_EnclosingBall, supportSize),
          DECLARE_GET_FIELD(t_EnclosingBall, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnclosingBall__methods_[] = {
          DECLARE_METHOD(t_EnclosingBall, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, of_, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, contains, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getRadius, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupport, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupportSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnclosingBall)[] = {
          { Py_tp_methods, t_EnclosingBall__methods_ },
          { Py_tp_init, (void *) t_EnclosingBall_init_ },
          { Py_tp_getset, t_EnclosingBall__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnclosingBall)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnclosingBall, t_EnclosingBall, EnclosingBall);
        PyObject *t_EnclosingBall::wrap_Object(const EnclosingBall& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EnclosingBall::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EnclosingBall::install(PyObject *module)
        {
          installType(&PY_TYPE(EnclosingBall), &PY_TYPE_DEF(EnclosingBall), module, "EnclosingBall", 0);
        }

        void t_EnclosingBall::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "class_", make_descriptor(EnclosingBall::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "wrapfn_", make_descriptor(t_EnclosingBall::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnclosingBall::initializeClass, 1)))
            return NULL;
          return t_EnclosingBall::wrap_Object(EnclosingBall(((t_EnclosingBall *) arg)->object.this$));
        }
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnclosingBall::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          JArray< ::org::hipparchus::geometry::Point > a2((jobject) NULL);
          PyTypeObject **p2;
          EnclosingBall object((jobject) NULL);

          if (!parseArgs(args, "KD[K", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            INT_CALL(object = EnclosingBall(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.contains(a0));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.contains(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "contains", args);
          return NULL;
        }

        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
        }

        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSupport());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSupportSize());
          return PyLong_FromLong((long) result);
        }
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSupport());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
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
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeIonosphericDelayModifier::BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          void BistaticRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void BistaticRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation$Predefined::class$ = NULL;
      jmethodID *HelmertTransformation$Predefined::mids$ = NULL;
      bool HelmertTransformation$Predefined::live$ = false;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014 = NULL;

      jclass HelmertTransformation$Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation$Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createTransformedITRF_f831a827e33228ad] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_createTransformedITRF_9873dfe98fd019d1] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getDestination_f157e1cf87d45e2d] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_f157e1cf87d45e2d] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getTransformation_fcd926f65d54e490] = env->getMethodID(cls, "getTransformation", "()Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_getTransformation_143e4c074e8fdded] = env->getMethodID(cls, "getTransformation", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_selectPredefined_22882f6c0685f022] = env->getStaticMethodID(cls, "selectPredefined", "(II)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_valueOf_4d802d0408b736c4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_values_cfccf6fea79b244a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/HelmertTransformation$Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_2008_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2014 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2014", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_f831a827e33228ad], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_9873dfe98fd019d1], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_f157e1cf87d45e2d]));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_f157e1cf87d45e2d]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation() const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_fcd926f65d54e490]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_143e4c074e8fdded], a0.this$));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::selectPredefined(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_selectPredefined_22882f6c0685f022], a0, a1));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4d802d0408b736c4], a0.this$));
      }

      JArray< HelmertTransformation$Predefined > HelmertTransformation$Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< HelmertTransformation$Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_cfccf6fea79b244a]));
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
      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type);
      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data);
      static PyGetSetDef t_HelmertTransformation$Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, destination),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, origin),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, transformation),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation$Predefined__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation$Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, createTransformedITRF, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getTransformation, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, selectPredefined, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation$Predefined)[] = {
        { Py_tp_methods, t_HelmertTransformation$Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_HelmertTransformation$Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation$Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation$Predefined, t_HelmertTransformation$Predefined, HelmertTransformation$Predefined);
      PyObject *t_HelmertTransformation$Predefined::wrap_Object(const HelmertTransformation$Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_HelmertTransformation$Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_HelmertTransformation$Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation$Predefined), &PY_TYPE_DEF(HelmertTransformation$Predefined), module, "HelmertTransformation$Predefined", 0);
      }

      void t_HelmertTransformation$Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "class_", make_descriptor(HelmertTransformation$Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "wrapfn_", make_descriptor(t_HelmertTransformation$Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(HelmertTransformation$Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2014", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014)));
      }

      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation$Predefined::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation$Predefined::wrap_Object(HelmertTransformation$Predefined(((t_HelmertTransformation$Predefined *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation$Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ksk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "createTransformedITRF", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransformation());
            return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransformation(a0));
              return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformation", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::selectPredefined(a0, a1));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "selectPredefined", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::valueOf(a0));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type)
      {
        JArray< HelmertTransformation$Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_HelmertTransformation$Predefined::wrap_jobject);
      }
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::HelmertTransformation value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformation());
        return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonFieldShortPeriodTerms::class$ = NULL;
            jmethodID *PythonFieldShortPeriodTerms::mids$ = NULL;
            bool PythonFieldShortPeriodTerms::live$ = false;

            jclass PythonFieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_a035db54d6f73186] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_bc63835161dae773] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldShortPeriodTerms::PythonFieldShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonFieldShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonFieldShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonFieldShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self);
            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonFieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, self),
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonFieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonFieldShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonFieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldShortPeriodTerms, t_PythonFieldShortPeriodTerms, PythonFieldShortPeriodTerms);
            PyObject *t_PythonFieldShortPeriodTerms::wrap_Object(const PythonFieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldShortPeriodTerms), &PY_TYPE_DEF(PythonFieldShortPeriodTerms), module, "PythonFieldShortPeriodTerms", 1);
            }

            void t_PythonFieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "class_", make_descriptor(PythonFieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonFieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonFieldShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonFieldShortPeriodTerms::wrap_Object(PythonFieldShortPeriodTerms(((t_PythonFieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonFieldShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data)
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
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
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
                  mids$[mid_process_b8f6d5c460d9712b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;)Z");
                  mids$[mid_valueOf_abba7bdeb43c4364] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");
                  mids$[mid_values_460dde49fc2dc958] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");

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
                return env->callBooleanMethod(this$, mids$[mid_process_b8f6d5c460d9712b], a0.this$, a1.this$, a2.this$);
              }

              SpinStabilizedKey SpinStabilizedKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return SpinStabilizedKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_abba7bdeb43c4364], a0.this$));
              }

              JArray< SpinStabilizedKey > SpinStabilizedKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< SpinStabilizedKey >(env->callStaticObjectMethod(cls, mids$[mid_values_460dde49fc2dc958]));
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
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *BodyFacade::class$ = NULL;
          jmethodID *BodyFacade::mids$ = NULL;
          bool BodyFacade::live$ = false;

          jclass BodyFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/BodyFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d59998e5077b4551] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBody;)V");
              mids$[mid_create_c9299e91d50cf830] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_b59714137119c161] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_309fa36b9789d935] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_getBody_798caa59db6076aa] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BodyFacade::BodyFacade(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d59998e5077b4551, a0.this$, a1.this$)) {}

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_c9299e91d50cf830], a0.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::bodies::CelestialBodies & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_b59714137119c161], a0.this$, a1.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::data::DataContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_309fa36b9789d935], a0.this$, a1.this$));
          }

          ::org::orekit::bodies::CelestialBody BodyFacade::getBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_798caa59db6076aa]));
          }

          ::java::lang::String BodyFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args);
          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self);
          static PyObject *t_BodyFacade_getName(t_BodyFacade *self);
          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data);
          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data);
          static PyGetSetDef t_BodyFacade__fields_[] = {
            DECLARE_GET_FIELD(t_BodyFacade, body),
            DECLARE_GET_FIELD(t_BodyFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BodyFacade__methods_[] = {
            DECLARE_METHOD(t_BodyFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, create, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, getBody, METH_NOARGS),
            DECLARE_METHOD(t_BodyFacade, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BodyFacade)[] = {
            { Py_tp_methods, t_BodyFacade__methods_ },
            { Py_tp_init, (void *) t_BodyFacade_init_ },
            { Py_tp_getset, t_BodyFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BodyFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BodyFacade, t_BodyFacade, BodyFacade);

          void t_BodyFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(BodyFacade), &PY_TYPE_DEF(BodyFacade), module, "BodyFacade", 0);
          }

          void t_BodyFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "class_", make_descriptor(BodyFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "wrapfn_", make_descriptor(t_BodyFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BodyFacade::initializeClass, 1)))
              return NULL;
            return t_BodyFacade::wrap_Object(BodyFacade(((t_BodyFacade *) arg)->object.this$));
          }
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BodyFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            BodyFacade object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BodyFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "create", args);
            return NULL;
          }

          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self)
          {
            ::org::orekit::bodies::CelestialBody result((jobject) NULL);
            OBJ_CALL(result = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
          }

          static PyObject *t_BodyFacade_getName(t_BodyFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }

          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmParser::class$ = NULL;
              jmethodID *OmmParser::mids$ = NULL;
              bool OmmParser::live$ = false;

              jclass OmmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_e57a4ca051280138] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/omm/Omm;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_720b26b998d380f3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::Omm OmmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::Omm(env->callObjectMethod(this$, mids$[mid_build_e57a4ca051280138]));
              }

              jboolean OmmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean OmmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean OmmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OmmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_720b26b998d380f3]));
              }

              ::java::util::Map OmmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
              }

              jboolean OmmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean OmmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean OmmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              jboolean OmmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean OmmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean OmmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void OmmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
            namespace omm {
              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data);
              static PyGetSetDef t_OmmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OmmParser, header),
                DECLARE_GET_FIELD(t_OmmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OmmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmParser__methods_[] = {
                DECLARE_METHOD(t_OmmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmParser)[] = {
                { Py_tp_methods, t_OmmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OmmParser, t_OmmParser, OmmParser);
              PyObject *t_OmmParser::wrap_Object(const OmmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OmmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OmmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmParser), &PY_TYPE_DEF(OmmParser), module, "OmmParser", 0);
              }

              void t_OmmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "class_", make_descriptor(OmmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "wrapfn_", make_descriptor(t_OmmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmParser::initializeClass, 1)))
                  return NULL;
                return t_OmmParser::wrap_Object(OmmParser(((t_OmmParser *) arg)->object.this$));
              }
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::Omm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::omm::t_Omm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
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
        mids$[mid_asIterator_035c6167e6569aac] = env->getMethodID(cls, "asIterator", "()Ljava/util/Iterator;");
        mids$[mid_hasMoreElements_e470b6d9e0d979db] = env->getMethodID(cls, "hasMoreElements", "()Z");
        mids$[mid_nextElement_dfd7647d9110ac9f] = env->getMethodID(cls, "nextElement", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Enumeration::asIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_asIterator_035c6167e6569aac]));
    }

    jboolean Enumeration::hasMoreElements() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasMoreElements_e470b6d9e0d979db]);
    }

    ::java::lang::Object Enumeration::nextElement() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_nextElement_dfd7647d9110ac9f]));
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
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
              mids$[mid_init$_809b540e573977f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedValue_824133ce4aec3505] = env->getMethodID(cls, "getCombinedValue", "(DD)D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractSingleFrequencyCombination::PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_809b540e573977f2, a0.this$, a1.this$)) {}

          void PythonAbstractSingleFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractSingleFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractSingleFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_a27fc9afd27e559d]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
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
              mids$[mid_valueOf_78d8423598c077d1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/troposphere/ViennaModelType;");
              mids$[mid_values_5a71115a406bbf6b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/troposphere/ViennaModelType;");

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
            return ViennaModelType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_78d8423598c077d1], a0.this$));
          }

          JArray< ViennaModelType > ViennaModelType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ViennaModelType >(env->callStaticObjectMethod(cls, mids$[mid_values_5a71115a406bbf6b]));
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
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_748b42918a92f2d4] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_isValidPoint_a836bdf37f582c99] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_75c7ce7d33e7324b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolatingFunction::PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_748b42918a92f2d4, a0.this$, a1.this$, a2.this$)) {}

        jboolean PiecewiseBicubicSplineInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_a836bdf37f582c99], a0, a1);
        }

        jdouble PiecewiseBicubicSplineInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement PiecewiseBicubicSplineInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_75c7ce7d33e7324b], a0.this$, a1.this$));
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1066::class$ = NULL;
              jmethodID *Rtcm1066::mids$ = NULL;
              bool Rtcm1066::live$ = false;

              jclass Rtcm1066::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1066::Rtcm1066(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args);
              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data);
              static PyGetSetDef t_Rtcm1066__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1066, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1066__methods_[] = {
                DECLARE_METHOD(t_Rtcm1066, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1066)[] = {
                { Py_tp_methods, t_Rtcm1066__methods_ },
                { Py_tp_init, (void *) t_Rtcm1066_init_ },
                { Py_tp_getset, t_Rtcm1066__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1066)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1066, t_Rtcm1066, Rtcm1066);
              PyObject *t_Rtcm1066::wrap_Object(const Rtcm1066& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1066::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1066::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1066), &PY_TYPE_DEF(Rtcm1066), module, "Rtcm1066", 0);
              }

              void t_Rtcm1066::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "class_", make_descriptor(Rtcm1066::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "wrapfn_", make_descriptor(t_Rtcm1066::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1066::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1066::wrap_Object(Rtcm1066(((t_Rtcm1066 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1066::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1066 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1066(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonDTM2000InputParameters::class$ = NULL;
          jmethodID *PythonDTM2000InputParameters::mids$ = NULL;
          bool PythonDTM2000InputParameters::live$ = false;

          jclass PythonDTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_get24HoursKp_e912d21057defe63] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_e912d21057defe63] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_e912d21057defe63] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_e912d21057defe63] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDTM2000InputParameters::PythonDTM2000InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonDTM2000InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonDTM2000InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonDTM2000InputParameters::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self);
          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data);
          static PyGetSetDef t_PythonDTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDTM2000InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonDTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDTM2000InputParameters)[] = {
            { Py_tp_methods, t_PythonDTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonDTM2000InputParameters_init_ },
            { Py_tp_getset, t_PythonDTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDTM2000InputParameters, t_PythonDTM2000InputParameters, PythonDTM2000InputParameters);

          void t_PythonDTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDTM2000InputParameters), &PY_TYPE_DEF(PythonDTM2000InputParameters), module, "PythonDTM2000InputParameters", 1);
          }

          void t_PythonDTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "class_", make_descriptor(PythonDTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "wrapfn_", make_descriptor(t_PythonDTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDTM2000InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_get24HoursKp0 },
              { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getInstantFlux1 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMaxDate2 },
              { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getMeanFlux3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMinDate4 },
              { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getThreeHourlyKP5 },
              { "pythonDecRef", "()V", (void *) t_PythonDTM2000InputParameters_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonDTM2000InputParameters::wrap_Object(PythonDTM2000InputParameters(((t_PythonDTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonDTM2000InputParameters object((jobject) NULL);

            INT_CALL(object = PythonDTM2000InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("get24HoursKp", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getInstantFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMeanFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getThreeHourlyKP", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data)
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
#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractStorelessUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractStorelessUnivariateStatistic::mids$ = NULL;
        bool AbstractStorelessUnivariateStatistic::live$ = false;

        jclass AbstractStorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_341cf16d0d9912f3] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractStorelessUnivariateStatistic::AbstractStorelessUnivariateStatistic() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void AbstractStorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic AbstractStorelessUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_341cf16d0d9912f3]));
        }

        jboolean AbstractStorelessUnivariateStatistic::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        jdouble AbstractStorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
        }

        jint AbstractStorelessUnivariateStatistic::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        void AbstractStorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
        }

        ::java::lang::String AbstractStorelessUnivariateStatistic::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_AbstractStorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractStorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractStorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, equals, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractStorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractStorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) t_AbstractStorelessUnivariateStatistic_init_ },
          { Py_tp_getset, t_AbstractStorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractStorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractStorelessUnivariateStatistic, t_AbstractStorelessUnivariateStatistic, AbstractStorelessUnivariateStatistic);

        void t_AbstractStorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractStorelessUnivariateStatistic), &PY_TYPE_DEF(AbstractStorelessUnivariateStatistic), module, "AbstractStorelessUnivariateStatistic", 0);
        }

        void t_AbstractStorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "class_", make_descriptor(AbstractStorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractStorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractStorelessUnivariateStatistic::wrap_Object(AbstractStorelessUnivariateStatistic(((t_AbstractStorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds)
        {
          AbstractStorelessUnivariateStatistic object((jobject) NULL);

          INT_CALL(object = AbstractStorelessUnivariateStatistic());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_StorelessUnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *StorelessCovariance::class$ = NULL;
        jmethodID *StorelessCovariance::mids$ = NULL;
        bool StorelessCovariance::live$ = false;

        jclass StorelessCovariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/StorelessCovariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_bc79bc153a2b3c2e] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_append_420411a03a672224] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/correlation/StorelessCovariance;)V");
            mids$[mid_getCovariance_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getCovariance", "(II)D");
            mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
            mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StorelessCovariance::StorelessCovariance(jint a0) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        StorelessCovariance::StorelessCovariance(jint a0, jboolean a1) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_bc79bc153a2b3c2e, a0, a1)) {}

        void StorelessCovariance::append(const StorelessCovariance & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_420411a03a672224], a0.this$);
        }

        jdouble StorelessCovariance::getCovariance(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovariance_a84e4ee1da3f1ab8], a0, a1);
        }

        ::org::hipparchus::linear::RealMatrix StorelessCovariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21]));
        }

        JArray< JArray< jdouble > > StorelessCovariance::getData() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
        }

        jint StorelessCovariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
        }

        void StorelessCovariance::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_ebc26dcaf4761286], a0.this$);
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
      namespace correlation {
        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self);
        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data);
        static PyGetSetDef t_StorelessCovariance__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessCovariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_StorelessCovariance, data),
          DECLARE_GET_FIELD(t_StorelessCovariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessCovariance__methods_[] = {
          DECLARE_METHOD(t_StorelessCovariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, append, METH_O),
          DECLARE_METHOD(t_StorelessCovariance, getCovariance, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getCovarianceMatrix, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getData, METH_NOARGS),
          DECLARE_METHOD(t_StorelessCovariance, getN, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessCovariance)[] = {
          { Py_tp_methods, t_StorelessCovariance__methods_ },
          { Py_tp_init, (void *) t_StorelessCovariance_init_ },
          { Py_tp_getset, t_StorelessCovariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessCovariance)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::correlation::Covariance),
          NULL
        };

        DEFINE_TYPE(StorelessCovariance, t_StorelessCovariance, StorelessCovariance);

        void t_StorelessCovariance::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessCovariance), &PY_TYPE_DEF(StorelessCovariance), module, "StorelessCovariance", 0);
        }

        void t_StorelessCovariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "class_", make_descriptor(StorelessCovariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "wrapfn_", make_descriptor(t_StorelessCovariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessCovariance::initializeClass, 1)))
            return NULL;
          return t_StorelessCovariance::wrap_Object(StorelessCovariance(((t_StorelessCovariance *) arg)->object.this$));
        }
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessCovariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = StorelessCovariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = StorelessCovariance(a0, a1));
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

        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg)
        {
          StorelessCovariance a0((jobject) NULL);

          if (!parseArg(arg, "k", StorelessCovariance::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovariance(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", args);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getCovarianceMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getCovarianceMatrix", args, 2);
        }

        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getN", args, 2);
        }

        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadataKey::class$ = NULL;
              jmethodID *OemMetadataKey::mids$ = NULL;
              bool OemMetadataKey::live$ = false;
              OemMetadataKey *OemMetadataKey::INTERPOLATION = NULL;
              OemMetadataKey *OemMetadataKey::INTERPOLATION_DEGREE = NULL;
              OemMetadataKey *OemMetadataKey::START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::STOP_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass OemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_6c751cb60f9d8c88] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)Z");
                  mids$[mid_valueOf_8806fdadd0e94dce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");
                  mids$[mid_values_0dd8cb95a2c1cba4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  INTERPOLATION = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  INTERPOLATION_DEGREE = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_6c751cb60f9d8c88], a0.this$, a1.this$, a2.this$);
              }

              OemMetadataKey OemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8806fdadd0e94dce], a0.this$));
              }

              JArray< OemMetadataKey > OemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0dd8cb95a2c1cba4]));
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
              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data);
              static PyGetSetDef t_OemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadataKey)[] = {
                { Py_tp_methods, t_OemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OemMetadataKey, t_OemMetadataKey, OemMetadataKey);
              PyObject *t_OemMetadataKey::wrap_Object(const OemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadataKey), &PY_TYPE_DEF(OemMetadataKey), module, "OemMetadataKey", 0);
              }

              void t_OemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "class_", make_descriptor(OemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "wrapfn_", make_descriptor(t_OemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OemMetadataKey::wrap_Object(OemMetadataKey(((t_OemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::valueOf(a0));
                  return t_OemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OemMetadataKey_values(PyTypeObject *type)
              {
                JArray< OemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OemMetadataKey::wrap_jobject);
              }
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data)
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
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalArgumentException::class$ = NULL;
      jmethodID *OrekitIllegalArgumentException::mids$ = NULL;
      bool OrekitIllegalArgumentException::live$ = false;

      jclass OrekitIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalArgumentException::OrekitIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data);
      static PyGetSetDef t_OrekitIllegalArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalArgumentException)[] = {
        { Py_tp_methods, t_OrekitIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalArgumentException_init_ },
        { Py_tp_getset, t_OrekitIllegalArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalArgumentException, t_OrekitIllegalArgumentException, OrekitIllegalArgumentException);

      void t_OrekitIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalArgumentException), &PY_TYPE_DEF(OrekitIllegalArgumentException), module, "OrekitIllegalArgumentException", 0);
      }

      void t_OrekitIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "class_", make_descriptor(OrekitIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "wrapfn_", make_descriptor(t_OrekitIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalArgumentException::wrap_Object(OrekitIllegalArgumentException(((t_OrekitIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalArgumentException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalArgumentException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
