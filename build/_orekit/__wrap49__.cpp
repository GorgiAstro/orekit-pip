#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_910fe4ada3e1910b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)V");
              mids$[mid_getEnd_17a952530a808943] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getLine_927626ac26078f4f] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getStart_17a952530a808943] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_910fe4ada3e1910b, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEnd_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_getLine_927626ac26078f4f]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getStart_17a952530a808943]));
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
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
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a2((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Segment(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TDOABuilder::class$ = NULL;
          jmethodID *TDOABuilder::mids$ = NULL;
          bool TDOABuilder::live$ = false;

          jclass TDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa060bc4347f0934] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_da3c9e32e81bb753] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOABuilder::TDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_aa060bc4347f0934, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TDOA TDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TDOA(env->callObjectMethod(this$, mids$[mid_build_da3c9e32e81bb753], a0.this$, a1.this$));
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
          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args);
          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args);
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data);
          static PyGetSetDef t_TDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOABuilder__methods_[] = {
            DECLARE_METHOD(t_TDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOABuilder)[] = {
            { Py_tp_methods, t_TDOABuilder__methods_ },
            { Py_tp_init, (void *) t_TDOABuilder_init_ },
            { Py_tp_getset, t_TDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TDOABuilder, t_TDOABuilder, TDOABuilder);
          PyObject *t_TDOABuilder::wrap_Object(const TDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOABuilder), &PY_TYPE_DEF(TDOABuilder), module, "TDOABuilder", 0);
          }

          void t_TDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "class_", make_descriptor(TDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "wrapfn_", make_descriptor(t_TDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOABuilder::initializeClass, 1)))
              return NULL;
            return t_TDOABuilder::wrap_Object(TDOABuilder(((t_TDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TDOABuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *MultiplexedMeasurement::class$ = NULL;
        jmethodID *MultiplexedMeasurement::mids$ = NULL;
        bool MultiplexedMeasurement::live$ = false;
        ::java::lang::String *MultiplexedMeasurement::MEASUREMENT_TYPE = NULL;

        jclass MultiplexedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/MultiplexedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_getEstimatedMeasurements_a6156df500549a58] = env->getMethodID(cls, "getEstimatedMeasurements", "()Ljava/util/List;");
            mids$[mid_getEstimatedMeasurementsWithoutDerivatives_a6156df500549a58] = env->getMethodID(cls, "getEstimatedMeasurementsWithoutDerivatives", "()Ljava/util/List;");
            mids$[mid_getMeasurements_a6156df500549a58] = env->getMethodID(cls, "getMeasurements", "()Ljava/util/List;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiplexedMeasurement::MultiplexedMeasurement(const ::java::util::List & a0) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurements_a6156df500549a58]));
        }

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurementsWithoutDerivatives() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsWithoutDerivatives_a6156df500549a58]));
        }

        ::java::util::List MultiplexedMeasurement::getMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMeasurements_a6156df500549a58]));
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
        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args);
        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data);
        static PyGetSetDef t_MultiplexedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurementsWithoutDerivatives),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, measurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiplexedMeasurement__methods_[] = {
          DECLARE_METHOD(t_MultiplexedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurements, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurementsWithoutDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getMeasurements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurement)[] = {
          { Py_tp_methods, t_MultiplexedMeasurement__methods_ },
          { Py_tp_init, (void *) t_MultiplexedMeasurement_init_ },
          { Py_tp_getset, t_MultiplexedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(MultiplexedMeasurement, t_MultiplexedMeasurement, MultiplexedMeasurement);
        PyObject *t_MultiplexedMeasurement::wrap_Object(const MultiplexedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiplexedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiplexedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiplexedMeasurement), &PY_TYPE_DEF(MultiplexedMeasurement), module, "MultiplexedMeasurement", 0);
        }

        void t_MultiplexedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "class_", make_descriptor(MultiplexedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "wrapfn_", make_descriptor(t_MultiplexedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "boxfn_", make_descriptor(boxObject));
          env->getClass(MultiplexedMeasurement::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "MEASUREMENT_TYPE", make_descriptor(j2p(*MultiplexedMeasurement::MEASUREMENT_TYPE)));
        }

        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiplexedMeasurement::initializeClass, 1)))
            return NULL;
          return t_MultiplexedMeasurement::wrap_Object(MultiplexedMeasurement(((t_MultiplexedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiplexedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          MultiplexedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = MultiplexedMeasurement(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(MultiplexedMeasurement);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(value);
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
          mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
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
#include "org/orekit/propagation/events/DateDetector.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *DateDetector::class$ = NULL;
        jmethodID *DateDetector::mids$ = NULL;
        bool DateDetector::live$ = false;
        jdouble DateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble DateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble DateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass DateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/DateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3865e269610853fc] = env->getMethodID(cls, "<init>", "([Lorg/orekit/time/TimeStamped;)V");
            mids$[mid_addEventDate_e82d68cd9f886886] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDates_a6156df500549a58] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_66f0b0590f580cf6] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/DateDetector;");
            mids$[mid_create_19d67cd164575bf6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/DateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DateDetector::DateDetector(const JArray< ::org::orekit::time::TimeStamped > & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3865e269610853fc, a0.this$)) {}

        void DateDetector::addEventDate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_e82d68cd9f886886], a0.this$);
        }

        jdouble DateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate DateDetector::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        ::java::util::List DateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_a6156df500549a58]));
        }

        DateDetector DateDetector::withMinGap(jdouble a0) const
        {
          return DateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_66f0b0590f580cf6], a0));
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
        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args);
        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args);
        static PyObject *t_DateDetector_getDate(t_DateDetector *self);
        static PyObject *t_DateDetector_getDates(t_DateDetector *self);
        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data);
        static PyGetSetDef t_DateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_DateDetector, date),
          DECLARE_GET_FIELD(t_DateDetector, dates),
          DECLARE_GET_FIELD(t_DateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DateDetector__methods_[] = {
          DECLARE_METHOD(t_DateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_DateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DateDetector)[] = {
          { Py_tp_methods, t_DateDetector__methods_ },
          { Py_tp_init, (void *) t_DateDetector_init_ },
          { Py_tp_getset, t_DateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(DateDetector, t_DateDetector, DateDetector);
        PyObject *t_DateDetector::wrap_Object(const DateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(DateDetector), &PY_TYPE_DEF(DateDetector), module, "DateDetector", 0);
        }

        void t_DateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "class_", make_descriptor(DateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "wrapfn_", make_descriptor(t_DateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(DateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MAX_CHECK", make_descriptor(DateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MIN_GAP", make_descriptor(DateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_THRESHOLD", make_descriptor(DateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DateDetector::initializeClass, 1)))
            return NULL;
          return t_DateDetector::wrap_Object(DateDetector(((t_DateDetector *) arg)->object.this$));
        }
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::time::TimeStamped > a0((jobject) NULL);
          DateDetector object((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
          {
            INT_CALL(object = DateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(DateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(DateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_DateDetector_getDate(t_DateDetector *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_DateDetector_getDates(t_DateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(TimeStamped));
        }

        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg)
        {
          jdouble a0;
          DateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_DateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *WeatherModel::class$ = NULL;
          jmethodID *WeatherModel::mids$ = NULL;
          bool WeatherModel::live$ = false;

          jclass WeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/WeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_weatherParameters_82dcc83e88ee1b1f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void WeatherModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_82dcc83e88ee1b1f], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args);

          static PyMethodDef t_WeatherModel__methods_[] = {
            DECLARE_METHOD(t_WeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WeatherModel)[] = {
            { Py_tp_methods, t_WeatherModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WeatherModel, t_WeatherModel, WeatherModel);

          void t_WeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(WeatherModel), &PY_TYPE_DEF(WeatherModel), module, "WeatherModel", 0);
          }

          void t_WeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "class_", make_descriptor(WeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "wrapfn_", make_descriptor(t_WeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WeatherModel::initializeClass, 1)))
              return NULL;
            return t_WeatherModel::wrap_Object(WeatherModel(((t_WeatherModel *) arg)->object.this$));
          }
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *FieldBracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *FieldBracketingNthOrderBrentSolver::mids$ = NULL;
        bool FieldBracketingNthOrderBrentSolver::live$ = false;

        jclass FieldBracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c51ab528872cd2f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getAbsoluteAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMaximalOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_getRelativeAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_5c3995ef461ab33a] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_bd9fc31bb28b152c] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_a9462a1ad9e05468] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBracketingNthOrderBrentSolver::FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c51ab528872cd2f, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_e6d4d3215c30992a]));
        }

        jint FieldBracketingNthOrderBrentSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_e6d4d3215c30992a]));
        }

        jint FieldBracketingNthOrderBrentSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
        }

        jint FieldBracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_5c3995ef461ab33a], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_bd9fc31bb28b152c], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval FieldBracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_a9462a1ad9e05468], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_FieldBracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, evaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_FieldBracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_FieldBracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_FieldBracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldBracketingNthOrderBrentSolver, t_FieldBracketingNthOrderBrentSolver, FieldBracketingNthOrderBrentSolver);
        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_Object(const FieldBracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBracketingNthOrderBrentSolver), &PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver), module, "FieldBracketingNthOrderBrentSolver", 0);
        }

        void t_FieldBracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "class_", make_descriptor(FieldBracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_FieldBracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_FieldBracketingNthOrderBrentSolver::wrap_Object(FieldBracketingNthOrderBrentSolver(((t_FieldBracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jint a3;
          FieldBracketingNthOrderBrentSolver object((jobject) NULL);

          if (!parseArgs(args, "KKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
          {
            INT_CALL(object = FieldBracketingNthOrderBrentSolver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeShiftable::class$ = NULL;
      jmethodID *FieldTimeShiftable::mids$ = NULL;
      bool FieldTimeShiftable::live$ = false;

      jclass FieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_bbd75fda8bf31e8d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeShiftable FieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_bbd75fda8bf31e8d], a0.this$));
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
      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data);
      static PyGetSetDef t_FieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_FieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeShiftable, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeShiftable)[] = {
        { Py_tp_methods, t_FieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeShiftable),
        NULL
      };

      DEFINE_TYPE(FieldTimeShiftable, t_FieldTimeShiftable, FieldTimeShiftable);
      PyObject *t_FieldTimeShiftable::wrap_Object(const FieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeShiftable), &PY_TYPE_DEF(FieldTimeShiftable), module, "FieldTimeShiftable", 0);
      }

      void t_FieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "class_", make_descriptor(FieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "wrapfn_", make_descriptor(t_FieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_FieldTimeShiftable::wrap_Object(FieldTimeShiftable(((t_FieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTimeShiftable result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldTimeShiftable::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldTimeShiftable), (PyObject *) self, "shiftedBy", args, 2);
      }
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrData::class$ = NULL;
            jmethodID *SsrData::mids$ = NULL;
            bool SsrData::live$ = false;

            jclass SsrData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrData::SsrData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SsrData__methods_[] = {
              DECLARE_METHOD(t_SsrData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrData)[] = {
              { Py_tp_methods, t_SsrData__methods_ },
              { Py_tp_init, (void *) t_SsrData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrData, t_SsrData, SsrData);

            void t_SsrData::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrData), &PY_TYPE_DEF(SsrData), module, "SsrData", 0);
            }

            void t_SsrData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "class_", make_descriptor(SsrData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "wrapfn_", make_descriptor(t_SsrData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrData::initializeClass, 1)))
                return NULL;
              return t_SsrData::wrap_Object(SsrData(((t_SsrData *) arg)->object.this$));
            }
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds)
            {
              SsrData object((jobject) NULL);

              INT_CALL(object = SsrData());
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *FieldDSSTThirdBodyDynamicContext::mids$ = NULL;
            bool FieldDSSTThirdBodyDynamicContext::live$ = false;

            jclass FieldDSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fbdd386e600c6e4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha_e6d4d3215c30992a] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBB_e6d4d3215c30992a] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBBB_e6d4d3215c30992a] = env->getMethodID(cls, "getBBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_e6d4d3215c30992a] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_e6d4d3215c30992a] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_e6d4d3215c30992a] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getGamma_e6d4d3215c30992a] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHXXX_e6d4d3215c30992a] = env->getMethodID(cls, "getHXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKXXX_e6d4d3215c30992a] = env->getMethodID(cls, "getKXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_e6d4d3215c30992a] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_e6d4d3215c30992a] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoR3_e6d4d3215c30992a] = env->getMethodID(cls, "getMuoR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_e6d4d3215c30992a] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getR3_e6d4d3215c30992a] = env->getMethodID(cls, "getR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_e6d4d3215c30992a] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_e6d4d3215c30992a] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getb_e6d4d3215c30992a] = env->getMethodID(cls, "getb", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTThirdBodyDynamicContext::FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_fbdd386e600c6e4b, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBBB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getHXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHXXX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getKXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKXXX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoR3_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getR3_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getb() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getb_e6d4d3215c30992a]));
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
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args);
            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_FieldDSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_FieldDSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_FieldDSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTThirdBodyDynamicContext, t_FieldDSSTThirdBodyDynamicContext, FieldDSSTThirdBodyDynamicContext);
            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_Object(const FieldDSSTThirdBodyDynamicContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTThirdBodyDynamicContext), &PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext), module, "FieldDSSTThirdBodyDynamicContext", 0);
            }

            void t_FieldDSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "class_", make_descriptor(FieldDSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_FieldDSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTThirdBodyDynamicContext::wrap_Object(FieldDSSTThirdBodyDynamicContext(((t_FieldDSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldDSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getb());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getb());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Collectors.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Collectors::class$ = NULL;
      jmethodID *Collectors::mids$ = NULL;
      bool Collectors::live$ = false;

      jclass Collectors::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Collectors");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Collectors__methods_[] = {
        DECLARE_METHOD(t_Collectors, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Collectors, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Collectors)[] = {
        { Py_tp_methods, t_Collectors__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Collectors)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Collectors, t_Collectors, Collectors);

      void t_Collectors::install(PyObject *module)
      {
        installType(&PY_TYPE(Collectors), &PY_TYPE_DEF(Collectors), module, "Collectors", 0);
      }

      void t_Collectors::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "class_", make_descriptor(Collectors::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "wrapfn_", make_descriptor(t_Collectors::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Collectors::initializeClass, 1)))
          return NULL;
        return t_Collectors::wrap_Object(Collectors(((t_Collectors *) arg)->object.this$));
      }
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Collectors::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD::class$ = NULL;
        jmethodID *CRD::mids$ = NULL;
        bool CRD::live$ = false;
        ::java::lang::String *CRD::STR_NAN = NULL;
        ::java::lang::String *CRD::STR_VALUE_NOT_AVAILABLE = NULL;

        jclass CRD::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDataBlock_f6e90d5062e913f8] = env->getMethodID(cls, "addDataBlock", "(Lorg/orekit/files/ilrs/CRD$CRDDataBlock;)V");
            mids$[mid_formatIntegerOrNaN_a1a389fa4c946a7a] = env->getStaticMethodID(cls, "formatIntegerOrNaN", "(II)Ljava/lang/String;");
            mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getDataBlocks_a6156df500549a58] = env->getMethodID(cls, "getDataBlocks", "()Ljava/util/List;");
            mids$[mid_handleNaN_43625fc1c3d86afe] = env->getStaticMethodID(cls, "handleNaN", "(Ljava/lang/String;)Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STR_NAN = new ::java::lang::String(env->getStaticObjectField(cls, "STR_NAN", "Ljava/lang/String;"));
            STR_VALUE_NOT_AVAILABLE = new ::java::lang::String(env->getStaticObjectField(cls, "STR_VALUE_NOT_AVAILABLE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD::CRD() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void CRD::addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addDataBlock_f6e90d5062e913f8], a0.this$);
        }

        ::java::lang::String CRD::formatIntegerOrNaN(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatIntegerOrNaN_a1a389fa4c946a7a], a0, a1));
        }

        ::java::util::List CRD::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
        }

        ::java::util::List CRD::getDataBlocks() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataBlocks_a6156df500549a58]));
        }

        ::java::lang::String CRD::handleNaN(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_handleNaN_43625fc1c3d86afe], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg);
        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRD_getComments(t_CRD *self);
        static PyObject *t_CRD_getDataBlocks(t_CRD *self);
        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_get__comments(t_CRD *self, void *data);
        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data);
        static PyGetSetDef t_CRD__fields_[] = {
          DECLARE_GET_FIELD(t_CRD, comments),
          DECLARE_GET_FIELD(t_CRD, dataBlocks),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD__methods_[] = {
          DECLARE_METHOD(t_CRD, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, addDataBlock, METH_O),
          DECLARE_METHOD(t_CRD, formatIntegerOrNaN, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRD, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CRD, getDataBlocks, METH_NOARGS),
          DECLARE_METHOD(t_CRD, handleNaN, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD)[] = {
          { Py_tp_methods, t_CRD__methods_ },
          { Py_tp_init, (void *) t_CRD_init_ },
          { Py_tp_getset, t_CRD__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD, t_CRD, CRD);

        void t_CRD::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD), &PY_TYPE_DEF(CRD), module, "CRD", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "SessionStatistics", make_descriptor(&PY_TYPE_DEF(CRD$SessionStatistics)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CalibrationDetail", make_descriptor(&PY_TYPE_DEF(CRD$CalibrationDetail)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Calibration", make_descriptor(&PY_TYPE_DEF(CRD$Calibration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Meteo", make_descriptor(&PY_TYPE_DEF(CRD$Meteo)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "AnglesMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$AnglesMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "MeteorologicalMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$MeteorologicalMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeSupplement", make_descriptor(&PY_TYPE_DEF(CRD$RangeSupplement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "NptRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$NptRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "FrRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$FrRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$RangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CRDDataBlock", make_descriptor(&PY_TYPE_DEF(CRD$CRDDataBlock)));
        }

        void t_CRD::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "class_", make_descriptor(CRD::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "wrapfn_", make_descriptor(t_CRD::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRD::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_NAN", make_descriptor(j2p(*CRD::STR_NAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_VALUE_NOT_AVAILABLE", make_descriptor(j2p(*CRD::STR_VALUE_NOT_AVAILABLE)));
        }

        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD::initializeClass, 1)))
            return NULL;
          return t_CRD::wrap_Object(CRD(((t_CRD *) arg)->object.this$));
        }
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds)
        {
          CRD object((jobject) NULL);

          INT_CALL(object = CRD());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CRDDataBlock a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CRDDataBlock::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addDataBlock(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDataBlock", arg);
          return NULL;
        }

        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::formatIntegerOrNaN(a0, a1));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "formatIntegerOrNaN", args);
          return NULL;
        }

        static PyObject *t_CRD_getComments(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRD_getDataBlocks(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CRDDataBlock));
        }

        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::handleNaN(a0));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "handleNaN", arg);
          return NULL;
        }

        static PyObject *t_CRD_get__comments(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataContext::class$ = NULL;
      jmethodID *DataContext::mids$ = NULL;
      bool DataContext::live$ = false;

      jclass DataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCelestialBodies_6b0502739530e079] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getDefault_8ea83c0b6ccdde9c] = env->getStaticMethodID(cls, "getDefault", "()Lorg/orekit/data/LazyLoadedDataContext;");
          mids$[mid_getFrames_6a1d0c689f9e630b] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_cfa6ccfb44255043] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_f5e7fe4d5e10b51a] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_5912acf3bafa785f] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_setDefault_0e77a5e34faa6b84] = env->getStaticMethodID(cls, "setDefault", "(Lorg/orekit/data/LazyLoadedDataContext;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBodies DataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_6b0502739530e079]));
      }

      ::org::orekit::data::LazyLoadedDataContext DataContext::getDefault()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::LazyLoadedDataContext(env->callStaticObjectMethod(cls, mids$[mid_getDefault_8ea83c0b6ccdde9c]));
      }

      ::org::orekit::frames::Frames DataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_6a1d0c689f9e630b]));
      }

      ::org::orekit::models::earth::GeoMagneticFields DataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_cfa6ccfb44255043]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields DataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_f5e7fe4d5e10b51a]));
      }

      ::org::orekit::time::TimeScales DataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_5912acf3bafa785f]));
      }

      void DataContext::setDefault(const ::org::orekit::data::LazyLoadedDataContext & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setDefault_0e77a5e34faa6b84], a0.this$);
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
      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self);
      static PyObject *t_DataContext_getDefault(PyTypeObject *type);
      static PyObject *t_DataContext_getFrames(t_DataContext *self);
      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self);
      static PyObject *t_DataContext_getGravityFields(t_DataContext *self);
      static PyObject *t_DataContext_getTimeScales(t_DataContext *self);
      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data);
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data);
      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data);
      static PyGetSetDef t_DataContext__fields_[] = {
        DECLARE_GET_FIELD(t_DataContext, celestialBodies),
        DECLARE_GETSET_FIELD(t_DataContext, default),
        DECLARE_GET_FIELD(t_DataContext, frames),
        DECLARE_GET_FIELD(t_DataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_DataContext, gravityFields),
        DECLARE_GET_FIELD(t_DataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataContext__methods_[] = {
        DECLARE_METHOD(t_DataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getDefault, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, setDefault, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataContext)[] = {
        { Py_tp_methods, t_DataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataContext, t_DataContext, DataContext);

      void t_DataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DataContext), &PY_TYPE_DEF(DataContext), module, "DataContext", 0);
      }

      void t_DataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "class_", make_descriptor(DataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "wrapfn_", make_descriptor(t_DataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataContext::initializeClass, 1)))
          return NULL;
        return t_DataContext::wrap_Object(DataContext(((t_DataContext *) arg)->object.this$));
      }
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_DataContext_getDefault(PyTypeObject *type)
      {
        ::org::orekit::data::LazyLoadedDataContext result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::DataContext::getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(result);
      }

      static PyObject *t_DataContext_getFrames(t_DataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGravityFields(t_DataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getTimeScales(t_DataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::data::LazyLoadedDataContext a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::data::DataContext::setDefault(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setDefault", arg);
        return NULL;
      }

      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data)
      {
        ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(value);
      }
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &value))
          {
            INT_CALL(self->object.setDefault(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "default", arg);
        return -1;
      }

      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *Duration::class$ = NULL;
          jmethodID *Duration::mids$ = NULL;
          bool Duration::live$ = false;

          jclass Duration::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/Duration");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Duration::Duration(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > Duration::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
          }

          ::java::lang::String Duration::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          jboolean Duration::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
        namespace jacobians {
          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_getName(t_Duration *self);
          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_get__name(t_Duration *self, void *data);
          static PyGetSetDef t_Duration__fields_[] = {
            DECLARE_GET_FIELD(t_Duration, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Duration__methods_[] = {
            DECLARE_METHOD(t_Duration, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, getAdditionalState, METH_O),
            DECLARE_METHOD(t_Duration, getName, METH_NOARGS),
            DECLARE_METHOD(t_Duration, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Duration)[] = {
            { Py_tp_methods, t_Duration__methods_ },
            { Py_tp_init, (void *) t_Duration_init_ },
            { Py_tp_getset, t_Duration__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Duration)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Duration, t_Duration, Duration);

          void t_Duration::install(PyObject *module)
          {
            installType(&PY_TYPE(Duration), &PY_TYPE_DEF(Duration), module, "Duration", 0);
          }

          void t_Duration::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "class_", make_descriptor(Duration::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "wrapfn_", make_descriptor(t_Duration::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Duration::initializeClass, 1)))
              return NULL;
            return t_Duration::wrap_Object(Duration(((t_Duration *) arg)->object.this$));
          }
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Duration::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Duration object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = Duration(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_getName(t_Duration *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_Duration_get__name(t_Duration *self, void *data)
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
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *CachedNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *CachedNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool CachedNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass CachedNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_118e177f3e704967] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;DIIDD)V");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_5d593e1d60308d01] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CachedNormalizedSphericalHarmonicsProvider::CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, jdouble a1, jint a2, jint a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_118e177f3e704967, a0.this$, a1, a2, a3, a4, a5)) {}

          jdouble CachedNormalizedSphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_456d9a2f64d6b28d]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_f2f64475e4580546]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_f2f64475e4580546]);
          }

          jdouble CachedNormalizedSphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
          }

          ::org::orekit::time::AbsoluteDate CachedNormalizedSphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
          }

          ::org::orekit::forces::gravity::potential::TideSystem CachedNormalizedSphericalHarmonicsProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b3b39360f3c8a6ac]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics CachedNormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_5d593e1d60308d01], a0.this$));
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
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_CachedNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, referenceDate),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CachedNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getTideSystem, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CachedNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_CachedNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_CachedNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_CachedNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CachedNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CachedNormalizedSphericalHarmonicsProvider, t_CachedNormalizedSphericalHarmonicsProvider, CachedNormalizedSphericalHarmonicsProvider);

          void t_CachedNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider), module, "CachedNormalizedSphericalHarmonicsProvider", 0);
          }

          void t_CachedNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_CachedNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_CachedNormalizedSphericalHarmonicsProvider::wrap_Object(CachedNormalizedSphericalHarmonicsProvider(((t_CachedNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble a4;
            jdouble a5;
            CachedNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            if (!parseArgs(args, "kDIIDD", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = CachedNormalizedSphericalHarmonicsProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundFieldOfViewDetector::class$ = NULL;
        jmethodID *GroundFieldOfViewDetector::mids$ = NULL;
        bool GroundFieldOfViewDetector::live$ = false;

        jclass GroundFieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundFieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6822b9024f20c5bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_f51bf66c035a133c] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_2eeb23542013db81] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundFieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundFieldOfViewDetector::GroundFieldOfViewDetector(const ::org::orekit::frames::Frame & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6822b9024f20c5bc, a0.this$, a1.this$)) {}

        jdouble GroundFieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView GroundFieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f51bf66c035a133c]));
        }

        ::org::orekit::frames::Frame GroundFieldOfViewDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args);
        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args);
        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data);
        static PyGetSetDef t_GroundFieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, frame),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundFieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_GroundFieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundFieldOfViewDetector)[] = {
          { Py_tp_methods, t_GroundFieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_GroundFieldOfViewDetector_init_ },
          { Py_tp_getset, t_GroundFieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundFieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundFieldOfViewDetector, t_GroundFieldOfViewDetector, GroundFieldOfViewDetector);
        PyObject *t_GroundFieldOfViewDetector::wrap_Object(const GroundFieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundFieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundFieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundFieldOfViewDetector), &PY_TYPE_DEF(GroundFieldOfViewDetector), module, "GroundFieldOfViewDetector", 0);
        }

        void t_GroundFieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "class_", make_descriptor(GroundFieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "wrapfn_", make_descriptor(t_GroundFieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundFieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_GroundFieldOfViewDetector::wrap_Object(GroundFieldOfViewDetector(((t_GroundFieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundFieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
          GroundFieldOfViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
          {
            INT_CALL(object = GroundFieldOfViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundFieldOfViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundFieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalMultivariateSummary::class$ = NULL;
        jmethodID *StatisticalMultivariateSummary::mids$ = NULL;
        bool StatisticalMultivariateSummary::live$ = false;

        jclass StatisticalMultivariateSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalMultivariateSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_7cdc325af0834901] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_7cdc325af0834901] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_7cdc325af0834901] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_7cdc325af0834901] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_7cdc325af0834901] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_7cdc325af0834901] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_7cdc325af0834901] = env->getMethodID(cls, "getSumSq", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix StatisticalMultivariateSummary::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_7116bbecdd8ceb21]));
        }

        jint StatisticalMultivariateSummary::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_7cdc325af0834901]));
        }

        jlong StatisticalMultivariateSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_7cdc325af0834901]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_7cdc325af0834901]));
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
        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data);
        static PyGetSetDef t_StatisticalMultivariateSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, covariance),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, dimension),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, geometricMean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, max),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, min),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, n),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumLog),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalMultivariateSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalMultivariateSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumSq, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalMultivariateSummary)[] = {
          { Py_tp_methods, t_StatisticalMultivariateSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalMultivariateSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalMultivariateSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalMultivariateSummary, t_StatisticalMultivariateSummary, StatisticalMultivariateSummary);

        void t_StatisticalMultivariateSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalMultivariateSummary), &PY_TYPE_DEF(StatisticalMultivariateSummary), module, "StatisticalMultivariateSummary", 0);
        }

        void t_StatisticalMultivariateSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "class_", make_descriptor(StatisticalMultivariateSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "wrapfn_", make_descriptor(t_StatisticalMultivariateSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalMultivariateSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalMultivariateSummary::wrap_Object(StatisticalMultivariateSummary(((t_StatisticalMultivariateSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalMultivariateSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationParser::class$ = NULL;
          jmethodID *RinexNavigationParser::mids$ = NULL;
          bool RinexNavigationParser::live$ = false;

          jclass RinexNavigationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_3478eebd4736dcb6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_3e1c1d55456c6db2] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/navigation/RinexNavigation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationParser::RinexNavigationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          RinexNavigationParser::RinexNavigationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3478eebd4736dcb6, a0.this$)) {}

          ::org::orekit::files::rinex::navigation::RinexNavigation RinexNavigationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::navigation::RinexNavigation(env->callObjectMethod(this$, mids$[mid_parse_3e1c1d55456c6db2], a0.this$));
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
          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg);

          static PyMethodDef t_RinexNavigationParser__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationParser)[] = {
            { Py_tp_methods, t_RinexNavigationParser__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexNavigationParser, t_RinexNavigationParser, RinexNavigationParser);

          void t_RinexNavigationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationParser), &PY_TYPE_DEF(RinexNavigationParser), module, "RinexNavigationParser", 0);
          }

          void t_RinexNavigationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "class_", make_descriptor(RinexNavigationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "wrapfn_", make_descriptor(t_RinexNavigationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationParser::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationParser::wrap_Object(RinexNavigationParser(((t_RinexNavigationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexNavigationParser object((jobject) NULL);

                INT_CALL(object = RinexNavigationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexNavigationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexNavigationParser(a0));
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

          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::navigation::RinexNavigation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::navigation::t_RinexNavigation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParametersController::class$ = NULL;
      jmethodID *ParametersController::mids$ = NULL;
      bool ParametersController::live$ = false;

      jclass ParametersController::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParametersController");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParameter_531dcf669f2059aa] = env->getMethodID(cls, "getParameter", "(Ljava/lang/String;)D");
          mids$[mid_setParameter_dc256bfc3daae929] = env->getMethodID(cls, "setParameter", "(Ljava/lang/String;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParametersController::getParameter(const ::java::lang::String & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getParameter_531dcf669f2059aa], a0.this$);
      }

      void ParametersController::setParameter(const ::java::lang::String & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setParameter_dc256bfc3daae929], a0.this$, a1);
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
      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg);
      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args);

      static PyMethodDef t_ParametersController__methods_[] = {
        DECLARE_METHOD(t_ParametersController, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, getParameter, METH_O),
        DECLARE_METHOD(t_ParametersController, setParameter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametersController)[] = {
        { Py_tp_methods, t_ParametersController__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametersController)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(ParametersController, t_ParametersController, ParametersController);

      void t_ParametersController::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametersController), &PY_TYPE_DEF(ParametersController), module, "ParametersController", 0);
      }

      void t_ParametersController::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "class_", make_descriptor(ParametersController::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "wrapfn_", make_descriptor(t_ParametersController::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametersController::initializeClass, 1)))
          return NULL;
        return t_ParametersController::wrap_Object(ParametersController(((t_ParametersController *) arg)->object.this$));
      }
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametersController::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameter(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameter", arg);
        return NULL;
      }

      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "sD", &a0, &a1))
        {
          OBJ_CALL(self->object.setParameter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setParameter", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *PSquarePercentile::class$ = NULL;
          jmethodID *PSquarePercentile::mids$ = NULL;
          bool PSquarePercentile::live$ = false;

          jclass PSquarePercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/PSquarePercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_6690cd47c731f9cd] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/PSquarePercentile;");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantile_456d9a2f64d6b28d] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_quantile_456d9a2f64d6b28d] = env->getMethodID(cls, "quantile", "()D");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PSquarePercentile::PSquarePercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          void PSquarePercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          PSquarePercentile PSquarePercentile::copy() const
          {
            return PSquarePercentile(env->callObjectMethod(this$, mids$[mid_copy_6690cd47c731f9cd]));
          }

          jboolean PSquarePercentile::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jlong PSquarePercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble PSquarePercentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_456d9a2f64d6b28d]);
          }

          jdouble PSquarePercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          jint PSquarePercentile::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          void PSquarePercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }

          jdouble PSquarePercentile::quantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_quantile_456d9a2f64d6b28d]);
          }

          ::java::lang::String PSquarePercentile::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data);
          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data);
          static PyGetSetDef t_PSquarePercentile__fields_[] = {
            DECLARE_GET_FIELD(t_PSquarePercentile, n),
            DECLARE_GET_FIELD(t_PSquarePercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PSquarePercentile__methods_[] = {
            DECLARE_METHOD(t_PSquarePercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, equals, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, quantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PSquarePercentile)[] = {
            { Py_tp_methods, t_PSquarePercentile__methods_ },
            { Py_tp_init, (void *) t_PSquarePercentile_init_ },
            { Py_tp_getset, t_PSquarePercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PSquarePercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(PSquarePercentile, t_PSquarePercentile, PSquarePercentile);

          void t_PSquarePercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(PSquarePercentile), &PY_TYPE_DEF(PSquarePercentile), module, "PSquarePercentile", 0);
          }

          void t_PSquarePercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "class_", make_descriptor(PSquarePercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "wrapfn_", make_descriptor(t_PSquarePercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PSquarePercentile::initializeClass, 1)))
              return NULL;
            return t_PSquarePercentile::wrap_Object(PSquarePercentile(((t_PSquarePercentile *) arg)->object.this$));
          }
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PSquarePercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            PSquarePercentile object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = PSquarePercentile(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args)
          {
            PSquarePercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_PSquarePercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.quantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data)
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
#include "org/hipparchus/linear/SchurTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SchurTransformer::class$ = NULL;
      jmethodID *SchurTransformer::mids$ = NULL;
      bool SchurTransformer::live$ = false;

      jclass SchurTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SchurTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_7116bbecdd8ceb21] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getT_7116bbecdd8ceb21] = env->getMethodID(cls, "getT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getT_7116bbecdd8ceb21]));
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
      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data);
      static PyGetSetDef t_SchurTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_SchurTransformer, p),
        DECLARE_GET_FIELD(t_SchurTransformer, pT),
        DECLARE_GET_FIELD(t_SchurTransformer, t),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SchurTransformer__methods_[] = {
        DECLARE_METHOD(t_SchurTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getPT, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SchurTransformer)[] = {
        { Py_tp_methods, t_SchurTransformer__methods_ },
        { Py_tp_init, (void *) t_SchurTransformer_init_ },
        { Py_tp_getset, t_SchurTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SchurTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SchurTransformer, t_SchurTransformer, SchurTransformer);

      void t_SchurTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(SchurTransformer), &PY_TYPE_DEF(SchurTransformer), module, "SchurTransformer", 0);
      }

      void t_SchurTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "class_", make_descriptor(SchurTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "wrapfn_", make_descriptor(t_SchurTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SchurTransformer::initializeClass, 1)))
          return NULL;
        return t_SchurTransformer::wrap_Object(SchurTransformer(((t_SchurTransformer *) arg)->object.this$));
      }
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SchurTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SchurTransformer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SchurTransformer(a0, a1));
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

      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
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
                mids$[mid_accept_a455f3ff24eb0b47] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$FrameConsumer::accept(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a455f3ff24eb0b47], a0.this$);
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
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProvider::class$ = NULL;
      jmethodID *PythonAttitudeProvider::mids$ = NULL;
      bool PythonAttitudeProvider::live$ = false;

      jclass PythonAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProvider::PythonAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self);
      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProvider, t_PythonAttitudeProvider, PythonAttitudeProvider);

      void t_PythonAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProvider), &PY_TYPE_DEF(PythonAttitudeProvider), module, "PythonAttitudeProvider", 1);
      }

      void t_PythonAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "class_", make_descriptor(PythonAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProvider_getAttitude1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProvider::wrap_Object(PythonAttitudeProvider(((t_PythonAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data)
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
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/Optional.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *Ephemeris::class$ = NULL;
        jmethodID *Ephemeris::mids$ = NULL;
        bool Ephemeris::live$ = false;

        jclass Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d1b8ec2000165cbf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;I)V");
            mids$[mid_init$_350dc18a1f44756a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_6682fdf9be8b3bcf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_a184da22b0a57732] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_9078d21669db6ed5] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_basicPropagate_889031abe87f3b14] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_checkInputConsistency_a184da22b0a57732] = env->getStaticMethodID(cls, "checkInputConsistency", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_checkStatesAndCovariancesConsistency_694ad53d6db8f702] = env->getStaticMethodID(cls, "checkStatesAndCovariancesConsistency", "(Ljava/util/List;Ljava/util/List;)V");
            mids$[mid_getCovariance_fe7043212cbc6b5b] = env->getMethodID(cls, "getCovariance", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/Optional;");
            mids$[mid_getCovarianceInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getCovarianceInterpolator", "()Ljava/util/Optional;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStateInterpolator_c8e4b57f7805ef06] = env->getMethodID(cls, "getStateInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
            mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
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

        Ephemeris::Ephemeris(const ::java::util::List & a0, jint a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d1b8ec2000165cbf, a0.this$, a1)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_350dc18a1f44756a, a0.this$, a1.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6682fdf9be8b3bcf, a0.this$, a1.this$, a2.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a184da22b0a57732, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9078d21669db6ed5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::SpacecraftState Ephemeris::basicPropagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_basicPropagate_889031abe87f3b14], a0.this$));
        }

        void Ephemeris::checkInputConsistency(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkInputConsistency_a184da22b0a57732], a0.this$, a1.this$, a2.this$, a3.this$);
        }

        void Ephemeris::checkStatesAndCovariancesConsistency(const ::java::util::List & a0, const ::java::util::List & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkStatesAndCovariancesConsistency_694ad53d6db8f702], a0.this$, a1.this$);
        }

        ::java::util::Optional Ephemeris::getCovariance(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovariance_fe7043212cbc6b5b], a0.this$));
        }

        ::java::util::Optional Ephemeris::getCovarianceInterpolator() const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovarianceInterpolator_c56b7edc0c3c7d86]));
        }

        ::org::orekit::frames::Frame Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::propagation::SpacecraftState Ephemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
        }

        JArray< ::java::lang::String > Ephemeris::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::TimeInterpolator Ephemeris::getStateInterpolator() const
        {
          return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getStateInterpolator_c8e4b57f7805ef06]));
        }

        jboolean Ephemeris::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
        }

        void Ephemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
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
        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data);
        static PyGetSetDef t_Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_Ephemeris, covarianceInterpolator),
          DECLARE_GET_FIELD(t_Ephemeris, frame),
          DECLARE_GET_FIELD(t_Ephemeris, initialState),
          DECLARE_GET_FIELD(t_Ephemeris, managedAdditionalStates),
          DECLARE_GET_FIELD(t_Ephemeris, maxDate),
          DECLARE_GET_FIELD(t_Ephemeris, minDate),
          DECLARE_GET_FIELD(t_Ephemeris, stateInterpolator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Ephemeris__methods_[] = {
          DECLARE_METHOD(t_Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, basicPropagate, METH_O),
          DECLARE_METHOD(t_Ephemeris, checkInputConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, checkStatesAndCovariancesConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, getCovariance, METH_O),
          DECLARE_METHOD(t_Ephemeris, getCovarianceInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getStateInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ephemeris)[] = {
          { Py_tp_methods, t_Ephemeris__methods_ },
          { Py_tp_init, (void *) t_Ephemeris_init_ },
          { Py_tp_getset, t_Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ephemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(Ephemeris, t_Ephemeris, Ephemeris);

        void t_Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(Ephemeris), &PY_TYPE_DEF(Ephemeris), module, "Ephemeris", 0);
        }

        void t_Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "class_", make_descriptor(Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "wrapfn_", make_descriptor(t_Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ephemeris::initializeClass, 1)))
            return NULL;
          return t_Ephemeris::wrap_Object(Ephemeris(((t_Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3, a4));
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

        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.basicPropagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "basicPropagate", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkInputConsistency(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkInputConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkStatesAndCovariancesConsistency(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkStatesAndCovariancesConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::util::Optional result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getCovariance(a0));
            return ::java::util::t_Optional::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(StateCovariance));
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self)
        {
          ::java::util::Optional result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self)
        {
          ::org::orekit::time::TimeInterpolator result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data)
        {
          ::java::util::Optional value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::TimeInterpolator value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *StepHandlerMultiplexer::class$ = NULL;
        jmethodID *StepHandlerMultiplexer::mids$ = NULL;
        bool StepHandlerMultiplexer::live$ = false;

        jclass StepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/StepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_dbe30cb4a191086d] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
            mids$[mid_add_ae887d6ebf6ba107] = env->getMethodID(cls, "add", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getHandlers_a6156df500549a58] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_eb797cf50ec4b2c4] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_remove_1ab9ba6f7cccd409] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_remove_dbe30cb4a191086d] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepHandlerMultiplexer::StepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void StepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_dbe30cb4a191086d], a0.this$);
        }

        void StepHandlerMultiplexer::add(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_ae887d6ebf6ba107], a0, a1.this$);
        }

        void StepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        void StepHandlerMultiplexer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
        }

        ::java::util::List StepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_a6156df500549a58]));
        }

        void StepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_eb797cf50ec4b2c4], a0.this$);
        }

        void StepHandlerMultiplexer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_1ab9ba6f7cccd409], a0.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_dbe30cb4a191086d], a0.this$);
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
        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_StepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_StepHandlerMultiplexer, handlers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_StepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_StepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_StepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_StepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepHandlerMultiplexer, t_StepHandlerMultiplexer, StepHandlerMultiplexer);

        void t_StepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepHandlerMultiplexer), &PY_TYPE_DEF(StepHandlerMultiplexer), module, "StepHandlerMultiplexer", 0);
        }

        void t_StepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "class_", make_descriptor(StepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "wrapfn_", make_descriptor(t_StepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_StepHandlerMultiplexer::wrap_Object(StepHandlerMultiplexer(((t_StepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          StepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = StepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::sampling::PY_TYPE(OrekitStepHandler));
        }

        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args)
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

        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *EGMFormatReader::class$ = NULL;
          jmethodID *EGMFormatReader::mids$ = NULL;
          bool EGMFormatReader::live$ = false;

          jclass EGMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/EGMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_2cdfa26b3936b24f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZZ)V");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1, jboolean a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_2cdfa26b3936b24f, a0.this$, a1, a2)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider EGMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_086897fc27688c23], a0, a1, a2));
          }

          void EGMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args);
          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args);

          static PyMethodDef t_EGMFormatReader__methods_[] = {
            DECLARE_METHOD(t_EGMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_EGMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EGMFormatReader)[] = {
            { Py_tp_methods, t_EGMFormatReader__methods_ },
            { Py_tp_init, (void *) t_EGMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EGMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(EGMFormatReader, t_EGMFormatReader, EGMFormatReader);

          void t_EGMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(EGMFormatReader), &PY_TYPE_DEF(EGMFormatReader), module, "EGMFormatReader", 0);
          }

          void t_EGMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "class_", make_descriptor(EGMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "wrapfn_", make_descriptor(t_EGMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EGMFormatReader::initializeClass, 1)))
              return NULL;
            return t_EGMFormatReader::wrap_Object(EGMFormatReader(((t_EGMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EGMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                jboolean a2;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZZ", &a0, &a1, &a2))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1, a2));
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

          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *KolmogorovSmirnovTest::class$ = NULL;
        jmethodID *KolmogorovSmirnovTest::mids$ = NULL;
        bool KolmogorovSmirnovTest::live$ = false;

        jclass KolmogorovSmirnovTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/KolmogorovSmirnovTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
            mids$[mid_approximateP_fc76f5003eb574a8] = env->getMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_bootstrap_a0d8ac075a455617] = env->getMethodID(cls, "bootstrap", "([D[DI)D");
            mids$[mid_bootstrap_853f5f4eb3684480] = env->getMethodID(cls, "bootstrap", "([D[DIZ)D");
            mids$[mid_cdf_bcad94b64f1e2dd8] = env->getMethodID(cls, "cdf", "(DI)D");
            mids$[mid_cdf_52f64ca5734d1f12] = env->getMethodID(cls, "cdf", "(DIZ)D");
            mids$[mid_cdfExact_bcad94b64f1e2dd8] = env->getMethodID(cls, "cdfExact", "(DI)D");
            mids$[mid_exactP_850e235f3bde160c] = env->getMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_a02fd79302bea67f] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_1ce76fb6ff382da9] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_a02fd79302bea67f] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_6379f5334de861c2] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_942dd14b61b4a3a3] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_206773e96c9fbd6d] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_ksSum_76e9328ecbbb348d] = env->getMethodID(cls, "ksSum", "(DDI)D");
            mids$[mid_pelzGood_bcad94b64f1e2dd8] = env->getMethodID(cls, "pelzGood", "(DI)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KolmogorovSmirnovTest::KolmogorovSmirnovTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        KolmogorovSmirnovTest::KolmogorovSmirnovTest(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

        jdouble KolmogorovSmirnovTest::approximateP(jdouble a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_approximateP_fc76f5003eb574a8], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_a0d8ac075a455617], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_853f5f4eb3684480], a0.this$, a1.this$, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_bcad94b64f1e2dd8], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_52f64ca5734d1f12], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::cdfExact(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdfExact_bcad94b64f1e2dd8], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::exactP(jdouble a0, jint a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_exactP_850e235f3bde160c], a0, a1, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_a02fd79302bea67f], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_a02fd79302bea67f], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_6379f5334de861c2], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_942dd14b61b4a3a3], a0.this$, a1.this$, a2);
        }

        jboolean KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_kolmogorovSmirnovTest_206773e96c9fbd6d], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::ksSum(jdouble a0, jdouble a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_ksSum_76e9328ecbbb348d], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::pelzGood(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pelzGood_bcad94b64f1e2dd8], a0, a1);
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
        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args);

        static PyMethodDef t_KolmogorovSmirnovTest__methods_[] = {
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, approximateP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, bootstrap, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdf, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdfExact, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, exactP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovStatistic, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovTest, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, ksSum, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, pelzGood, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KolmogorovSmirnovTest)[] = {
          { Py_tp_methods, t_KolmogorovSmirnovTest__methods_ },
          { Py_tp_init, (void *) t_KolmogorovSmirnovTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KolmogorovSmirnovTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KolmogorovSmirnovTest, t_KolmogorovSmirnovTest, KolmogorovSmirnovTest);

        void t_KolmogorovSmirnovTest::install(PyObject *module)
        {
          installType(&PY_TYPE(KolmogorovSmirnovTest), &PY_TYPE_DEF(KolmogorovSmirnovTest), module, "KolmogorovSmirnovTest", 0);
        }

        void t_KolmogorovSmirnovTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "class_", make_descriptor(KolmogorovSmirnovTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "wrapfn_", make_descriptor(t_KolmogorovSmirnovTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KolmogorovSmirnovTest::initializeClass, 1)))
            return NULL;
          return t_KolmogorovSmirnovTest::wrap_Object(KolmogorovSmirnovTest(((t_KolmogorovSmirnovTest *) arg)->object.this$));
        }
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KolmogorovSmirnovTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KolmogorovSmirnovTest object((jobject) NULL);

              INT_CALL(object = KolmogorovSmirnovTest());
              self->object = object;
              break;
            }
           case 1:
            {
              jlong a0;
              KolmogorovSmirnovTest object((jobject) NULL);

              if (!parseArgs(args, "J", &a0))
              {
                INT_CALL(object = KolmogorovSmirnovTest(a0));
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

        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "approximateP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[D[DI", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jboolean a3;
              jdouble result;

              if (!parseArgs(args, "[D[DIZ", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "bootstrap", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jint a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DIZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cdf", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.cdfExact(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "cdfExact", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "exactP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.ksSum(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "ksSum", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pelzGood(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pelzGood", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomVectorGenerator::class$ = NULL;
      jmethodID *RandomVectorGenerator::mids$ = NULL;
      bool RandomVectorGenerator::live$ = false;

      jclass RandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > RandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self);

      static PyMethodDef t_RandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomVectorGenerator)[] = {
        { Py_tp_methods, t_RandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomVectorGenerator, t_RandomVectorGenerator, RandomVectorGenerator);

      void t_RandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomVectorGenerator), &PY_TYPE_DEF(RandomVectorGenerator), module, "RandomVectorGenerator", 0);
      }

      void t_RandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "class_", make_descriptor(RandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "wrapfn_", make_descriptor(t_RandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomVectorGenerator::wrap_Object(RandomVectorGenerator(((t_RandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleType::class$ = NULL;
      jmethodID *PositionAngleType::mids$ = NULL;
      bool PositionAngleType::live$ = false;
      PositionAngleType *PositionAngleType::ECCENTRIC = NULL;
      PositionAngleType *PositionAngleType::MEAN = NULL;
      PositionAngleType *PositionAngleType::TRUE = NULL;

      jclass PositionAngleType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_70e344473bfdb002] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_values_6f1b71ae3b347d5b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/PositionAngleType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ECCENTRIC = new PositionAngleType(env->getStaticObjectField(cls, "ECCENTRIC", "Lorg/orekit/orbits/PositionAngleType;"));
          MEAN = new PositionAngleType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/orbits/PositionAngleType;"));
          TRUE = new PositionAngleType(env->getStaticObjectField(cls, "TRUE", "Lorg/orekit/orbits/PositionAngleType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PositionAngleType PositionAngleType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PositionAngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_70e344473bfdb002], a0.this$));
      }

      JArray< PositionAngleType > PositionAngleType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PositionAngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_6f1b71ae3b347d5b]));
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
      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args);
      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PositionAngleType_values(PyTypeObject *type);
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data);
      static PyGetSetDef t_PositionAngleType__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleType__methods_[] = {
        DECLARE_METHOD(t_PositionAngleType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PositionAngleType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleType)[] = {
        { Py_tp_methods, t_PositionAngleType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PositionAngleType, t_PositionAngleType, PositionAngleType);
      PyObject *t_PositionAngleType::wrap_Object(const PositionAngleType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PositionAngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PositionAngleType::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleType), &PY_TYPE_DEF(PositionAngleType), module, "PositionAngleType", 0);
      }

      void t_PositionAngleType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "class_", make_descriptor(PositionAngleType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "wrapfn_", make_descriptor(t_PositionAngleType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PositionAngleType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "ECCENTRIC", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::ECCENTRIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "MEAN", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "TRUE", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::TRUE)));
      }

      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleType::initializeClass, 1)))
          return NULL;
        return t_PositionAngleType::wrap_Object(PositionAngleType(((t_PositionAngleType *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PositionAngleType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::valueOf(a0));
          return t_PositionAngleType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PositionAngleType_values(PyTypeObject *type)
      {
        JArray< PositionAngleType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::values());
        return JArray<jobject>(result.this$).wrap(t_PositionAngleType::wrap_jobject);
      }
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
