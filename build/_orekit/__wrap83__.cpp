#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeRateBuilder::class$ = NULL;
          jmethodID *RangeRateBuilder::mids$ = NULL;
          bool RangeRateBuilder::live$ = false;

          jclass RangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a92f6cc352efc8e1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_811f33bfe2a2ca9d] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/RangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateBuilder::RangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_a92f6cc352efc8e1, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::RangeRate RangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::RangeRate(env->callObjectMethod(this$, mids$[mid_build_811f33bfe2a2ca9d], a0.this$, a1.this$));
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
          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args);
          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args);
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data);
          static PyGetSetDef t_RangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateBuilder)[] = {
            { Py_tp_methods, t_RangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeRateBuilder_init_ },
            { Py_tp_getset, t_RangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeRateBuilder, t_RangeRateBuilder, RangeRateBuilder);
          PyObject *t_RangeRateBuilder::wrap_Object(const RangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateBuilder), &PY_TYPE_DEF(RangeRateBuilder), module, "RangeRateBuilder", 0);
          }

          void t_RangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "class_", make_descriptor(RangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "wrapfn_", make_descriptor(t_RangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeRateBuilder::wrap_Object(RangeRateBuilder(((t_RangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::RangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_RangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data)
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
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *StationDisplacement::class$ = NULL;
          jmethodID *StationDisplacement::mids$ = NULL;
          bool StationDisplacement::live$ = false;

          jclass StationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/StationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_displacement_44ddfc2adc2cc28a] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D StationDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_44ddfc2adc2cc28a], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args);

          static PyMethodDef t_StationDisplacement__methods_[] = {
            DECLARE_METHOD(t_StationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StationDisplacement)[] = {
            { Py_tp_methods, t_StationDisplacement__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StationDisplacement, t_StationDisplacement, StationDisplacement);

          void t_StationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(StationDisplacement), &PY_TYPE_DEF(StationDisplacement), module, "StationDisplacement", 0);
          }

          void t_StationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "class_", make_descriptor(StationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "wrapfn_", make_descriptor(t_StationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StationDisplacement::initializeClass, 1)))
              return NULL;
            return t_StationDisplacement::wrap_Object(StationDisplacement(((t_StationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Patera2005::class$ = NULL;
              jmethodID *Patera2005::mids$ = NULL;
              bool Patera2005::live$ = false;

              jclass Patera2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_7f47577937f891c6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_a89d7889c8c6100d] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_91f4c05bf9eab1a6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Patera2005::Patera2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              Patera2005::Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_7f47577937f891c6, a0.this$, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Patera2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a89d7889c8c6100d], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Patera2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_91f4c05bf9eab1a6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Patera2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
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
              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data);
              static PyGetSetDef t_Patera2005__fields_[] = {
                DECLARE_GET_FIELD(t_Patera2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Patera2005__methods_[] = {
                DECLARE_METHOD(t_Patera2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Patera2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Patera2005)[] = {
                { Py_tp_methods, t_Patera2005__methods_ },
                { Py_tp_init, (void *) t_Patera2005_init_ },
                { Py_tp_getset, t_Patera2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Patera2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Patera2005, t_Patera2005, Patera2005);

              void t_Patera2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Patera2005), &PY_TYPE_DEF(Patera2005), module, "Patera2005", 0);
              }

              void t_Patera2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "class_", make_descriptor(Patera2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "wrapfn_", make_descriptor(t_Patera2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Patera2005::initializeClass, 1)))
                  return NULL;
                return t_Patera2005::wrap_Object(Patera2005(((t_Patera2005 *) arg)->object.this$));
              }
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Patera2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Patera2005 object((jobject) NULL);

                    INT_CALL(object = Patera2005());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
                    jint a1;
                    Patera2005 object((jobject) NULL);

                    if (!parseArgs(args, "kI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1))
                    {
                      INT_CALL(object = Patera2005(a0, a1));
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

              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 7:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Max::class$ = NULL;
          jmethodID *Max::mids$ = NULL;
          bool Max::live$ = false;

          jclass Max::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Max");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_6e05e842c4658502] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Max;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_bd3f8ff6bf744cb1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Max;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Max::Max() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Max::aggregate(const Max & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_6e05e842c4658502], a0.this$);
          }

          void Max::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Max Max::copy() const
          {
            return Max(env->callObjectMethod(this$, mids$[mid_copy_bd3f8ff6bf744cb1]));
          }

          jdouble Max::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong Max::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Max::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Max::increment(jdouble a0) const
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
        namespace rank {
          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg);
          static PyObject *t_Max_clear(t_Max *self, PyObject *args);
          static PyObject *t_Max_copy(t_Max *self, PyObject *args);
          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args);
          static PyObject *t_Max_getN(t_Max *self, PyObject *args);
          static PyObject *t_Max_getResult(t_Max *self, PyObject *args);
          static PyObject *t_Max_increment(t_Max *self, PyObject *args);
          static PyObject *t_Max_get__n(t_Max *self, void *data);
          static PyObject *t_Max_get__result(t_Max *self, void *data);
          static PyGetSetDef t_Max__fields_[] = {
            DECLARE_GET_FIELD(t_Max, n),
            DECLARE_GET_FIELD(t_Max, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Max__methods_[] = {
            DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, aggregate, METH_O),
            DECLARE_METHOD(t_Max, clear, METH_VARARGS),
            DECLARE_METHOD(t_Max, copy, METH_VARARGS),
            DECLARE_METHOD(t_Max, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Max, getN, METH_VARARGS),
            DECLARE_METHOD(t_Max, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Max, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
            { Py_tp_methods, t_Max__methods_ },
            { Py_tp_init, (void *) t_Max_init_ },
            { Py_tp_getset, t_Max__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Max)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Max, t_Max, Max);

          void t_Max::install(PyObject *module)
          {
            installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
          }

          void t_Max::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Max::initializeClass, 1)))
              return NULL;
            return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
          }
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Max::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
          {
            Max object((jobject) NULL);

            INT_CALL(object = Max());
            self->object = object;

            return 0;
          }

          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg)
          {
            Max a0((jobject) NULL);

            if (!parseArg(arg, "k", Max::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Max_clear(t_Max *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Max_copy(t_Max *self, PyObject *args)
          {
            Max result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Max::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args)
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

            return callSuper(PY_TYPE(Max), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Max_getN(t_Max *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Max_getResult(t_Max *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Max_increment(t_Max *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Max_get__n(t_Max *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Max_get__result(t_Max *self, void *data)
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
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *ValsecchiEncounterFrame::class$ = NULL;
        jmethodID *ValsecchiEncounterFrame::mids$ = NULL;
        bool ValsecchiEncounterFrame::live$ = false;

        jclass ValsecchiEncounterFrame::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/ValsecchiEncounterFrame");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b375bc79f588a172] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_433e87d544ab05d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_b6feed19a568aaff] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0c632cd592d334d1] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_b375bc79f588a172, a0.this$)) {}

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_433e87d544ab05d5, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a], a0.this$));
        }

        ::java::lang::String ValsecchiEncounterFrame::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_b6feed19a568aaff], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0c632cd592d334d1], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data);
        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data);
        static PyGetSetDef t_ValsecchiEncounterFrame__fields_[] = {
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ValsecchiEncounterFrame__methods_[] = {
          DECLARE_METHOD(t_ValsecchiEncounterFrame, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getName, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ValsecchiEncounterFrame)[] = {
          { Py_tp_methods, t_ValsecchiEncounterFrame__methods_ },
          { Py_tp_init, (void *) t_ValsecchiEncounterFrame_init_ },
          { Py_tp_getset, t_ValsecchiEncounterFrame__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ValsecchiEncounterFrame)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(ValsecchiEncounterFrame, t_ValsecchiEncounterFrame, ValsecchiEncounterFrame);

        void t_ValsecchiEncounterFrame::install(PyObject *module)
        {
          installType(&PY_TYPE(ValsecchiEncounterFrame), &PY_TYPE_DEF(ValsecchiEncounterFrame), module, "ValsecchiEncounterFrame", 0);
        }

        void t_ValsecchiEncounterFrame::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "class_", make_descriptor(ValsecchiEncounterFrame::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "wrapfn_", make_descriptor(t_ValsecchiEncounterFrame::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ValsecchiEncounterFrame::initializeClass, 1)))
            return NULL;
          return t_ValsecchiEncounterFrame::wrap_Object(ValsecchiEncounterFrame(((t_ValsecchiEncounterFrame *) arg)->object.this$));
        }
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ValsecchiEncounterFrame::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
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

        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args)
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

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args)
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

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *AbstractManeuverTriggers::class$ = NULL;
          jmethodID *AbstractManeuverTriggers::mids$ = NULL;
          bool AbstractManeuverTriggers::live$ = false;

          jclass AbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_5392838e44623505] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_8b21453ce137761f] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getFirings_d11c7ec0e313e33d] = env->getMethodID(cls, "getFirings", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_8083fb6b6fb5ee99] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_10e417873abbceb0] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_applyResetters_ed3fe207e6fde26f] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_applyResetters_59bc90ab93a43079] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_notifyResetters_b69b5541e48d21c0] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_notifyResetters_e90aea08a7a0ab5e] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_initializeResetters_357211ab77703f3f] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_initializeResetters_14deaae988292d42] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiringOnInitialState_145801f71fbbc869] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_5392838e44623505], a0.this$);
          }

          void AbstractManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_8b21453ce137761f], a0.this$, a1.this$);
          }

          ::org::orekit::utils::TimeSpanMap AbstractManeuverTriggers::getFirings() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getFirings_d11c7ec0e313e33d]));
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_8083fb6b6fb5ee99], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_10e417873abbceb0], a0.this$, a1.this$);
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self);
          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_AbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractManeuverTriggers, firings),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_AbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, getFirings, METH_NOARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_AbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractManeuverTriggers, t_AbstractManeuverTriggers, AbstractManeuverTriggers);

          void t_AbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractManeuverTriggers), &PY_TYPE_DEF(AbstractManeuverTriggers), module, "AbstractManeuverTriggers", 0);
          }

          void t_AbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "class_", make_descriptor(AbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "wrapfn_", make_descriptor(t_AbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_AbstractManeuverTriggers::wrap_Object(AbstractManeuverTriggers(((t_AbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Boolean));
          }

          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthITU453AtmosphereRefraction::class$ = NULL;
        jmethodID *EarthITU453AtmosphereRefraction::mids$ = NULL;
        bool EarthITU453AtmosphereRefraction::live$ = false;

        jclass EarthITU453AtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthITU453AtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getRefraction_bf28ed64d6e8576b] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTheta0_9981f74b2d109da6] = env->getMethodID(cls, "getTheta0", "()D");
            mids$[mid_getThetaMin_9981f74b2d109da6] = env->getMethodID(cls, "getThetaMin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthITU453AtmosphereRefraction::EarthITU453AtmosphereRefraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble EarthITU453AtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_bf28ed64d6e8576b], a0);
        }

        jdouble EarthITU453AtmosphereRefraction::getTheta0() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTheta0_9981f74b2d109da6]);
        }

        jdouble EarthITU453AtmosphereRefraction::getThetaMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThetaMin_9981f74b2d109da6]);
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
        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyGetSetDef t_EarthITU453AtmosphereRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, theta0),
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, thetaMin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthITU453AtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getTheta0, METH_NOARGS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getThetaMin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthITU453AtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthITU453AtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthITU453AtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthITU453AtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthITU453AtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthITU453AtmosphereRefraction, t_EarthITU453AtmosphereRefraction, EarthITU453AtmosphereRefraction);

        void t_EarthITU453AtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthITU453AtmosphereRefraction), &PY_TYPE_DEF(EarthITU453AtmosphereRefraction), module, "EarthITU453AtmosphereRefraction", 0);
        }

        void t_EarthITU453AtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "class_", make_descriptor(EarthITU453AtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthITU453AtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthITU453AtmosphereRefraction::wrap_Object(EarthITU453AtmosphereRefraction(((t_EarthITU453AtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EarthITU453AtmosphereRefraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EarthITU453AtmosphereRefraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTheta0());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThetaMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTheta0());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThetaMin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ParetoDistribution::class$ = NULL;
        jmethodID *ParetoDistribution::mids$ = NULL;
        bool ParetoDistribution::live$ = false;

        jclass ParetoDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ParetoDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_9981f74b2d109da6] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParetoDistribution::ParetoDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble ParetoDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble ParetoDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble ParetoDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble ParetoDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble ParetoDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble ParetoDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_9981f74b2d109da6]);
        }

        jdouble ParetoDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble ParetoDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean ParetoDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble ParetoDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data);
        static PyGetSetDef t_ParetoDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ParetoDistribution, scale),
          DECLARE_GET_FIELD(t_ParetoDistribution, shape),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParetoDistribution__methods_[] = {
          DECLARE_METHOD(t_ParetoDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParetoDistribution)[] = {
          { Py_tp_methods, t_ParetoDistribution__methods_ },
          { Py_tp_init, (void *) t_ParetoDistribution_init_ },
          { Py_tp_getset, t_ParetoDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParetoDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ParetoDistribution, t_ParetoDistribution, ParetoDistribution);

        void t_ParetoDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ParetoDistribution), &PY_TYPE_DEF(ParetoDistribution), module, "ParetoDistribution", 0);
        }

        void t_ParetoDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "class_", make_descriptor(ParetoDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "wrapfn_", make_descriptor(t_ParetoDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParetoDistribution::initializeClass, 1)))
            return NULL;
          return t_ParetoDistribution::wrap_Object(ParetoDistribution(((t_ParetoDistribution *) arg)->object.this$));
        }
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParetoDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ParetoDistribution object((jobject) NULL);

              INT_CALL(object = ParetoDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ParetoDistribution(a0, a1));
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
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ParetoDistribution(a0, a1, a2));
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

        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *Oem::class$ = NULL;
              jmethodID *Oem::mids$ = NULL;
              bool Oem::live$ = false;
              ::java::lang::String *Oem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Oem::ROOT = NULL;

              jclass Oem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/Oem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f1d722872d5900a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_checkTimeSystems_ff7cb6c242604316] = env->getMethodID(cls, "checkTimeSystems", "()V");
                  mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Oem::Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f1d722872d5900a5, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              void Oem::checkTimeSystems() const
              {
                env->callVoidMethod(this$, mids$[mid_checkTimeSystems_ff7cb6c242604316]);
              }

              ::java::util::Map Oem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args);
              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Oem_checkTimeSystems(t_Oem *self);
              static PyObject *t_Oem_getSatellites(t_Oem *self);
              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data);
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data);
              static PyGetSetDef t_Oem__fields_[] = {
                DECLARE_GET_FIELD(t_Oem, satellites),
                DECLARE_GET_FIELD(t_Oem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Oem__methods_[] = {
                DECLARE_METHOD(t_Oem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Oem, checkTimeSystems, METH_NOARGS),
                DECLARE_METHOD(t_Oem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Oem)[] = {
                { Py_tp_methods, t_Oem__methods_ },
                { Py_tp_init, (void *) t_Oem_init_ },
                { Py_tp_getset, t_Oem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Oem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Oem, t_Oem, Oem);
              PyObject *t_Oem::wrap_Object(const Oem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Oem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Oem::install(PyObject *module)
              {
                installType(&PY_TYPE(Oem), &PY_TYPE_DEF(Oem), module, "Oem", 0);
              }

              void t_Oem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "class_", make_descriptor(Oem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "wrapfn_", make_descriptor(t_Oem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Oem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Oem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "ROOT", make_descriptor(j2p(*Oem::ROOT)));
              }

              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Oem::initializeClass, 1)))
                  return NULL;
                return t_Oem::wrap_Object(Oem(((t_Oem *) arg)->object.this$));
              }
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Oem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Oem object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Oem(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Oem_checkTimeSystems(t_Oem *self)
              {
                OBJ_CALL(self->object.checkTimeSystems());
                Py_RETURN_NONE;
              }

              static PyObject *t_Oem_getSatellites(t_Oem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSatelliteEphemeris));
              }
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/Map.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSEstimator::class$ = NULL;
        jmethodID *BatchLSEstimator::mids$ = NULL;
        bool BatchLSEstimator::live$ = false;

        jclass BatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ee4d79a31166120] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");
            mids$[mid_addMeasurement_ccec3dc40c67aef1] = env->getMethodID(cls, "addMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
            mids$[mid_estimate_af093bf37101b796] = env->getMethodID(cls, "estimate", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getLastEstimations_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getLastEstimations", "()Ljava/util/Map;");
            mids$[mid_getMeasurementsParametersDrivers_abc0e43715b72da1] = env->getMethodID(cls, "getMeasurementsParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOptimum_e6c3e173aec0ba47] = env->getMethodID(cls, "getOptimum", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_getOrbitalParametersDrivers_abc0e43715b72da1] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalCovariances_d5a7c13c36e5009c] = env->getMethodID(cls, "getPhysicalCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagatorParametersDrivers_abc0e43715b72da1] = env->getMethodID(cls, "getPropagatorParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_setConvergenceChecker_3c3ab50d4a5913f8] = env->getMethodID(cls, "setConvergenceChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_setMaxEvaluations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
            mids$[mid_setMaxIterations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxIterations", "(I)V");
            mids$[mid_setObserver_9818f9ffb87bd135] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/leastsquares/BatchLSObserver;)V");
            mids$[mid_setParametersConvergenceThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setParametersConvergenceThreshold", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSEstimator::BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ee4d79a31166120, a0.this$, a1.this$)) {}

        void BatchLSEstimator::addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeasurement_ccec3dc40c67aef1], a0.this$);
        }

        JArray< ::org::orekit::propagation::Propagator > BatchLSEstimator::estimate() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimate_af093bf37101b796]));
        }

        jint BatchLSEstimator::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_d6ab429752e7c267]);
        }

        jint BatchLSEstimator::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_d6ab429752e7c267]);
        }

        ::java::util::Map BatchLSEstimator::getLastEstimations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getLastEstimations_dbcb8bbac6b35e0d]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getMeasurementsParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersDrivers_abc0e43715b72da1], a0));
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum BatchLSEstimator::getOptimum() const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_getOptimum_e6c3e173aec0ba47]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_abc0e43715b72da1], a0));
        }

        ::org::hipparchus::linear::RealMatrix BatchLSEstimator::getPhysicalCovariances(jdouble a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalCovariances_d5a7c13c36e5009c], a0));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getPropagatorParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagatorParametersDrivers_abc0e43715b72da1], a0));
        }

        void BatchLSEstimator::setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConvergenceChecker_3c3ab50d4a5913f8], a0.this$);
        }

        void BatchLSEstimator::setMaxEvaluations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_8fd427ab23829bf5], a0);
        }

        void BatchLSEstimator::setMaxIterations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxIterations_8fd427ab23829bf5], a0);
        }

        void BatchLSEstimator::setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_9818f9ffb87bd135], a0.this$);
        }

        void BatchLSEstimator::setParametersConvergenceThreshold(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParametersConvergenceThreshold_1ad26e8c8c0cd65b], a0);
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
        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg);
        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_BatchLSEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_BatchLSEstimator, convergenceChecker),
          DECLARE_GET_FIELD(t_BatchLSEstimator, evaluationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, iterationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, lastEstimations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxEvaluations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxIterations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, observer),
          DECLARE_GET_FIELD(t_BatchLSEstimator, optimum),
          DECLARE_SET_FIELD(t_BatchLSEstimator, parametersConvergenceThreshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_BatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, addMeasurement, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, estimate, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getLastEstimations, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getMeasurementsParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getOptimum, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPhysicalCovariances, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPropagatorParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setConvergenceChecker, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxEvaluations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxIterations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setObserver, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setParametersConvergenceThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSEstimator)[] = {
          { Py_tp_methods, t_BatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_BatchLSEstimator_init_ },
          { Py_tp_getset, t_BatchLSEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSEstimator, t_BatchLSEstimator, BatchLSEstimator);

        void t_BatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSEstimator), &PY_TYPE_DEF(BatchLSEstimator), module, "BatchLSEstimator", 0);
        }

        void t_BatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "class_", make_descriptor(BatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "wrapfn_", make_descriptor(t_BatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_BatchLSEstimator::wrap_Object(BatchLSEstimator(((t_BatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          BatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BatchLSEstimator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.addMeasurement(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeasurement", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimate());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getMeasurementsParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeasurementsParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPhysicalCovariances(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhysicalCovariances", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagatorParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagatorParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
          {
            OBJ_CALL(self->object.setConvergenceChecker(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConvergenceChecker", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxEvaluations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxIterations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxIterations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::leastsquares::BatchLSObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setParametersConvergenceThreshold(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParametersConvergenceThreshold", arg);
          return NULL;
        }

        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &value))
            {
              INT_CALL(self->object.setConvergenceChecker(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "convergenceChecker", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxEvaluations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxIterations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::leastsquares::BatchLSObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setParametersConvergenceThreshold(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parametersConvergenceThreshold", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *DuvenhageAlgorithm::class$ = NULL;
          jmethodID *DuvenhageAlgorithm::mids$ = NULL;
          bool DuvenhageAlgorithm::live$ = false;

          jclass DuvenhageAlgorithm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc67da27834a3e6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;IZ)V");
              mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
              mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
              mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
              mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DuvenhageAlgorithm::DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc67da27834a3e6b, a0.this$, a1, a2)) {}

          ::org::orekit::rugged::api::AlgorithmId DuvenhageAlgorithm::getAlgorithmId() const
          {
            return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
          }

          jdouble DuvenhageAlgorithm::getElevation(jdouble a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getElevation_82f92590f4247da1], a0, a1);
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_5c14acfe95406f7d], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_1feab13663326a32], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self);
          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data);
          static PyGetSetDef t_DuvenhageAlgorithm__fields_[] = {
            DECLARE_GET_FIELD(t_DuvenhageAlgorithm, algorithmId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DuvenhageAlgorithm__methods_[] = {
            DECLARE_METHOD(t_DuvenhageAlgorithm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getAlgorithmId, METH_NOARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getElevation, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, intersection, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, refineIntersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DuvenhageAlgorithm)[] = {
            { Py_tp_methods, t_DuvenhageAlgorithm__methods_ },
            { Py_tp_init, (void *) t_DuvenhageAlgorithm_init_ },
            { Py_tp_getset, t_DuvenhageAlgorithm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DuvenhageAlgorithm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DuvenhageAlgorithm, t_DuvenhageAlgorithm, DuvenhageAlgorithm);

          void t_DuvenhageAlgorithm::install(PyObject *module)
          {
            installType(&PY_TYPE(DuvenhageAlgorithm), &PY_TYPE_DEF(DuvenhageAlgorithm), module, "DuvenhageAlgorithm", 0);
          }

          void t_DuvenhageAlgorithm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "class_", make_descriptor(DuvenhageAlgorithm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "wrapfn_", make_descriptor(t_DuvenhageAlgorithm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DuvenhageAlgorithm::initializeClass, 1)))
              return NULL;
            return t_DuvenhageAlgorithm::wrap_Object(DuvenhageAlgorithm(((t_DuvenhageAlgorithm *) arg)->object.this$));
          }
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DuvenhageAlgorithm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
            jint a1;
            jboolean a2;
            DuvenhageAlgorithm object((jobject) NULL);

            if (!parseArgs(args, "kIZ", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = DuvenhageAlgorithm(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self)
          {
            ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
          }

          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getElevation", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1, a2));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data)
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *IntegerDistribution::class$ = NULL;
      jmethodID *IntegerDistribution::mids$ = NULL;
      bool IntegerDistribution::live$ = false;

      jclass IntegerDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/IntegerDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
          mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
          mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
          mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
          mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
          mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");
          mids$[mid_probability_6d920aab27f0a3d2] = env->getMethodID(cls, "probability", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IntegerDistribution::cumulativeProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
      }

      jdouble IntegerDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
      }

      jdouble IntegerDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
      }

      jint IntegerDistribution::getSupportLowerBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
      }

      jint IntegerDistribution::getSupportUpperBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
      }

      jint IntegerDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb], a0);
      }

      jboolean IntegerDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
      }

      jdouble IntegerDistribution::logProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
      }

      jdouble IntegerDistribution::probability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
      }

      jdouble IntegerDistribution::probability(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_6d920aab27f0a3d2], a0, a1);
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
      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args);
      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data);
      static PyGetSetDef t_IntegerDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalMean),
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportConnected),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IntegerDistribution__methods_[] = {
        DECLARE_METHOD(t_IntegerDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, logProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntegerDistribution)[] = {
        { Py_tp_methods, t_IntegerDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IntegerDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntegerDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntegerDistribution, t_IntegerDistribution, IntegerDistribution);

      void t_IntegerDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(IntegerDistribution), &PY_TYPE_DEF(IntegerDistribution), module, "IntegerDistribution", 0);
      }

      void t_IntegerDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "class_", make_descriptor(IntegerDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "wrapfn_", make_descriptor(t_IntegerDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntegerDistribution::initializeClass, 1)))
          return NULL;
        return t_IntegerDistribution::wrap_Object(IntegerDistribution(((t_IntegerDistribution *) arg)->object.this$));
      }
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntegerDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.logProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jdouble result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.probability(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.probability(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertiaAxis::class$ = NULL;
      jmethodID *FieldInertiaAxis::mids$ = NULL;
      bool FieldInertiaAxis::live$ = false;

      jclass FieldInertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2ca3d0f9cc0458ff] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_getA_d1b42a6748e907f9] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_negate_7fbf812b0f49865b] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/FieldInertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldInertiaAxis::FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ca3d0f9cc0458ff, a0.this$, a1.this$)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getA_d1b42a6748e907f9]));
      }

      ::org::hipparchus::CalculusFieldElement FieldInertiaAxis::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      FieldInertiaAxis FieldInertiaAxis::negate() const
      {
        return FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_7fbf812b0f49865b]));
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
      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args);
      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data);
      static PyGetSetDef t_FieldInertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertiaAxis, a),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, i),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertiaAxis__methods_[] = {
        DECLARE_METHOD(t_FieldInertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertiaAxis)[] = {
        { Py_tp_methods, t_FieldInertiaAxis__methods_ },
        { Py_tp_init, (void *) t_FieldInertiaAxis_init_ },
        { Py_tp_getset, t_FieldInertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertiaAxis, t_FieldInertiaAxis, FieldInertiaAxis);
      PyObject *t_FieldInertiaAxis::wrap_Object(const FieldInertiaAxis& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertiaAxis::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertiaAxis), &PY_TYPE_DEF(FieldInertiaAxis), module, "FieldInertiaAxis", 0);
      }

      void t_FieldInertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "class_", make_descriptor(FieldInertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "wrapfn_", make_descriptor(t_FieldInertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertiaAxis::initializeClass, 1)))
          return NULL;
        return t_FieldInertiaAxis::wrap_Object(FieldInertiaAxis(((t_FieldInertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        FieldInertiaAxis object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          INT_CALL(object = FieldInertiaAxis(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self)
      {
        FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_78a50d687cd6d58b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getObjectiveFunction_70756b76e7e5e9dc] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateObjectiveFunction::UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78a50d687cd6d58b, a0.this$)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariateObjectiveFunction::getObjectiveFunction() const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_70756b76e7e5e9dc]));
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1240::class$ = NULL;
              jmethodID *Rtcm1240::mids$ = NULL;
              bool Rtcm1240::live$ = false;

              jclass Rtcm1240::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1240::Rtcm1240(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args);
              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data);
              static PyGetSetDef t_Rtcm1240__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1240, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1240__methods_[] = {
                DECLARE_METHOD(t_Rtcm1240, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1240)[] = {
                { Py_tp_methods, t_Rtcm1240__methods_ },
                { Py_tp_init, (void *) t_Rtcm1240_init_ },
                { Py_tp_getset, t_Rtcm1240__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1240)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1240, t_Rtcm1240, Rtcm1240);
              PyObject *t_Rtcm1240::wrap_Object(const Rtcm1240& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1240::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1240::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1240), &PY_TYPE_DEF(Rtcm1240), module, "Rtcm1240", 0);
              }

              void t_Rtcm1240::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "class_", make_descriptor(Rtcm1240::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "wrapfn_", make_descriptor(t_Rtcm1240::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1240::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1240::wrap_Object(Rtcm1240(((t_Rtcm1240 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1240::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1240 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1240(a0, a1, a2));
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
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesPhaseBuilder::class$ = NULL;
          jmethodID *InterSatellitesPhaseBuilder::mids$ = NULL;
          bool InterSatellitesPhaseBuilder::live$ = false;

          jclass InterSatellitesPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e19b999c1386068d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;DDD)V");
              mids$[mid_build_0114763a92169f96] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseBuilder::InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jdouble a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_e19b999c1386068d, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase InterSatellitesPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase(env->callObjectMethod(this$, mids$[mid_build_0114763a92169f96], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseBuilder, t_InterSatellitesPhaseBuilder, InterSatellitesPhaseBuilder);
          PyObject *t_InterSatellitesPhaseBuilder::wrap_Object(const InterSatellitesPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseBuilder), &PY_TYPE_DEF(InterSatellitesPhaseBuilder), module, "InterSatellitesPhaseBuilder", 0);
          }

          void t_InterSatellitesPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "class_", make_descriptor(InterSatellitesPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "wrapfn_", make_descriptor(t_InterSatellitesPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseBuilder::wrap_Object(InterSatellitesPhaseBuilder(((t_InterSatellitesPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesPhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesPhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureProcessingState::class$ = NULL;
          jmethodID *XmlStructureProcessingState::mids$ = NULL;
          bool XmlStructureProcessingState::live$ = false;

          jclass XmlStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_85121a32da4ddc65] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          XmlStructureProcessingState::XmlStructureProcessingState(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85121a32da4ddc65, a0.this$, a1.this$)) {}

          jboolean XmlStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_XmlStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_XmlStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureProcessingState)[] = {
            { Py_tp_methods, t_XmlStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_XmlStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(XmlStructureProcessingState, t_XmlStructureProcessingState, XmlStructureProcessingState);

          void t_XmlStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureProcessingState), &PY_TYPE_DEF(XmlStructureProcessingState), module, "XmlStructureProcessingState", 0);
          }

          void t_XmlStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "class_", make_descriptor(XmlStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "wrapfn_", make_descriptor(t_XmlStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_XmlStructureProcessingState::wrap_Object(XmlStructureProcessingState(((t_XmlStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            XmlStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = XmlStructureProcessingState(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg)
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
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Inverse::class$ = NULL;
        jmethodID *Inverse::mids$ = NULL;
        bool Inverse::live$ = false;

        jclass Inverse::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Inverse");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Inverse::Inverse() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Inverse::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Inverse::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args);

        static PyMethodDef t_Inverse__methods_[] = {
          DECLARE_METHOD(t_Inverse, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Inverse)[] = {
          { Py_tp_methods, t_Inverse__methods_ },
          { Py_tp_init, (void *) t_Inverse_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Inverse)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Inverse, t_Inverse, Inverse);

        void t_Inverse::install(PyObject *module)
        {
          installType(&PY_TYPE(Inverse), &PY_TYPE_DEF(Inverse), module, "Inverse", 0);
        }

        void t_Inverse::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "class_", make_descriptor(Inverse::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "wrapfn_", make_descriptor(t_Inverse::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Inverse::initializeClass, 1)))
            return NULL;
          return t_Inverse::wrap_Object(Inverse(((t_Inverse *) arg)->object.this$));
        }
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Inverse::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds)
        {
          Inverse object((jobject) NULL);

          INT_CALL(object = Inverse());
          self->object = object;

          return 0;
        }

        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args)
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
#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *AbstractRuleFactory::class$ = NULL;
          jmethodID *AbstractRuleFactory::mids$ = NULL;
          bool AbstractRuleFactory::live$ = false;

          jclass AbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/AbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getRule_c07c8b9364272960] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_cb233caa0bd3470a] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/UnivariateFunction;)[D");
              mids$[mid_enforceSymmetry_a71c45509eaf92d1] = env->getMethodID(cls, "enforceSymmetry", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRuleFactory::AbstractRuleFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::util::Pair AbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_c07c8b9364272960], a0));
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
          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg);

          static PyMethodDef t_AbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_AbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRuleFactory)[] = {
            { Py_tp_methods, t_AbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_AbstractRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRuleFactory, t_AbstractRuleFactory, AbstractRuleFactory);

          void t_AbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRuleFactory), &PY_TYPE_DEF(AbstractRuleFactory), module, "AbstractRuleFactory", 0);
          }

          void t_AbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "class_", make_descriptor(AbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "wrapfn_", make_descriptor(t_AbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_AbstractRuleFactory::wrap_Object(AbstractRuleFactory(((t_AbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            AbstractRuleFactory object((jobject) NULL);

            INT_CALL(object = AbstractRuleFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *Dfp::class$ = NULL;
      jmethodID *Dfp::mids$ = NULL;
      bool Dfp::live$ = false;
      jint Dfp::ERR_SCALE = (jint) 0;
      jbyte Dfp::FINITE = (jbyte) 0;
      jbyte Dfp::INFINITE$ = (jbyte) 0;
      jint Dfp::MAX_EXP = (jint) 0;
      jint Dfp::MIN_EXP = (jint) 0;
      jbyte Dfp::QNAN = (jbyte) 0;
      jint Dfp::RADIX = (jint) 0;
      jbyte Dfp::SNAN$ = (jbyte) 0;

      jclass Dfp::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/Dfp");

          mids$ = new jmethodID[max_mid];
          mids$[mid_abs_4b2d5e048d6e2660] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acos_4b2d5e048d6e2660] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acosh_4b2d5e048d6e2660] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_f4723517f29214b4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_e99ab98f8c6bb318] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_4b2d5e048d6e2660] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asinh_4b2d5e048d6e2660] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_4b2d5e048d6e2660] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan2_f4723517f29214b4] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanh_4b2d5e048d6e2660] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cbrt_4b2d5e048d6e2660] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_ceil_4b2d5e048d6e2660] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_classify_d6ab429752e7c267] = env->getMethodID(cls, "classify", "()I");
          mids$[mid_copySign_f4723517f29214b4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copySign_e99ab98f8c6bb318] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copysign_6c69a9f186dcd94b] = env->getStaticMethodID(cls, "copysign", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_4b2d5e048d6e2660] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosh_4b2d5e048d6e2660] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_f4723517f29214b4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_e99ab98f8c6bb318] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_c17cec9f6bbb62d4] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dotrap_9620c0046f4eef7c] = env->getMethodID(cls, "dotrap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_4b2d5e048d6e2660] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expm1_4b2d5e048d6e2660] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_floor_4b2d5e048d6e2660] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
          mids$[mid_getField_91eaecf9b002e996] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getOne_4b2d5e048d6e2660] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_4b2d5e048d6e2660] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_d6ab429752e7c267] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getTwo_4b2d5e048d6e2660] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_4b2d5e048d6e2660] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_greaterThan_d403dcab6dc91191] = env->getMethodID(cls, "greaterThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_f4723517f29214b4] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_intLog10_d6ab429752e7c267] = env->getMethodID(cls, "intLog10", "()I");
          mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_eee3de00fe971136] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_lessThan_d403dcab6dc91191] = env->getMethodID(cls, "lessThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_linearCombination_ffad361cc4180cb8] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_bfd89b9a29814844] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_9b546149c4f8f90b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_4ce49b71e499ce54] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_709b840a4d3a30b0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_f1d991282feb9cd0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_9aefc3df123c4248] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_dcdcb1fd614ea595] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_4b2d5e048d6e2660] = env->getMethodID(cls, "log", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10_4b2d5e048d6e2660] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10K_d6ab429752e7c267] = env->getMethodID(cls, "log10K", "()I");
          mids$[mid_log1p_4b2d5e048d6e2660] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_f4723517f29214b4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_e99ab98f8c6bb318] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_c17cec9f6bbb62d4] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negate_4b2d5e048d6e2660] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negativeOrNull_eee3de00fe971136] = env->getMethodID(cls, "negativeOrNull", "()Z");
          mids$[mid_newInstance_4b2d5e048d6e2660] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_d41bacfbb0036b2f] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f4723517f29214b4] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_d026e8379de654e0] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_e99ab98f8c6bb318] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_c17cec9f6bbb62d4] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_9e2bf41ef3516323] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_92cf0acc3fd2ce13] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/DfpField;Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_1a6c1bff63409b1a] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f4723517f29214b4] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_positiveOrNull_eee3de00fe971136] = env->getMethodID(cls, "positiveOrNull", "()Z");
          mids$[mid_pow_f4723517f29214b4] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_e99ab98f8c6bb318] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_c17cec9f6bbb62d4] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10_c17cec9f6bbb62d4] = env->getMethodID(cls, "power10", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10K_c17cec9f6bbb62d4] = env->getMethodID(cls, "power10K", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_reciprocal_4b2d5e048d6e2660] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_f4723517f29214b4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_e99ab98f8c6bb318] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rint_4b2d5e048d6e2660] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rootN_c17cec9f6bbb62d4] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_scalb_c17cec9f6bbb62d4] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sign_4b2d5e048d6e2660] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_4b2d5e048d6e2660] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_4b2d5e048d6e2660] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_4b2d5e048d6e2660] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_strictlyNegative_eee3de00fe971136] = env->getMethodID(cls, "strictlyNegative", "()Z");
          mids$[mid_strictlyPositive_eee3de00fe971136] = env->getMethodID(cls, "strictlyPositive", "()Z");
          mids$[mid_subtract_f4723517f29214b4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_subtract_e99ab98f8c6bb318] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_4b2d5e048d6e2660] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tanh_4b2d5e048d6e2660] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDegrees_4b2d5e048d6e2660] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDouble_9981f74b2d109da6] = env->getMethodID(cls, "toDouble", "()D");
          mids$[mid_toRadians_4b2d5e048d6e2660] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toSplitDouble_be783177b060994b] = env->getMethodID(cls, "toSplitDouble", "()[D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_4b2d5e048d6e2660] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_unequal_d403dcab6dc91191] = env->getMethodID(cls, "unequal", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_complement_d938fc64e8c6df2d] = env->getMethodID(cls, "complement", "(I)I");
          mids$[mid_shiftRight_ff7cb6c242604316] = env->getMethodID(cls, "shiftRight", "()V");
          mids$[mid_align_d938fc64e8c6df2d] = env->getMethodID(cls, "align", "(I)I");
          mids$[mid_trunc_d98215d47b874569] = env->getMethodID(cls, "trunc", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dfp2sci_d2c8eb4129821f0e] = env->getMethodID(cls, "dfp2sci", "()Ljava/lang/String;");
          mids$[mid_dfp2string_d2c8eb4129821f0e] = env->getMethodID(cls, "dfp2string", "()Ljava/lang/String;");
          mids$[mid_trap_765b9e897eb65782] = env->getMethodID(cls, "trap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_shiftLeft_ff7cb6c242604316] = env->getMethodID(cls, "shiftLeft", "()V");
          mids$[mid_round_d938fc64e8c6df2d] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ERR_SCALE = env->getStaticIntField(cls, "ERR_SCALE");
          FINITE = env->getStaticByteField(cls, "FINITE");
          INFINITE$ = env->getStaticByteField(cls, "INFINITE");
          MAX_EXP = env->getStaticIntField(cls, "MAX_EXP");
          MIN_EXP = env->getStaticIntField(cls, "MIN_EXP");
          QNAN = env->getStaticByteField(cls, "QNAN");
          RADIX = env->getStaticIntField(cls, "RADIX");
          SNAN$ = env->getStaticByteField(cls, "SNAN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Dfp Dfp::abs() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_abs_4b2d5e048d6e2660]));
      }

      Dfp Dfp::acos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acos_4b2d5e048d6e2660]));
      }

      Dfp Dfp::acosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acosh_4b2d5e048d6e2660]));
      }

      Dfp Dfp::add(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::add(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::asin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asin_4b2d5e048d6e2660]));
      }

      Dfp Dfp::asinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asinh_4b2d5e048d6e2660]));
      }

      Dfp Dfp::atan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan_4b2d5e048d6e2660]));
      }

      Dfp Dfp::atan2(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan2_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::atanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atanh_4b2d5e048d6e2660]));
      }

      Dfp Dfp::cbrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cbrt_4b2d5e048d6e2660]));
      }

      Dfp Dfp::ceil() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ceil_4b2d5e048d6e2660]));
      }

      jint Dfp::classify() const
      {
        return env->callIntMethod(this$, mids$[mid_classify_d6ab429752e7c267]);
      }

      Dfp Dfp::copySign(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::copySign(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::copysign(const Dfp & a0, const Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Dfp(env->callStaticObjectMethod(cls, mids$[mid_copysign_6c69a9f186dcd94b], a0.this$, a1.this$));
      }

      Dfp Dfp::cos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cos_4b2d5e048d6e2660]));
      }

      Dfp Dfp::cosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cosh_4b2d5e048d6e2660]));
      }

      Dfp Dfp::divide(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::divide(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::divide(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::dotrap(jint a0, const ::java::lang::String & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_dotrap_9620c0046f4eef7c], a0, a1.this$, a2.this$, a3.this$));
      }

      jboolean Dfp::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      Dfp Dfp::exp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_exp_4b2d5e048d6e2660]));
      }

      Dfp Dfp::expm1() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_expm1_4b2d5e048d6e2660]));
      }

      Dfp Dfp::floor() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_floor_4b2d5e048d6e2660]));
      }

      jint Dfp::getExponent() const
      {
        return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
      }

      ::org::hipparchus::dfp::DfpField Dfp::getField() const
      {
        return ::org::hipparchus::dfp::DfpField(env->callObjectMethod(this$, mids$[mid_getField_91eaecf9b002e996]));
      }

      Dfp Dfp::getOne() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getOne_4b2d5e048d6e2660]));
      }

      Dfp Dfp::getPi() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getPi_4b2d5e048d6e2660]));
      }

      jint Dfp::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_d6ab429752e7c267]);
      }

      jdouble Dfp::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      Dfp Dfp::getTwo() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_4b2d5e048d6e2660]));
      }

      Dfp Dfp::getZero() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getZero_4b2d5e048d6e2660]));
      }

      jboolean Dfp::greaterThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_greaterThan_d403dcab6dc91191], a0.this$);
      }

      jint Dfp::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      Dfp Dfp::hypot(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_hypot_f4723517f29214b4], a0.this$));
      }

      jint Dfp::intLog10() const
      {
        return env->callIntMethod(this$, mids$[mid_intLog10_d6ab429752e7c267]);
      }

      jint Dfp::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
      }

      jboolean Dfp::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean Dfp::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      jboolean Dfp::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_eee3de00fe971136]);
      }

      jboolean Dfp::lessThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_lessThan_d403dcab6dc91191], a0.this$);
      }

      Dfp Dfp::linearCombination(const JArray< jdouble > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_ffad361cc4180cb8], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const JArray< Dfp > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_bfd89b9a29814844], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_9b546149c4f8f90b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_4ce49b71e499ce54], a0, a1.this$, a2, a3.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_709b840a4d3a30b0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_f1d991282feb9cd0], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5, const Dfp & a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_9aefc3df123c4248], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5, jdouble a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_dcdcb1fd614ea595], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Dfp Dfp::log() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log_4b2d5e048d6e2660]));
      }

      Dfp Dfp::log10() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log10_4b2d5e048d6e2660]));
      }

      jint Dfp::log10K() const
      {
        return env->callIntMethod(this$, mids$[mid_log10K_d6ab429752e7c267]);
      }

      Dfp Dfp::log1p() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log1p_4b2d5e048d6e2660]));
      }

      Dfp Dfp::multiply(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::multiply(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::multiply(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::negate() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_negate_4b2d5e048d6e2660]));
      }

      jboolean Dfp::negativeOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_negativeOrNull_eee3de00fe971136]);
      }

      Dfp Dfp::newInstance() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_4b2d5e048d6e2660]));
      }

      Dfp Dfp::newInstance(const ::java::lang::String & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_d41bacfbb0036b2f], a0.this$));
      }

      Dfp Dfp::newInstance(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::newInstance(jbyte a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_d026e8379de654e0], a0));
      }

      Dfp Dfp::newInstance(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::newInstance(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::newInstance(jlong a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_9e2bf41ef3516323], a0));
      }

      Dfp Dfp::newInstance(const ::org::hipparchus::dfp::DfpField & a0, const ::org::hipparchus::dfp::DfpField$RoundingMode & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_92cf0acc3fd2ce13], a0.this$, a1.this$));
      }

      Dfp Dfp::newInstance(jbyte a0, jbyte a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_1a6c1bff63409b1a], a0, a1));
      }

      Dfp Dfp::nextAfter(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f4723517f29214b4], a0.this$));
      }

      jboolean Dfp::positiveOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_positiveOrNull_eee3de00fe971136]);
      }

      Dfp Dfp::pow(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::pow(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::pow(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::power10(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::power10K(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10K_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::reciprocal() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_reciprocal_4b2d5e048d6e2660]));
      }

      Dfp Dfp::remainder(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::remainder(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::rint() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rint_4b2d5e048d6e2660]));
      }

      Dfp Dfp::rootN(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rootN_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::scalb(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_scalb_c17cec9f6bbb62d4], a0));
      }

      Dfp Dfp::sign() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sign_4b2d5e048d6e2660]));
      }

      Dfp Dfp::sin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sin_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::util::FieldSinCos Dfp::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      Dfp Dfp::sinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sinh_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::util::FieldSinhCosh Dfp::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      Dfp Dfp::sqrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sqrt_4b2d5e048d6e2660]));
      }

      jboolean Dfp::strictlyNegative() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyNegative_eee3de00fe971136]);
      }

      jboolean Dfp::strictlyPositive() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyPositive_eee3de00fe971136]);
      }

      Dfp Dfp::subtract(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_f4723517f29214b4], a0.this$));
      }

      Dfp Dfp::subtract(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_e99ab98f8c6bb318], a0));
      }

      Dfp Dfp::tan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tan_4b2d5e048d6e2660]));
      }

      Dfp Dfp::tanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tanh_4b2d5e048d6e2660]));
      }

      Dfp Dfp::toDegrees() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toDegrees_4b2d5e048d6e2660]));
      }

      jdouble Dfp::toDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_toDouble_9981f74b2d109da6]);
      }

      Dfp Dfp::toRadians() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toRadians_4b2d5e048d6e2660]));
      }

      JArray< jdouble > Dfp::toSplitDouble() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toSplitDouble_be783177b060994b]));
      }

      ::java::lang::String Dfp::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      Dfp Dfp::ulp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ulp_4b2d5e048d6e2660]));
      }

      jboolean Dfp::unequal(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_unequal_d403dcab6dc91191], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_abs(t_Dfp *self);
      static PyObject *t_Dfp_acos(t_Dfp *self);
      static PyObject *t_Dfp_acosh(t_Dfp *self);
      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_asin(t_Dfp *self);
      static PyObject *t_Dfp_asinh(t_Dfp *self);
      static PyObject *t_Dfp_atan(t_Dfp *self);
      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_atanh(t_Dfp *self);
      static PyObject *t_Dfp_cbrt(t_Dfp *self);
      static PyObject *t_Dfp_ceil(t_Dfp *self);
      static PyObject *t_Dfp_classify(t_Dfp *self);
      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args);
      static PyObject *t_Dfp_cos(t_Dfp *self);
      static PyObject *t_Dfp_cosh(t_Dfp *self);
      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_exp(t_Dfp *self);
      static PyObject *t_Dfp_expm1(t_Dfp *self);
      static PyObject *t_Dfp_floor(t_Dfp *self);
      static PyObject *t_Dfp_getExponent(t_Dfp *self);
      static PyObject *t_Dfp_getField(t_Dfp *self);
      static PyObject *t_Dfp_getOne(t_Dfp *self);
      static PyObject *t_Dfp_getPi(t_Dfp *self);
      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self);
      static PyObject *t_Dfp_getReal(t_Dfp *self);
      static PyObject *t_Dfp_getTwo(t_Dfp *self);
      static PyObject *t_Dfp_getZero(t_Dfp *self);
      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_intLog10(t_Dfp *self);
      static PyObject *t_Dfp_intValue(t_Dfp *self);
      static PyObject *t_Dfp_isInfinite(t_Dfp *self);
      static PyObject *t_Dfp_isNaN(t_Dfp *self);
      static PyObject *t_Dfp_isZero(t_Dfp *self);
      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_log(t_Dfp *self);
      static PyObject *t_Dfp_log10(t_Dfp *self);
      static PyObject *t_Dfp_log10K(t_Dfp *self);
      static PyObject *t_Dfp_log1p(t_Dfp *self);
      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_negate(t_Dfp *self);
      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self);
      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self);
      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_reciprocal(t_Dfp *self);
      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_rint(t_Dfp *self);
      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_sign(t_Dfp *self);
      static PyObject *t_Dfp_sin(t_Dfp *self);
      static PyObject *t_Dfp_sinCos(t_Dfp *self);
      static PyObject *t_Dfp_sinh(t_Dfp *self);
      static PyObject *t_Dfp_sinhCosh(t_Dfp *self);
      static PyObject *t_Dfp_sqrt(t_Dfp *self);
      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self);
      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self);
      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_tan(t_Dfp *self);
      static PyObject *t_Dfp_tanh(t_Dfp *self);
      static PyObject *t_Dfp_toDegrees(t_Dfp *self);
      static PyObject *t_Dfp_toDouble(t_Dfp *self);
      static PyObject *t_Dfp_toRadians(t_Dfp *self);
      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self);
      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_ulp(t_Dfp *self);
      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data);
      static PyGetSetDef t_Dfp__fields_[] = {
        DECLARE_GET_FIELD(t_Dfp, exponent),
        DECLARE_GET_FIELD(t_Dfp, field),
        DECLARE_GET_FIELD(t_Dfp, infinite),
        DECLARE_GET_FIELD(t_Dfp, naN),
        DECLARE_GET_FIELD(t_Dfp, one),
        DECLARE_GET_FIELD(t_Dfp, pi),
        DECLARE_GET_FIELD(t_Dfp, radixDigits),
        DECLARE_GET_FIELD(t_Dfp, real),
        DECLARE_GET_FIELD(t_Dfp, two),
        DECLARE_GET_FIELD(t_Dfp, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Dfp__methods_[] = {
        DECLARE_METHOD(t_Dfp, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, abs, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, add, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, asin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan2, METH_O),
        DECLARE_METHOD(t_Dfp, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, classify, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, copysign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Dfp, cos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, divide, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, dotrap, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, equals, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, exp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, floor, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getExponent, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getField, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, greaterThan, METH_O),
        DECLARE_METHOD(t_Dfp, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, hypot, METH_O),
        DECLARE_METHOD(t_Dfp, intLog10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, intValue, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, lessThan, METH_O),
        DECLARE_METHOD(t_Dfp, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, log, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10K, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, negate, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, negativeOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, nextAfter, METH_O),
        DECLARE_METHOD(t_Dfp, positiveOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, pow, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, power10, METH_O),
        DECLARE_METHOD(t_Dfp, power10K, METH_O),
        DECLARE_METHOD(t_Dfp, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, rint, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, rootN, METH_O),
        DECLARE_METHOD(t_Dfp, scalb, METH_O),
        DECLARE_METHOD(t_Dfp, sign, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyNegative, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyPositive, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, tan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toSplitDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toString, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, unequal, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Dfp)[] = {
        { Py_tp_methods, t_Dfp__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Dfp__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Dfp)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Dfp, t_Dfp, Dfp);

      void t_Dfp::install(PyObject *module)
      {
        installType(&PY_TYPE(Dfp), &PY_TYPE_DEF(Dfp), module, "Dfp", 0);
      }

      void t_Dfp::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "class_", make_descriptor(Dfp::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "wrapfn_", make_descriptor(t_Dfp::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "boxfn_", make_descriptor(boxObject));
        env->getClass(Dfp::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "ERR_SCALE", make_descriptor(Dfp::ERR_SCALE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "FINITE", make_descriptor(Dfp::FINITE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "INFINITE", make_descriptor(Dfp::INFINITE$));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MAX_EXP", make_descriptor(Dfp::MAX_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MIN_EXP", make_descriptor(Dfp::MIN_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "QNAN", make_descriptor(Dfp::QNAN));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "RADIX", make_descriptor(Dfp::RADIX));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "SNAN", make_descriptor(Dfp::SNAN$));
      }

      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Dfp::initializeClass, 1)))
          return NULL;
        return t_Dfp::wrap_Object(Dfp(((t_Dfp *) arg)->object.this$));
      }
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Dfp::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Dfp_abs(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Dfp_asin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_asinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Dfp_atanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cbrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_ceil(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_classify(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.classify());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args)
      {
        Dfp a0((jobject) NULL);
        Dfp a1((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::Dfp::copysign(a0, a1));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "copysign", args);
        return NULL;
      }

      static PyObject *t_Dfp_cos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args)
      {
        jint a0;
        ::java::lang::String a1((jobject) NULL);
        Dfp a2((jobject) NULL);
        Dfp a3((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "Iskk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.dotrap(a0, a1, a2, a3));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotrap", args);
        return NULL;
      }

      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Dfp_exp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_expm1(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_floor(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getExponent(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getExponent());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getField(t_Dfp *self)
      {
        ::org::hipparchus::dfp::DfpField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(result);
      }

      static PyObject *t_Dfp_getOne(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getPi(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getReal(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_getTwo(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getZero(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.greaterThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "greaterThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Dfp_intLog10(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intLog10());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_intValue(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_isInfinite(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isNaN(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isZero(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.lessThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "lessThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            JArray< Dfp > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp a6((jobject) NULL);
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            jdouble a6;
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Dfp_log(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10K(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.log10K());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_log1p(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Dfp_negate(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.negativeOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::dfp::DfpField a0((jobject) NULL);
            ::org::hipparchus::dfp::DfpField$RoundingMode a1((jobject) NULL);
            PyTypeObject **p1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::hipparchus::dfp::DfpField::initializeClass, ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            jbyte a1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", args);
        return NULL;
      }

      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextAfter", arg);
        return NULL;
      }

      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.positiveOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10", arg);
        return NULL;
      }

      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10K(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10K", arg);
        return NULL;
      }

      static PyObject *t_Dfp_reciprocal(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Dfp_rint(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Dfp_sign(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinCos(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinhCosh(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sqrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyNegative());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyPositive());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Dfp_tan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_tanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDegrees(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDouble(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.toDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_toRadians(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toSplitDouble());
        return result.wrap();
      }

      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Dfp_ulp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.unequal(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "unequal", arg);
        return NULL;
      }

      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getExponent());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterConsumer::mids$ = NULL;
            bool ParseToken$CenterConsumer::live$ = false;

            jclass ParseToken$CenterConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_9fc8078d81282211] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterConsumer::accept(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_9fc8078d81282211], a0.this$);
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
            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterConsumer, t_ParseToken$CenterConsumer, ParseToken$CenterConsumer);

            void t_ParseToken$CenterConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterConsumer), &PY_TYPE_DEF(ParseToken$CenterConsumer), module, "ParseToken$CenterConsumer", 0);
            }

            void t_ParseToken$CenterConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "class_", make_descriptor(ParseToken$CenterConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterConsumer::wrap_Object(ParseToken$CenterConsumer(((t_ParseToken$CenterConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
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
#include "org/orekit/data/PythonSeriesTerm.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonSeriesTerm::class$ = NULL;
      jmethodID *PythonSeriesTerm::mids$ = NULL;
      bool PythonSeriesTerm::live$ = false;

      jclass PythonSeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonSeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_argument_7212d8ed403494a1] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_3cea1ba38c4e1540] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_7212d8ed403494a1] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_3cea1ba38c4e1540] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSeriesTerm::PythonSeriesTerm() : ::org::orekit::data::SeriesTerm(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonSeriesTerm::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonSeriesTerm::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonSeriesTerm::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self);
      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args);
      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data);
      static PyGetSetDef t_PythonSeriesTerm__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSeriesTerm, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSeriesTerm__methods_[] = {
        DECLARE_METHOD(t_PythonSeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSeriesTerm, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSeriesTerm)[] = {
        { Py_tp_methods, t_PythonSeriesTerm__methods_ },
        { Py_tp_init, (void *) t_PythonSeriesTerm_init_ },
        { Py_tp_getset, t_PythonSeriesTerm__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSeriesTerm)[] = {
        &PY_TYPE_DEF(::org::orekit::data::SeriesTerm),
        NULL
      };

      DEFINE_TYPE(PythonSeriesTerm, t_PythonSeriesTerm, PythonSeriesTerm);

      void t_PythonSeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSeriesTerm), &PY_TYPE_DEF(PythonSeriesTerm), module, "PythonSeriesTerm", 1);
      }

      void t_PythonSeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "class_", make_descriptor(PythonSeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "wrapfn_", make_descriptor(t_PythonSeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSeriesTerm::initializeClass);
        JNINativeMethod methods[] = {
          { "argument", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argument0 },
          { "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argument1 },
          { "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argumentDerivative2 },
          { "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argumentDerivative3 },
          { "pythonDecRef", "()V", (void *) t_PythonSeriesTerm_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSeriesTerm::initializeClass, 1)))
          return NULL;
        return t_PythonSeriesTerm::wrap_Object(PythonSeriesTerm(((t_PythonSeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds)
      {
        PythonSeriesTerm object((jobject) NULL);

        INT_CALL(object = PythonSeriesTerm());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args)
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

      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argument", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argument", result);
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

      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argumentDerivative", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argumentDerivative", result);
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

      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data)
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
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GenericGNSS::class$ = NULL;
        jmethodID *GenericGNSS::mids$ = NULL;
        bool GenericGNSS::live$ = false;

        jclass GenericGNSS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GenericGNSS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f1fb4db65d1e285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GenericGNSS::GenericGNSS(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1f1fb4db65d1e285, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GenericGNSS__methods_[] = {
          DECLARE_METHOD(t_GenericGNSS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GenericGNSS, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GenericGNSS)[] = {
          { Py_tp_methods, t_GenericGNSS__methods_ },
          { Py_tp_init, (void *) t_GenericGNSS_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GenericGNSS)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GenericGNSS, t_GenericGNSS, GenericGNSS);

        void t_GenericGNSS::install(PyObject *module)
        {
          installType(&PY_TYPE(GenericGNSS), &PY_TYPE_DEF(GenericGNSS), module, "GenericGNSS", 0);
        }

        void t_GenericGNSS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "class_", make_descriptor(GenericGNSS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "wrapfn_", make_descriptor(t_GenericGNSS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GenericGNSS::initializeClass, 1)))
            return NULL;
          return t_GenericGNSS::wrap_Object(GenericGNSS(((t_GenericGNSS *) arg)->object.this$));
        }
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GenericGNSS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          GenericGNSS object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GenericGNSS(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/GPSScale.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScales::class$ = NULL;
      jmethodID *TimeScales::mids$ = NULL;
      bool TimeScales::live$ = false;

      jclass TimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createBesselianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBDT_9d93fd70217d9218] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_80e11148db499dda] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_80e11148db499dda] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_80e11148db499dda] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_80e11148db499dda] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_98a4c7e041a431de] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_3a2e75d759160885] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_bfc706ac1880dab6] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_03bea9e4eca66482] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_80e11148db499dda] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_80e11148db499dda] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_80e11148db499dda] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_4011a9310ce86043] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_80e11148db499dda] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_80e11148db499dda] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_80e11148db499dda] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_80e11148db499dda] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_af6710830d0f02e7] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_80e11148db499dda] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_617450d859ecaf8d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_0a0f63c3aa49765d] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_d96035eea3611111] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_cfeb575714faef31] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_3b674fc7b42c8f62] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_ff99e037ad2c3870] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_bdbc31f45ed399a7] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_d2854c25a21df51f], a0));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_d2854c25a21df51f], a0));
      }

      ::org::orekit::time::BDTScale TimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_9d93fd70217d9218]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_80e11148db499dda]));
      }

      ::org::orekit::time::GLONASSScale TimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_98a4c7e041a431de]));
      }

      ::org::orekit::time::GMSTScale TimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_3a2e75d759160885], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_bfc706ac1880dab6]));
      }

      ::org::orekit::time::GalileoScale TimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_03bea9e4eca66482]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::IRNSSScale TimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_4011a9310ce86043]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_80e11148db499dda]));
      }

      ::org::orekit::time::QZSSScale TimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_af6710830d0f02e7]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::TAIScale TimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_617450d859ecaf8d]));
      }

      ::org::orekit::time::TCBScale TimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_0a0f63c3aa49765d]));
      }

      ::org::orekit::time::TCGScale TimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_d96035eea3611111]));
      }

      ::org::orekit::time::TDBScale TimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_cfeb575714faef31]));
      }

      ::org::orekit::time::TTScale TimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_3b674fc7b42c8f62]));
      }

      ::org::orekit::time::UT1Scale TimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_ff99e037ad2c3870], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_bdbc31f45ed399a7]));
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
      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_getBDT(t_TimeScales *self);
      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getGPS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGST(t_TimeScales *self);
      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getTAI(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCG(t_TimeScales *self);
      static PyObject *t_TimeScales_getTDB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTT(t_TimeScales *self);
      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getUTC(t_TimeScales *self);
      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data);
      static PyGetSetDef t_TimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScales, bDT),
        DECLARE_GET_FIELD(t_TimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_TimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_TimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_TimeScales, gLONASS),
        DECLARE_GET_FIELD(t_TimeScales, gPS),
        DECLARE_GET_FIELD(t_TimeScales, gST),
        DECLARE_GET_FIELD(t_TimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_TimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_TimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, iRNSS),
        DECLARE_GET_FIELD(t_TimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_TimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_TimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_TimeScales, qZSS),
        DECLARE_GET_FIELD(t_TimeScales, qzssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, tAI),
        DECLARE_GET_FIELD(t_TimeScales, tCB),
        DECLARE_GET_FIELD(t_TimeScales, tCG),
        DECLARE_GET_FIELD(t_TimeScales, tDB),
        DECLARE_GET_FIELD(t_TimeScales, tT),
        DECLARE_GET_FIELD(t_TimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScales__methods_[] = {
        DECLARE_METHOD(t_TimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, getBDT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGLONASS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getGPS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGST, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIRNSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQZSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTAI, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCG, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTDB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getUTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScales)[] = {
        { Py_tp_methods, t_TimeScales__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScales, t_TimeScales, TimeScales);

      void t_TimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScales), &PY_TYPE_DEF(TimeScales), module, "TimeScales", 0);
      }

      void t_TimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "class_", make_descriptor(TimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "wrapfn_", make_descriptor(t_TimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScales::initializeClass, 1)))
          return NULL;
        return t_TimeScales::wrap_Object(TimeScales(((t_TimeScales *) arg)->object.this$));
      }
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg)
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

      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg)
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

      static PyObject *t_TimeScales_getBDT(t_TimeScales *self)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args)
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

      static PyObject *t_TimeScales_getGPS(t_TimeScales *self)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGST(t_TimeScales *self)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTAI(t_TimeScales *self)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCB(t_TimeScales *self)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCG(t_TimeScales *self)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTDB(t_TimeScales *self)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTT(t_TimeScales *self)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args)
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

      static PyObject *t_TimeScales_getUTC(t_TimeScales *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asinh::class$ = NULL;
        jmethodID *Asinh::mids$ = NULL;
        bool Asinh::live$ = false;

        jclass Asinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asinh::Asinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Asinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args);

        static PyMethodDef t_Asinh__methods_[] = {
          DECLARE_METHOD(t_Asinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asinh)[] = {
          { Py_tp_methods, t_Asinh__methods_ },
          { Py_tp_init, (void *) t_Asinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asinh, t_Asinh, Asinh);

        void t_Asinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Asinh), &PY_TYPE_DEF(Asinh), module, "Asinh", 0);
        }

        void t_Asinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "class_", make_descriptor(Asinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "wrapfn_", make_descriptor(t_Asinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asinh::initializeClass, 1)))
            return NULL;
          return t_Asinh::wrap_Object(Asinh(((t_Asinh *) arg)->object.this$));
        }
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds)
        {
          Asinh object((jobject) NULL);

          INT_CALL(object = Asinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args)
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
#include "org/orekit/utils/PythonParameterFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterFunction::class$ = NULL;
      jmethodID *PythonParameterFunction::mids$ = NULL;
      bool PythonParameterFunction::live$ = false;

      jclass PythonParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_b4881e07b2de3818] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterFunction::PythonParameterFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonParameterFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonParameterFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonParameterFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self);
      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args);
      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data);
      static PyGetSetDef t_PythonParameterFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterFunction__methods_[] = {
        DECLARE_METHOD(t_PythonParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterFunction)[] = {
        { Py_tp_methods, t_PythonParameterFunction__methods_ },
        { Py_tp_init, (void *) t_PythonParameterFunction_init_ },
        { Py_tp_getset, t_PythonParameterFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterFunction, t_PythonParameterFunction, PythonParameterFunction);

      void t_PythonParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterFunction), &PY_TYPE_DEF(PythonParameterFunction), module, "PythonParameterFunction", 1);
      }

      void t_PythonParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "class_", make_descriptor(PythonParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "wrapfn_", make_descriptor(t_PythonParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonParameterFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterFunction::initializeClass, 1)))
          return NULL;
        return t_PythonParameterFunction::wrap_Object(PythonParameterFunction(((t_PythonParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterFunction object((jobject) NULL);

        INT_CALL(object = PythonParameterFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args)
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

      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "value", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
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

      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data)
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
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouIGSO::class$ = NULL;
        jmethodID *BeidouIGSO::mids$ = NULL;
        bool BeidouIGSO::live$ = false;

        jclass BeidouIGSO::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouIGSO");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f1fb4db65d1e285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouIGSO::BeidouIGSO(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::BeidouMeo(env->newObject(initializeClass, &mids$, mid_init$_1f1fb4db65d1e285, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouIGSO__methods_[] = {
          DECLARE_METHOD(t_BeidouIGSO, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouIGSO, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouIGSO)[] = {
          { Py_tp_methods, t_BeidouIGSO__methods_ },
          { Py_tp_init, (void *) t_BeidouIGSO_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouIGSO)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::BeidouMeo),
          NULL
        };

        DEFINE_TYPE(BeidouIGSO, t_BeidouIGSO, BeidouIGSO);

        void t_BeidouIGSO::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouIGSO), &PY_TYPE_DEF(BeidouIGSO), module, "BeidouIGSO", 0);
        }

        void t_BeidouIGSO::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "class_", make_descriptor(BeidouIGSO::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "wrapfn_", make_descriptor(t_BeidouIGSO::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouIGSO::initializeClass, 1)))
            return NULL;
          return t_BeidouIGSO::wrap_Object(BeidouIGSO(((t_BeidouIGSO *) arg)->object.this$));
        }
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouIGSO::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouIGSO object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouIGSO(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *TaylorMap::class$ = NULL;
        jmethodID *TaylorMap::mids$ = NULL;
        bool TaylorMap::live$ = false;

        jclass TaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/TaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8befb2fa54d4eadc] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_compose_163150f2addcb85a] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/TaylorMap;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_getFunction_d2b8014a1c7d22f6] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getNbFunctions_d6ab429752e7c267] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_d6ab429752e7c267] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_be783177b060994b] = env->getMethodID(cls, "getPoint", "()[D");
            mids$[mid_invert_26364ce0a724a9ce] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_value_51f624c89851da7e] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TaylorMap::TaylorMap(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8befb2fa54d4eadc, a0.this$, a1.this$)) {}

        TaylorMap::TaylorMap(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

        TaylorMap TaylorMap::compose(const TaylorMap & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_compose_163150f2addcb85a], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure TaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_d2b8014a1c7d22f6], a0));
        }

        jint TaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_d6ab429752e7c267]);
        }

        jint TaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_d6ab429752e7c267]);
        }

        JArray< jdouble > TaylorMap::getPoint() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_be783177b060994b]));
        }

        TaylorMap TaylorMap::invert(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_invert_26364ce0a724a9ce], a0.this$));
        }

        JArray< jdouble > TaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_51f624c89851da7e], a0.this$));
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
        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self);
        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data);
        static PyGetSetDef t_TaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_TaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_TaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_TaylorMap, point),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TaylorMap__methods_[] = {
          DECLARE_METHOD(t_TaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, compose, METH_O),
          DECLARE_METHOD(t_TaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_TaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, invert, METH_O),
          DECLARE_METHOD(t_TaylorMap, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TaylorMap)[] = {
          { Py_tp_methods, t_TaylorMap__methods_ },
          { Py_tp_init, (void *) t_TaylorMap_init_ },
          { Py_tp_getset, t_TaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TaylorMap, t_TaylorMap, TaylorMap);

        void t_TaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(TaylorMap), &PY_TYPE_DEF(TaylorMap), module, "TaylorMap", 0);
        }

        void t_TaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "class_", make_descriptor(TaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "wrapfn_", make_descriptor(t_TaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TaylorMap::initializeClass, 1)))
            return NULL;
          return t_TaylorMap::wrap_Object(TaylorMap(((t_TaylorMap *) arg)->object.this$));
        }
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a1((jobject) NULL);
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jint a1;
              jint a2;
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = TaylorMap(a0, a1, a2));
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

        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg)
        {
          TaylorMap a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", TaylorMap::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return result.wrap();
        }

        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepInterpolator::class$ = NULL;
        jmethodID *OrekitStepInterpolator::mids$ = NULL;
        bool OrekitStepInterpolator::live$ = false;

        jclass OrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_8fbfa58855031235] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_1e982279849c3b65] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPreviousState_8fbfa58855031235] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_fa53c719225d17c1] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_8fbfa58855031235]));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_1e982279849c3b65], a0.this$));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates OrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_8fbfa58855031235]));
        }

        jboolean OrekitStepInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_eee3de00fe971136]);
        }

        jboolean OrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        jboolean OrekitStepInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_eee3de00fe971136]);
        }

        OrekitStepInterpolator OrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return OrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_fa53c719225d17c1], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_OrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_OrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepInterpolator)[] = {
          { Py_tp_methods, t_OrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(OrekitStepInterpolator, t_OrekitStepInterpolator, OrekitStepInterpolator);

        void t_OrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepInterpolator), &PY_TYPE_DEF(OrekitStepInterpolator), module, "OrekitStepInterpolator", 0);
        }

        void t_OrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "class_", make_descriptor(OrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "wrapfn_", make_descriptor(t_OrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_OrekitStepInterpolator::wrap_Object(OrekitStepInterpolator(((t_OrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(OrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          OrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_OrekitStepInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
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

              ::java::lang::Class *PythonAbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
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

              PythonAbstractShortTermEncounter2DPOCMethod::PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

              void PythonAbstractShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
              }

              jlong PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
              }

              void PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
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
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter2DPOCMethod, t_PythonAbstractShortTermEncounter2DPOCMethod, PythonAbstractShortTermEncounter2DPOCMethod);

              void t_PythonAbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter2DPOCMethod), module, "PythonAbstractShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter2DPOCMethod(((t_PythonAbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractShortTermEncounter2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter2DPOCMethod(a0));
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

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
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

              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data)
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
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3FileType::class$ = NULL;
        jmethodID *SP3FileType::mids$ = NULL;
        bool SP3FileType::live$ = false;
        SP3FileType *SP3FileType::COMPASS = NULL;
        SP3FileType *SP3FileType::GALILEO = NULL;
        SP3FileType *SP3FileType::GLONASS = NULL;
        SP3FileType *SP3FileType::GPS = NULL;
        SP3FileType *SP3FileType::IRNSS = NULL;
        SP3FileType *SP3FileType::LEO = NULL;
        SP3FileType *SP3FileType::MIXED = NULL;
        SP3FileType *SP3FileType::QZSS = NULL;
        SP3FileType *SP3FileType::SBAS = NULL;
        SP3FileType *SP3FileType::UNDEFINED = NULL;

        jclass SP3FileType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3FileType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_2e5a30f9df37fc6d] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_valueOf_2e5a30f9df37fc6d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_values_508688da67883852] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3FileType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            COMPASS = new SP3FileType(env->getStaticObjectField(cls, "COMPASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GALILEO = new SP3FileType(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            GLONASS = new SP3FileType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GPS = new SP3FileType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/sp3/SP3FileType;"));
            IRNSS = new SP3FileType(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            LEO = new SP3FileType(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            MIXED = new SP3FileType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/SP3FileType;"));
            QZSS = new SP3FileType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            SBAS = new SP3FileType(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/files/sp3/SP3FileType;"));
            UNDEFINED = new SP3FileType(env->getStaticObjectField(cls, "UNDEFINED", "Lorg/orekit/files/sp3/SP3FileType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String SP3FileType::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
        }

        SP3FileType SP3FileType::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_parse_2e5a30f9df37fc6d], a0.this$));
        }

        SP3FileType SP3FileType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2e5a30f9df37fc6d], a0.this$));
        }

        JArray< SP3FileType > SP3FileType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3FileType >(env->callStaticObjectMethod(cls, mids$[mid_values_508688da67883852]));
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
        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args);
        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self);
        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3FileType_values(PyTypeObject *type);
        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data);
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data);
        static PyGetSetDef t_SP3FileType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3FileType, key),
          DECLARE_GET_FIELD(t_SP3FileType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3FileType__methods_[] = {
          DECLARE_METHOD(t_SP3FileType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3FileType, getKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3FileType, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3FileType)[] = {
          { Py_tp_methods, t_SP3FileType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3FileType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3FileType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3FileType, t_SP3FileType, SP3FileType);
        PyObject *t_SP3FileType::wrap_Object(const SP3FileType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3FileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3FileType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3FileType), &PY_TYPE_DEF(SP3FileType), module, "SP3FileType", 0);
        }

        void t_SP3FileType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "class_", make_descriptor(SP3FileType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "wrapfn_", make_descriptor(t_SP3FileType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3FileType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "COMPASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::COMPASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GALILEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GALILEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GLONASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GPS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GPS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "IRNSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::IRNSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "LEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::LEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "MIXED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "QZSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "SBAS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::SBAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "UNDEFINED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::UNDEFINED)));
        }

        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3FileType::initializeClass, 1)))
            return NULL;
          return t_SP3FileType::wrap_Object(SP3FileType(((t_SP3FileType *) arg)->object.this$));
        }
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3FileType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::parse(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::valueOf(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3FileType_values(PyTypeObject *type)
        {
          JArray< SP3FileType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3FileType::wrap_jobject);
        }
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHullGenerator::class$ = NULL;
        jmethodID *ConvexHullGenerator::mids$ = NULL;
        bool ConvexHullGenerator::live$ = false;

        jclass ConvexHullGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHullGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_generate_f0192278b7b44179] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/hull/ConvexHull;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::hull::ConvexHull ConvexHullGenerator::generate(const ::java::util::Collection & a0) const
        {
          return ::org::hipparchus::geometry::hull::ConvexHull(env->callObjectMethod(this$, mids$[mid_generate_f0192278b7b44179], a0.this$));
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
      namespace hull {
        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args);
        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data);
        static PyGetSetDef t_ConvexHullGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHullGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHullGenerator__methods_[] = {
          DECLARE_METHOD(t_ConvexHullGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHullGenerator, generate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator)[] = {
          { Py_tp_methods, t_ConvexHullGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHullGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConvexHullGenerator, t_ConvexHullGenerator, ConvexHullGenerator);
        PyObject *t_ConvexHullGenerator::wrap_Object(const ConvexHullGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHullGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHullGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHullGenerator), &PY_TYPE_DEF(ConvexHullGenerator), module, "ConvexHullGenerator", 0);
        }

        void t_ConvexHullGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "class_", make_descriptor(ConvexHullGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "wrapfn_", make_descriptor(t_ConvexHullGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHullGenerator::initializeClass, 1)))
            return NULL;
          return t_ConvexHullGenerator::wrap_Object(ConvexHullGenerator(((t_ConvexHullGenerator *) arg)->object.this$));
        }
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHullGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::hull::ConvexHull result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.generate(a0));
            return ::org::hipparchus::geometry::hull::t_ConvexHull::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "generate", arg);
          return NULL;
        }
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
