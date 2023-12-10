#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Position::class$ = NULL;
        jmethodID *Position::mids$ = NULL;
        bool Position::live$ = false;
        ::java::lang::String *Position::MEASUREMENT_TYPE = NULL;

        jclass Position::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Position");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a7fba21233f79b3c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_bdbed7ce4ed084f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_e6a5d93c43841635] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_43de1192439efa92] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_43de1192439efa92] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a7fba21233f79b3c, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< JArray< jdouble > > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_bdbed7ce4ed084f0, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e6a5d93c43841635, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        JArray< JArray< jdouble > > Position::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_43de1192439efa92]));
        }

        JArray< JArray< jdouble > > Position::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_43de1192439efa92]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Position::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
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
        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_of_(t_Position *self, PyObject *args);
        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self);
        static PyObject *t_Position_getCovarianceMatrix(t_Position *self);
        static PyObject *t_Position_getPosition(t_Position *self);
        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__position(t_Position *self, void *data);
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data);
        static PyGetSetDef t_Position__fields_[] = {
          DECLARE_GET_FIELD(t_Position, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_Position, covarianceMatrix),
          DECLARE_GET_FIELD(t_Position, position),
          DECLARE_GET_FIELD(t_Position, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Position__methods_[] = {
          DECLARE_METHOD(t_Position, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, of_, METH_VARARGS),
          DECLARE_METHOD(t_Position, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getPosition, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Position)[] = {
          { Py_tp_methods, t_Position__methods_ },
          { Py_tp_init, (void *) t_Position_init_ },
          { Py_tp_getset, t_Position__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Position)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(Position, t_Position, Position);
        PyObject *t_Position::wrap_Object(const Position& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Position::install(PyObject *module)
        {
          installType(&PY_TYPE(Position), &PY_TYPE_DEF(Position), module, "Position", 0);
        }

        void t_Position::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "class_", make_descriptor(Position::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "wrapfn_", make_descriptor(t_Position::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "boxfn_", make_descriptor(boxObject));
          env->getClass(Position::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "MEASUREMENT_TYPE", make_descriptor(j2p(*Position::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Position::initializeClass, 1)))
            return NULL;
          return t_Position::wrap_Object(Position(((t_Position *) arg)->object.this$));
        }
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Position::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Position_of_(t_Position *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getCovarianceMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getPosition(t_Position *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__position(t_Position *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *LazyLoadedGeoMagneticFields::class$ = NULL;
        jmethodID *LazyLoadedGeoMagneticFields::mids$ = NULL;
        bool LazyLoadedGeoMagneticFields::live$ = false;

        jclass LazyLoadedGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/LazyLoadedGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_92cedf0c8913c23b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
            mids$[mid_getField_391592e224573f6b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_e74dfaa8c09512d5] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_e74dfaa8c09512d5] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LazyLoadedGeoMagneticFields::LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92cedf0c8913c23b, a0.this$)) {}

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_391592e224573f6b], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_e74dfaa8c09512d5], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_e74dfaa8c09512d5], a0));
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
        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args);
        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_LazyLoadedGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGeoMagneticFields)[] = {
          { Py_tp_methods, t_LazyLoadedGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_LazyLoadedGeoMagneticFields_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LazyLoadedGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LazyLoadedGeoMagneticFields, t_LazyLoadedGeoMagneticFields, LazyLoadedGeoMagneticFields);

        void t_LazyLoadedGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(LazyLoadedGeoMagneticFields), &PY_TYPE_DEF(LazyLoadedGeoMagneticFields), module, "LazyLoadedGeoMagneticFields", 0);
        }

        void t_LazyLoadedGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "class_", make_descriptor(LazyLoadedGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "wrapfn_", make_descriptor(t_LazyLoadedGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_LazyLoadedGeoMagneticFields::wrap_Object(LazyLoadedGeoMagneticFields(((t_LazyLoadedGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
          LazyLoadedGeoMagneticFields object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
          {
            INT_CALL(object = LazyLoadedGeoMagneticFields(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Data::class$ = NULL;
              jmethodID *SsrIgm05Data::mids$ = NULL;
              bool SsrIgm05Data::live$ = false;

              jclass SsrIgm05Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCodeBias_1701d66fba3cf0af] = env->getMethodID(cls, "addCodeBias", "(Lorg/orekit/gnss/metric/messages/common/CodeBias;)V");
                  mids$[mid_getCodeBias_70d8f10d6f500de3] = env->getMethodID(cls, "getCodeBias", "(I)Lorg/orekit/gnss/metric/messages/common/CodeBias;");
                  mids$[mid_getCodeBiases_d6753b7055940a54] = env->getMethodID(cls, "getCodeBiases", "()Ljava/util/Map;");
                  mids$[mid_getNumberOfBiasesProcessed_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_setNumberOfBiasesProcessed_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Data::SsrIgm05Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              void SsrIgm05Data::addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCodeBias_1701d66fba3cf0af], a0.this$);
              }

              ::org::orekit::gnss::metric::messages::common::CodeBias SsrIgm05Data::getCodeBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::CodeBias(env->callObjectMethod(this$, mids$[mid_getCodeBias_70d8f10d6f500de3], a0));
              }

              ::java::util::Map SsrIgm05Data::getCodeBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCodeBiases_d6753b7055940a54]));
              }

              jint SsrIgm05Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_f2f64475e4580546]);
              }

              void SsrIgm05Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_0a2a1ac2721c0336], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data);
              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data);
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm05Data__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05Data, codeBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm05Data, numberOfBiasesProcessed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, addCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, setNumberOfBiasesProcessed, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Data)[] = {
                { Py_tp_methods, t_SsrIgm05Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Data_init_ },
                { Py_tp_getset, t_SsrIgm05Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Data, t_SsrIgm05Data, SsrIgm05Data);

              void t_SsrIgm05Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Data), &PY_TYPE_DEF(SsrIgm05Data), module, "SsrIgm05Data", 0);
              }

              void t_SsrIgm05Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "class_", make_descriptor(SsrIgm05Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "wrapfn_", make_descriptor(t_SsrIgm05Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Data::wrap_Object(SsrIgm05Data(((t_SsrIgm05Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Data object((jobject) NULL);

                INT_CALL(object = SsrIgm05Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::CodeBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::CodeBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCodeBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::CodeBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getCodeBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_CodeBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(CodeBias));
              }

              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
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
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCombination::class$ = NULL;
          jmethodID *PhaseMinusCodeCombination::mids$ = NULL;
          bool PhaseMinusCodeCombination::live$ = false;

          jclass PhaseMinusCodeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_824133ce4aec3505] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PhaseMinusCodeCombination__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCombination)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCombination, t_PhaseMinusCodeCombination, PhaseMinusCodeCombination);

          void t_PhaseMinusCodeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCombination), &PY_TYPE_DEF(PhaseMinusCodeCombination), module, "PhaseMinusCodeCombination", 0);
          }

          void t_PhaseMinusCodeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "class_", make_descriptor(PhaseMinusCodeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "wrapfn_", make_descriptor(t_PhaseMinusCodeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCombination::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCombination::wrap_Object(PhaseMinusCodeCombination(((t_PhaseMinusCodeCombination *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger$LoggedEvent::class$ = NULL;
        jmethodID *EventsLogger$LoggedEvent::mids$ = NULL;
        bool EventsLogger$LoggedEvent::live$ = false;

        jclass EventsLogger$LoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger$LoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_27b528e7858202ed] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate EventsLogger$LoggedEvent::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger$LoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_27b528e7858202ed]));
        }

        ::org::orekit::propagation::SpacecraftState EventsLogger$LoggedEvent::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_dd3e4a8d51055f1f]));
        }

        jboolean EventsLogger$LoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_e470b6d9e0d979db]);
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
        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data);
        static PyGetSetDef t_EventsLogger$LoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, date),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, increasing),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger$LoggedEvent__methods_[] = {
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger$LoggedEvent)[] = {
          { Py_tp_methods, t_EventsLogger$LoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventsLogger$LoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger$LoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger$LoggedEvent, t_EventsLogger$LoggedEvent, EventsLogger$LoggedEvent);

        void t_EventsLogger$LoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger$LoggedEvent), &PY_TYPE_DEF(EventsLogger$LoggedEvent), module, "EventsLogger$LoggedEvent", 0);
        }

        void t_EventsLogger$LoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "class_", make_descriptor(EventsLogger$LoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "wrapfn_", make_descriptor(t_EventsLogger$LoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 1)))
            return NULL;
          return t_EventsLogger$LoggedEvent::wrap_Object(EventsLogger$LoggedEvent(((t_EventsLogger$LoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFHeader::class$ = NULL;
        jmethodID *CPFHeader::mids$ = NULL;
        bool CPFHeader::live$ = false;

        jclass CPFHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getCenterOfMassOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getCenterOfMassOffset", "()D");
            mids$[mid_getPrf_456d9a2f64d6b28d] = env->getMethodID(cls, "getPrf", "()D");
            mids$[mid_getRefFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getRefFrameId_f2f64475e4580546] = env->getMethodID(cls, "getRefFrameId", "()I");
            mids$[mid_getRotationalAngleType_f2f64475e4580546] = env->getMethodID(cls, "getRotationalAngleType", "()I");
            mids$[mid_getSource_0090f7797e403f43] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
            mids$[mid_getStep_f2f64475e4580546] = env->getMethodID(cls, "getStep", "()I");
            mids$[mid_getSubDailySequenceNumber_f2f64475e4580546] = env->getMethodID(cls, "getSubDailySequenceNumber", "()I");
            mids$[mid_getTranspClkRef_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspClkRef", "()D");
            mids$[mid_getTranspOscDrift_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspTransmitDelay_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspTransmitDelay", "()D");
            mids$[mid_getTranspUtcOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspUtcOffset", "()D");
            mids$[mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isCompatibleWithTIVs_e470b6d9e0d979db] = env->getMethodID(cls, "isCompatibleWithTIVs", "()Z");
            mids$[mid_setCenterOfMassOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCenterOfMassOffset", "(D)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsCompatibleWithTIVs_50a2e0b139e80a58] = env->getMethodID(cls, "setIsCompatibleWithTIVs", "(Z)V");
            mids$[mid_setPrf_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPrf", "(D)V");
            mids$[mid_setRefFrame_b1992bd1bb70f476] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_setRefFrameId_0a2a1ac2721c0336] = env->getMethodID(cls, "setRefFrameId", "(I)V");
            mids$[mid_setRotationalAngleType_0a2a1ac2721c0336] = env->getMethodID(cls, "setRotationalAngleType", "(I)V");
            mids$[mid_setSource_e939c6558ae8d313] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
            mids$[mid_setStep_0a2a1ac2721c0336] = env->getMethodID(cls, "setStep", "(I)V");
            mids$[mid_setSubDailySequenceNumber_0a2a1ac2721c0336] = env->getMethodID(cls, "setSubDailySequenceNumber", "(I)V");
            mids$[mid_setTranspClkRef_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspClkRef", "(D)V");
            mids$[mid_setTranspOscDrift_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspTransmitDelay_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspTransmitDelay", "(D)V");
            mids$[mid_setTranspUtcOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspUtcOffset", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFHeader::CPFHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble CPFHeader::getCenterOfMassOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassOffset_456d9a2f64d6b28d]);
        }

        jdouble CPFHeader::getPrf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrf_456d9a2f64d6b28d]);
        }

        ::org::orekit::frames::Frame CPFHeader::getRefFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRefFrame_c8fe21bcdac65bf6]));
        }

        jint CPFHeader::getRefFrameId() const
        {
          return env->callIntMethod(this$, mids$[mid_getRefFrameId_f2f64475e4580546]);
        }

        jint CPFHeader::getRotationalAngleType() const
        {
          return env->callIntMethod(this$, mids$[mid_getRotationalAngleType_f2f64475e4580546]);
        }

        ::java::lang::String CPFHeader::getSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_0090f7797e403f43]));
        }

        jint CPFHeader::getStep() const
        {
          return env->callIntMethod(this$, mids$[mid_getStep_f2f64475e4580546]);
        }

        jint CPFHeader::getSubDailySequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSubDailySequenceNumber_f2f64475e4580546]);
        }

        jdouble CPFHeader::getTranspClkRef() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRef_456d9a2f64d6b28d]);
        }

        jdouble CPFHeader::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_456d9a2f64d6b28d]);
        }

        jdouble CPFHeader::getTranspTransmitDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspTransmitDelay_456d9a2f64d6b28d]);
        }

        jdouble CPFHeader::getTranspUtcOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUtcOffset_456d9a2f64d6b28d]);
        }

        jboolean CPFHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db]);
        }

        jboolean CPFHeader::isCompatibleWithTIVs() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCompatibleWithTIVs_e470b6d9e0d979db]);
        }

        void CPFHeader::setCenterOfMassOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCenterOfMassOffset_77e0f9a1f260e2e5], a0);
        }

        void CPFHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58], a0);
        }

        void CPFHeader::setIsCompatibleWithTIVs(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCompatibleWithTIVs_50a2e0b139e80a58], a0);
        }

        void CPFHeader::setPrf(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrf_77e0f9a1f260e2e5], a0);
        }

        void CPFHeader::setRefFrame(const ::org::orekit::frames::Frame & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrame_b1992bd1bb70f476], a0.this$);
        }

        void CPFHeader::setRefFrameId(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrameId_0a2a1ac2721c0336], a0);
        }

        void CPFHeader::setRotationalAngleType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRotationalAngleType_0a2a1ac2721c0336], a0);
        }

        void CPFHeader::setSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSource_e939c6558ae8d313], a0.this$);
        }

        void CPFHeader::setStep(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStep_0a2a1ac2721c0336], a0);
        }

        void CPFHeader::setSubDailySequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSubDailySequenceNumber_0a2a1ac2721c0336], a0);
        }

        void CPFHeader::setTranspClkRef(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRef_77e0f9a1f260e2e5], a0);
        }

        void CPFHeader::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_77e0f9a1f260e2e5], a0);
        }

        void CPFHeader::setTranspTransmitDelay(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspTransmitDelay_77e0f9a1f260e2e5], a0);
        }

        void CPFHeader::setTranspUtcOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUtcOffset_77e0f9a1f260e2e5], a0);
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
        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self);
        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPFHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CPFHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CPFHeader, centerOfMassOffset),
          DECLARE_GET_FIELD(t_CPFHeader, compatibleWithTIVs),
          DECLARE_GETSET_FIELD(t_CPFHeader, prf),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrame),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrameId),
          DECLARE_GETSET_FIELD(t_CPFHeader, rotationalAngleType),
          DECLARE_GETSET_FIELD(t_CPFHeader, source),
          DECLARE_GETSET_FIELD(t_CPFHeader, step),
          DECLARE_GETSET_FIELD(t_CPFHeader, subDailySequenceNumber),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpClkRef),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpTransmitDelay),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpUtcOffset),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPFHeader__methods_[] = {
          DECLARE_METHOD(t_CPFHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, getCenterOfMassOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getPrf, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrameId, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRotationalAngleType, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSource, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getStep, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSubDailySequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspClkRef, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspTransmitDelay, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspUtcOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCompatibleWithTIVs, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, setCenterOfMassOffset, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCompatibleWithTIVs, METH_O),
          DECLARE_METHOD(t_CPFHeader, setPrf, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrame, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrameId, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRotationalAngleType, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSource, METH_O),
          DECLARE_METHOD(t_CPFHeader, setStep, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSubDailySequenceNumber, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspClkRef, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspTransmitDelay, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspUtcOffset, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFHeader)[] = {
          { Py_tp_methods, t_CPFHeader__methods_ },
          { Py_tp_init, (void *) t_CPFHeader_init_ },
          { Py_tp_getset, t_CPFHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CPFHeader, t_CPFHeader, CPFHeader);

        void t_CPFHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFHeader), &PY_TYPE_DEF(CPFHeader), module, "CPFHeader", 0);
        }

        void t_CPFHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "class_", make_descriptor(CPFHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "wrapfn_", make_descriptor(t_CPFHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFHeader::initializeClass, 1)))
            return NULL;
          return t_CPFHeader::wrap_Object(CPFHeader(((t_CPFHeader *) arg)->object.this$));
        }
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds)
        {
          CPFHeader object((jobject) NULL);

          INT_CALL(object = CPFHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRefFrameId());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSource());
          return j2p(result);
        }

        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStep());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setCenterOfMassOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCenterOfMassOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCompatibleWithTIVs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCompatibleWithTIVs", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrf(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrf", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setRefFrame(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRefFrameId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrameId", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRotationalAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRotationalAngleType", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSource", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStep", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSubDailySequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSubDailySequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRef(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRef", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspTransmitDelay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspTransmitDelay", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUtcOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUtcOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setCenterOfMassOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "centerOfMassOffset", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrf());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrf(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "prf", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              INT_CALL(self->object.setRefFrame(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRefFrameId());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRefFrameId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrameId", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRotationalAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rotationalAngleType", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSource());
          return j2p(value);
        }
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "source", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStep());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStep(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "step", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSubDailySequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "subDailySequenceNumber", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRef(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRef", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspTransmitDelay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpTransmitDelay", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUtcOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUtcOffset", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonAbstractMeasurement::class$ = NULL;
        jmethodID *PythonAbstractMeasurement::mids$ = NULL;
        bool PythonAbstractMeasurement::live$ = false;

        jclass PythonAbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonAbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_52d9ce107c23b7dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLjava/util/List;)V");
            mids$[mid_addParameterDriver_a4c33e1e91b3ca8e] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractMeasurement::PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_52d9ce107c23b7dd, a0.this$, a1, a2, a3, a4.this$)) {}

        void PythonAbstractMeasurement::addParameterDriver(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addParameterDriver_a4c33e1e91b3ca8e], a0.this$);
        }

        void PythonAbstractMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args);
        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self);
        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args);
        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data);
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data);
        static PyGetSetDef t_PythonAbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, self),
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, addParameterDriver, METH_O),
          DECLARE_METHOD(t_PythonAbstractMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurement)[] = {
          { Py_tp_methods, t_PythonAbstractMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractMeasurement_init_ },
          { Py_tp_getset, t_PythonAbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonAbstractMeasurement, t_PythonAbstractMeasurement, PythonAbstractMeasurement);
        PyObject *t_PythonAbstractMeasurement::wrap_Object(const PythonAbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractMeasurement), &PY_TYPE_DEF(PythonAbstractMeasurement), module, "PythonAbstractMeasurement", 1);
        }

        void t_PythonAbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "class_", make_descriptor(PythonAbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "wrapfn_", make_descriptor(t_PythonAbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractMeasurement::wrap_Object(PythonAbstractMeasurement(((t_PythonAbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          PythonAbstractMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addParameterDriver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addParameterDriver", arg);
          return NULL;
        }

        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data)
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
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarN::class$ = NULL;
          jmethodID *CopolarN::mids$ = NULL;
          bool CopolarN::live$ = false;

          jclass CopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_456d9a2f64d6b28d] = env->getMethodID(cls, "cn", "()D");
              mids$[mid_dn_456d9a2f64d6b28d] = env->getMethodID(cls, "dn", "()D");
              mids$[mid_sn_456d9a2f64d6b28d] = env->getMethodID(cls, "sn", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarN::cn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cn_456d9a2f64d6b28d]);
          }

          jdouble CopolarN::dn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dn_456d9a2f64d6b28d]);
          }

          jdouble CopolarN::sn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sn_456d9a2f64d6b28d]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_cn(t_CopolarN *self);
          static PyObject *t_CopolarN_dn(t_CopolarN *self);
          static PyObject *t_CopolarN_sn(t_CopolarN *self);

          static PyMethodDef t_CopolarN__methods_[] = {
            DECLARE_METHOD(t_CopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarN)[] = {
            { Py_tp_methods, t_CopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarN, t_CopolarN, CopolarN);

          void t_CopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarN), &PY_TYPE_DEF(CopolarN), module, "CopolarN", 0);
          }

          void t_CopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "class_", make_descriptor(CopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "wrapfn_", make_descriptor(t_CopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarN::initializeClass, 1)))
              return NULL;
            return t_CopolarN::wrap_Object(CopolarN(((t_CopolarN *) arg)->object.this$));
          }
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarN_cn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_dn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_sn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sn());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitBlender::class$ = NULL;
      jmethodID *FieldOrbitBlender::mids$ = NULL;
      bool FieldOrbitBlender::live$ = false;

      jclass FieldOrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c6bf8d65cb88df73] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_7aa8759b5cd6f696] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitBlender::FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction & a0, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_c6bf8d65cb88df73, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::orbits::FieldOrbit FieldOrbitBlender::interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_7aa8759b5cd6f696], a0.this$));
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
      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args);
      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args);
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data);
      static PyGetSetDef t_FieldOrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitBlender__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitBlender, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitBlender)[] = {
        { Py_tp_methods, t_FieldOrbitBlender__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitBlender_init_ },
        { Py_tp_getset, t_FieldOrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitBlender, t_FieldOrbitBlender, FieldOrbitBlender);
      PyObject *t_FieldOrbitBlender::wrap_Object(const FieldOrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitBlender), &PY_TYPE_DEF(FieldOrbitBlender), module, "FieldOrbitBlender", 0);
      }

      void t_FieldOrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "class_", make_descriptor(FieldOrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "wrapfn_", make_descriptor(t_FieldOrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitBlender::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitBlender::wrap_Object(FieldOrbitBlender(((t_FieldOrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        FieldOrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "KKk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction::initializeClass, ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::parameters_, &a2))
        {
          INT_CALL(object = FieldOrbitBlender(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args)
      {
        ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractFieldTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldOrbitBlender), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well512a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well512a::class$ = NULL;
      jmethodID *Well512a::mids$ = NULL;
      bool Well512a::live$ = false;

      jclass Well512a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well512a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well512a::Well512a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well512a::Well512a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well512a::Well512a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well512a::Well512a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well512a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
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
      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args);

      static PyMethodDef t_Well512a__methods_[] = {
        DECLARE_METHOD(t_Well512a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well512a)[] = {
        { Py_tp_methods, t_Well512a__methods_ },
        { Py_tp_init, (void *) t_Well512a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well512a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well512a, t_Well512a, Well512a);

      void t_Well512a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well512a), &PY_TYPE_DEF(Well512a), module, "Well512a", 0);
      }

      void t_Well512a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "class_", make_descriptor(Well512a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "wrapfn_", make_descriptor(t_Well512a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well512a::initializeClass, 1)))
          return NULL;
        return t_Well512a::wrap_Object(Well512a(((t_Well512a *) arg)->object.this$));
      }
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well512a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well512a object((jobject) NULL);

            INT_CALL(object = Well512a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well512a(a0));
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

      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well512a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUpFactory::class$ = NULL;
          jmethodID *InterSatellitesWindUpFactory::mids$ = NULL;
          bool InterSatellitesWindUpFactory::live$ = false;

          jclass InterSatellitesWindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_8e2f552eba12b328] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesWindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesWindUpFactory::InterSatellitesWindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp InterSatellitesWindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::estimation::measurements::gnss::Dipole & a5) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_8e2f552eba12b328], a0.this$, a1, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args);

          static PyMethodDef t_InterSatellitesWindUpFactory__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUpFactory)[] = {
            { Py_tp_methods, t_InterSatellitesWindUpFactory__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesWindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUpFactory, t_InterSatellitesWindUpFactory, InterSatellitesWindUpFactory);

          void t_InterSatellitesWindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUpFactory), &PY_TYPE_DEF(InterSatellitesWindUpFactory), module, "InterSatellitesWindUpFactory", 0);
          }

          void t_InterSatellitesWindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "class_", make_descriptor(InterSatellitesWindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "wrapfn_", make_descriptor(t_InterSatellitesWindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUpFactory::wrap_Object(InterSatellitesWindUpFactory(((t_InterSatellitesWindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            InterSatellitesWindUpFactory object((jobject) NULL);

            INT_CALL(object = InterSatellitesWindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            jint a4;
            ::org::orekit::estimation::measurements::gnss::Dipole a5((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp result((jobject) NULL);

            if (!parseArgs(args, "KIkKIk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesWindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *StableRandomGenerator::class$ = NULL;
      jmethodID *StableRandomGenerator::mids$ = NULL;
      bool StableRandomGenerator::live$ = false;

      jclass StableRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/StableRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d45e387114736704] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;DD)V");
          mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StableRandomGenerator::StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d45e387114736704, a0.this$, a1, a2)) {}

      jdouble StableRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d]);
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
      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self);

      static PyMethodDef t_StableRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_StableRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StableRandomGenerator)[] = {
        { Py_tp_methods, t_StableRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_StableRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StableRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StableRandomGenerator, t_StableRandomGenerator, StableRandomGenerator);

      void t_StableRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(StableRandomGenerator), &PY_TYPE_DEF(StableRandomGenerator), module, "StableRandomGenerator", 0);
      }

      void t_StableRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "class_", make_descriptor(StableRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "wrapfn_", make_descriptor(t_StableRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StableRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_StableRandomGenerator::wrap_Object(StableRandomGenerator(((t_StableRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StableRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        StableRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = StableRandomGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldMaxGapInterpolationGrid::class$ = NULL;
            jmethodID *FieldMaxGapInterpolationGrid::mids$ = NULL;
            bool FieldMaxGapInterpolationGrid::live$ = false;

            jclass FieldMaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGridPoints_492e97ecdce43bb1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldMaxGapInterpolationGrid::FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldMaxGapInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_492e97ecdce43bb1], a0.this$, a1.this$));
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
            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldMaxGapInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldMaxGapInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldMaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldMaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldMaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldMaxGapInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldMaxGapInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldMaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldMaxGapInterpolationGrid, t_FieldMaxGapInterpolationGrid, FieldMaxGapInterpolationGrid);
            PyObject *t_FieldMaxGapInterpolationGrid::wrap_Object(const FieldMaxGapInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldMaxGapInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldMaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldMaxGapInterpolationGrid), &PY_TYPE_DEF(FieldMaxGapInterpolationGrid), module, "FieldMaxGapInterpolationGrid", 0);
            }

            void t_FieldMaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "class_", make_descriptor(FieldMaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_FieldMaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldMaxGapInterpolationGrid::wrap_Object(FieldMaxGapInterpolationGrid(((t_FieldMaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldMaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldMaxGapInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessMultivariateStatistic::class$ = NULL;
        jmethodID *StorelessMultivariateStatistic::mids$ = NULL;
        bool StorelessMultivariateStatistic::live$ = false;

        jclass StorelessMultivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessMultivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_7cdc325af0834901] = env->getMethodID(cls, "getResult", "()[D");
            mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessMultivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        jint StorelessMultivariateStatistic::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        jlong StorelessMultivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        JArray< jdouble > StorelessMultivariateStatistic::getResult() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_7cdc325af0834901]));
        }

        void StorelessMultivariateStatistic::increment(const JArray< jdouble > & a0) const
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
      namespace descriptive {
        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessMultivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, dimension),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessMultivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessMultivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessMultivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessMultivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessMultivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessMultivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StorelessMultivariateStatistic, t_StorelessMultivariateStatistic, StorelessMultivariateStatistic);

        void t_StorelessMultivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessMultivariateStatistic), &PY_TYPE_DEF(StorelessMultivariateStatistic), module, "StorelessMultivariateStatistic", 0);
        }

        void t_StorelessMultivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "class_", make_descriptor(StorelessMultivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "wrapfn_", make_descriptor(t_StorelessMultivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessMultivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessMultivariateStatistic::wrap_Object(StorelessMultivariateStatistic(((t_StorelessMultivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessMultivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getResult());
          return result.wrap();
        }

        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg)
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

        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getResult());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/gnss/DOP.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_compute_5666ea45ed4be699] = env->getMethodID(cls, "compute", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/gnss/DOP;");
          mids$[mid_create_806c880f31bef4aa] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_getElevationMask_5d6f826de9792bc8] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
          mids$[mid_getMinElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinElevation", "()D");
          mids$[mid_withElevationMask_d0c786f768b90623] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_withMinElevation_13b58ecd66c656d0] = env->getMethodID(cls, "withMinElevation", "(D)Lorg/orekit/gnss/DOPComputer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DOP_MIN_ELEVATION = env->getStaticDoubleField(cls, "DOP_MIN_ELEVATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::DOP DOPComputer::compute(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::List & a1) const
      {
        return ::org::orekit::gnss::DOP(env->callObjectMethod(this$, mids$[mid_compute_5666ea45ed4be699], a0.this$, a1.this$));
      }

      DOPComputer DOPComputer::create(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::bodies::GeodeticPoint & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DOPComputer(env->callStaticObjectMethod(cls, mids$[mid_create_806c880f31bef4aa], a0.this$, a1.this$));
      }

      ::org::orekit::utils::ElevationMask DOPComputer::getElevationMask() const
      {
        return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_5d6f826de9792bc8]));
      }

      jdouble DOPComputer::getMinElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinElevation_456d9a2f64d6b28d]);
      }

      DOPComputer DOPComputer::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withElevationMask_d0c786f768b90623], a0.this$));
      }

      DOPComputer DOPComputer::withMinElevation(jdouble a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withMinElevation_13b58ecd66c656d0], a0));
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
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *NadirPointing::class$ = NULL;
      jmethodID *NadirPointing::mids$ = NULL;
      bool NadirPointing::live$ = false;

      jclass NadirPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/NadirPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4bbcb229beadee4c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NadirPointing::NadirPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_4bbcb229beadee4c, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args);

      static PyMethodDef t_NadirPointing__methods_[] = {
        DECLARE_METHOD(t_NadirPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NadirPointing)[] = {
        { Py_tp_methods, t_NadirPointing__methods_ },
        { Py_tp_init, (void *) t_NadirPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NadirPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(NadirPointing, t_NadirPointing, NadirPointing);

      void t_NadirPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(NadirPointing), &PY_TYPE_DEF(NadirPointing), module, "NadirPointing", 0);
      }

      void t_NadirPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "class_", make_descriptor(NadirPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "wrapfn_", make_descriptor(t_NadirPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NadirPointing::initializeClass, 1)))
          return NULL;
        return t_NadirPointing::wrap_Object(NadirPointing(((t_NadirPointing *) arg)->object.this$));
      }
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NadirPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        NadirPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
        {
          INT_CALL(object = NadirPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonSupplier.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonSupplier::class$ = NULL;
      jmethodID *PythonSupplier::mids$ = NULL;
      bool PythonSupplier::live$ = false;

      jclass PythonSupplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonSupplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_get_dfd7647d9110ac9f] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSupplier::PythonSupplier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonSupplier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonSupplier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonSupplier::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args);
      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self);
      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args);
      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data);
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data);
      static PyGetSetDef t_PythonSupplier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSupplier, self),
        DECLARE_GET_FIELD(t_PythonSupplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSupplier__methods_[] = {
        DECLARE_METHOD(t_PythonSupplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonSupplier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSupplier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSupplier)[] = {
        { Py_tp_methods, t_PythonSupplier__methods_ },
        { Py_tp_init, (void *) t_PythonSupplier_init_ },
        { Py_tp_getset, t_PythonSupplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSupplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSupplier, t_PythonSupplier, PythonSupplier);
      PyObject *t_PythonSupplier::wrap_Object(const PythonSupplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonSupplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonSupplier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSupplier), &PY_TYPE_DEF(PythonSupplier), module, "PythonSupplier", 1);
      }

      void t_PythonSupplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "class_", make_descriptor(PythonSupplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "wrapfn_", make_descriptor(t_PythonSupplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSupplier::initializeClass);
        JNINativeMethod methods[] = {
          { "get", "()Ljava/lang/Object;", (void *) t_PythonSupplier_get0 },
          { "pythonDecRef", "()V", (void *) t_PythonSupplier_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSupplier::initializeClass, 1)))
          return NULL;
        return t_PythonSupplier::wrap_Object(PythonSupplier(((t_PythonSupplier *) arg)->object.this$));
      }
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSupplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds)
      {
        PythonSupplier object((jobject) NULL);

        INT_CALL(object = PythonSupplier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args)
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

      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "get", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("get", result);
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

      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data)
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
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PegasusSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PegasusSolver::class$ = NULL;
        jmethodID *PegasusSolver::mids$ = NULL;
        bool PegasusSolver::live$ = false;

        jclass PegasusSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PegasusSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PegasusSolver::PegasusSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        PegasusSolver::PegasusSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}
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
        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args);
        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data);
        static PyGetSetDef t_PegasusSolver__fields_[] = {
          DECLARE_GET_FIELD(t_PegasusSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PegasusSolver__methods_[] = {
          DECLARE_METHOD(t_PegasusSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PegasusSolver)[] = {
          { Py_tp_methods, t_PegasusSolver__methods_ },
          { Py_tp_init, (void *) t_PegasusSolver_init_ },
          { Py_tp_getset, t_PegasusSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PegasusSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(PegasusSolver, t_PegasusSolver, PegasusSolver);
        PyObject *t_PegasusSolver::wrap_Object(const PegasusSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PegasusSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PegasusSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PegasusSolver), &PY_TYPE_DEF(PegasusSolver), module, "PegasusSolver", 0);
        }

        void t_PegasusSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "class_", make_descriptor(PegasusSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "wrapfn_", make_descriptor(t_PegasusSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PegasusSolver::initializeClass, 1)))
            return NULL;
          return t_PegasusSolver::wrap_Object(PegasusSolver(((t_PegasusSolver *) arg)->object.this$));
        }
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PegasusSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PegasusSolver object((jobject) NULL);

              INT_CALL(object = PegasusSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PegasusSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PegasusSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = PegasusSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitBlender::class$ = NULL;
      jmethodID *OrbitBlender::mids$ = NULL;
      bool OrbitBlender::live$ = false;

      jclass OrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_545844d9d4fdc0a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/propagation/Propagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_8f43113475f73463] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitBlender::OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::propagation::Propagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_545844d9d4fdc0a8, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args);
      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data);
      static PyGetSetDef t_OrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitBlender__methods_[] = {
        DECLARE_METHOD(t_OrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitBlender)[] = {
        { Py_tp_methods, t_OrbitBlender__methods_ },
        { Py_tp_init, (void *) t_OrbitBlender_init_ },
        { Py_tp_getset, t_OrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitBlender, t_OrbitBlender, OrbitBlender);
      PyObject *t_OrbitBlender::wrap_Object(const OrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitBlender), &PY_TYPE_DEF(OrbitBlender), module, "OrbitBlender", 0);
      }

      void t_OrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "class_", make_descriptor(OrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "wrapfn_", make_descriptor(t_OrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitBlender::initializeClass, 1)))
          return NULL;
        return t_OrbitBlender::wrap_Object(OrbitBlender(((t_OrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
        ::org::orekit::propagation::Propagator a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OrbitBlender(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader::live$ = false;

            jclass CssiSpaceWeatherDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_d01a04ddab6c7194] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getLastDailyPredictedDate_aaa854c403487cf3] = env->getMethodID(cls, "getLastDailyPredictedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLastObservedDate_aaa854c403487cf3] = env->getMethodID(cls, "getLastObservedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader::CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

            ::java::util::SortedSet CssiSpaceWeatherDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_d01a04ddab6c7194]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastDailyPredictedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastDailyPredictedDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastObservedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastObservedDate_aaa854c403487cf3]));
            }

            void CssiSpaceWeatherDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, dataSet),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastDailyPredictedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastObservedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastDailyPredictedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastObservedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader, t_CssiSpaceWeatherDataLoader, CssiSpaceWeatherDataLoader);
            PyObject *t_CssiSpaceWeatherDataLoader::wrap_Object(const CssiSpaceWeatherDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader), module, "CssiSpaceWeatherDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters)));
            }

            void t_CssiSpaceWeatherDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "class_", make_descriptor(CssiSpaceWeatherDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader::wrap_Object(CssiSpaceWeatherDataLoader(((t_CssiSpaceWeatherDataLoader *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CssiSpaceWeatherDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters));
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ResidualFilter::class$ = NULL;
          jmethodID *ResidualFilter::mids$ = NULL;
          bool ResidualFilter::live$ = false;

          jclass ResidualFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ResidualFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_filter_00f3b288ddb27bce] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ResidualFilter::ResidualFilter(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          void ResidualFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_00f3b288ddb27bce], a0.this$, a1.this$);
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
          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args);
          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args);
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data);
          static PyGetSetDef t_ResidualFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ResidualFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ResidualFilter__methods_[] = {
            DECLARE_METHOD(t_ResidualFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ResidualFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ResidualFilter)[] = {
            { Py_tp_methods, t_ResidualFilter__methods_ },
            { Py_tp_init, (void *) t_ResidualFilter_init_ },
            { Py_tp_getset, t_ResidualFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ResidualFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ResidualFilter, t_ResidualFilter, ResidualFilter);
          PyObject *t_ResidualFilter::wrap_Object(const ResidualFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ResidualFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ResidualFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ResidualFilter), &PY_TYPE_DEF(ResidualFilter), module, "ResidualFilter", 0);
          }

          void t_ResidualFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "class_", make_descriptor(ResidualFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "wrapfn_", make_descriptor(t_ResidualFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ResidualFilter::initializeClass, 1)))
              return NULL;
            return t_ResidualFilter::wrap_Object(ResidualFilter(((t_ResidualFilter *) arg)->object.this$));
          }
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ResidualFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ResidualFilter object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ResidualFilter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4B::class$ = NULL;
          jmethodID *SubFrame4B::mids$ = NULL;
          bool SubFrame4B::live$ = false;

          jclass SubFrame4B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_f2f64475e4580546] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_f2f64475e4580546] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_f2f64475e4580546] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_f2f64475e4580546] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_f2f64475e4580546] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_f2f64475e4580546] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved09_f2f64475e4580546] = env->getMethodID(cls, "getReserved09", "()I");
              mids$[mid_getReserved10_f2f64475e4580546] = env->getMethodID(cls, "getReserved10", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4B::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved09_f2f64475e4580546]);
          }

          jint SubFrame4B::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_f2f64475e4580546]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data);
          static PyGetSetDef t_SubFrame4B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4B, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved09),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved10),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4B__methods_[] = {
            DECLARE_METHOD(t_SubFrame4B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved10, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4B)[] = {
            { Py_tp_methods, t_SubFrame4B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4B, t_SubFrame4B, SubFrame4B);

          void t_SubFrame4B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4B), &PY_TYPE_DEF(SubFrame4B), module, "SubFrame4B", 0);
          }

          void t_SubFrame4B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "class_", make_descriptor(SubFrame4B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "wrapfn_", make_descriptor(t_SubFrame4B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4B::initializeClass, 1)))
              return NULL;
            return t_SubFrame4B::wrap_Object(SubFrame4B(((t_SubFrame4B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundStation::class$ = NULL;
        jmethodID *GroundStation::mids$ = NULL;
        bool GroundStation::live$ = false;
        ::java::lang::String *GroundStation::DRIFT_SUFFIX = NULL;
        ::java::lang::String *GroundStation::INTERMEDIATE_SUFFIX = NULL;
        ::java::lang::String *GroundStation::OFFSET_SUFFIX = NULL;

        jclass GroundStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f9eb40be2920d1a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_1de7772c6acacc4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/frames/EOPHistory;[Lorg/orekit/models/earth/displacement/StationDisplacement;)V");
            mids$[mid_getBaseFrame_52fc31c455206160] = env->getMethodID(cls, "getBaseFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_getClockDriftDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getDisplacements_c91b4b894f01b233] = env->getMethodID(cls, "getDisplacements", "()[Lorg/orekit/models/earth/displacement/StationDisplacement;");
            mids$[mid_getEastOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getEastOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getEstimatedEarthFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getEstimatedEarthFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEstimatedUT1_2493bae90e875538] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getNorthOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getNorthOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getOffsetGeodeticPoint_ef043ede1a468814] = env->getMethodID(cls, "getOffsetGeodeticPoint", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getOffsetToInertial_acc34ffcb984c9a1] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/frames/Transform;");
            mids$[mid_getOffsetToInertial_eab458a2e778e0a3] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getOffsetToInertial_81125c99e02b85db] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getZenithOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getZenithOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRIFT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DRIFT_SUFFIX", "Ljava/lang/String;"));
            INTERMEDIATE_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "INTERMEDIATE_SUFFIX", "Ljava/lang/String;"));
            OFFSET_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "OFFSET_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9eb40be2920d1a6, a0.this$)) {}

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::frames::EOPHistory & a1, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1de7772c6acacc4d, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::frames::TopocentricFrame GroundStation::getBaseFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getBaseFrame_52fc31c455206160]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        JArray< ::org::orekit::models::earth::displacement::StationDisplacement > GroundStation::getDisplacements() const
        {
          return JArray< ::org::orekit::models::earth::displacement::StationDisplacement >(env->callObjectMethod(this$, mids$[mid_getDisplacements_c91b4b894f01b233]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getEastOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getEastOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::frames::Frame GroundStation::getEstimatedEarthFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEstimatedEarthFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::time::UT1Scale GroundStation::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_2493bae90e875538]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getNorthOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getNorthOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::bodies::GeodeticPoint GroundStation::getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getOffsetGeodeticPoint_ef043ede1a468814], a0.this$));
        }

        ::org::orekit::frames::Transform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_acc34ffcb984c9a1], a0.this$, a1.this$, a2));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_eab458a2e778e0a3], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_81125c99e02b85db], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getZenithOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getZenithOffsetDriver_ac0e5f8f2fa86f4f]));
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
        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self);
        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self);
        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg);
        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args);
        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data);
        static PyGetSetDef t_GroundStation__fields_[] = {
          DECLARE_GET_FIELD(t_GroundStation, baseFrame),
          DECLARE_GET_FIELD(t_GroundStation, clockDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, clockOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, displacements),
          DECLARE_GET_FIELD(t_GroundStation, eastOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, estimatedEarthFrame),
          DECLARE_GET_FIELD(t_GroundStation, estimatedUT1),
          DECLARE_GET_FIELD(t_GroundStation, northOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftYDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, zenithOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundStation__methods_[] = {
          DECLARE_METHOD(t_GroundStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, getBaseFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getDisplacements, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEastOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedEarthFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getNorthOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getOffsetGeodeticPoint, METH_O),
          DECLARE_METHOD(t_GroundStation, getOffsetToInertial, METH_VARARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getZenithOffsetDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundStation)[] = {
          { Py_tp_methods, t_GroundStation__methods_ },
          { Py_tp_init, (void *) t_GroundStation_init_ },
          { Py_tp_getset, t_GroundStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundStation, t_GroundStation, GroundStation);

        void t_GroundStation::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundStation), &PY_TYPE_DEF(GroundStation), module, "GroundStation", 0);
        }

        void t_GroundStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "class_", make_descriptor(GroundStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "wrapfn_", make_descriptor(t_GroundStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundStation::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "DRIFT_SUFFIX", make_descriptor(j2p(*GroundStation::DRIFT_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "INTERMEDIATE_SUFFIX", make_descriptor(j2p(*GroundStation::INTERMEDIATE_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "OFFSET_SUFFIX", make_descriptor(j2p(*GroundStation::OFFSET_SUFFIX)));
        }

        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundStation::initializeClass, 1)))
            return NULL;
          return t_GroundStation::wrap_Object(GroundStation(((t_GroundStation *) arg)->object.this$));
        }
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = GroundStation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ::org::orekit::frames::EOPHistory a1((jobject) NULL);
              JArray< ::org::orekit::models::earth::displacement::StationDisplacement > a2((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "kk[k", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::models::earth::displacement::StationDisplacement::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GroundStation(a0, a1, a2));
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

        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplacements());
          return JArray<jobject>(result.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getOffsetGeodeticPoint(a0));
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetGeodeticPoint", arg);
          return NULL;
        }

        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetToInertial", args);
          return NULL;
        }

        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getDisplacements());
          return JArray<jobject>(value.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Authentication::class$ = NULL;
          jmethodID *Authentication::mids$ = NULL;
          bool Authentication::live$ = false;
          Authentication *Authentication::BASIC = NULL;
          Authentication *Authentication::DIGEST = NULL;
          Authentication *Authentication::NONE = NULL;

          jclass Authentication::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Authentication");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAuthentication_e5fe2221f3ee2ab1] = env->getStaticMethodID(cls, "getAuthentication", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_valueOf_e5fe2221f3ee2ab1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_values_2db20232b225a69e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Authentication;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = new Authentication(env->getStaticObjectField(cls, "BASIC", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              DIGEST = new Authentication(env->getStaticObjectField(cls, "DIGEST", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              NONE = new Authentication(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Authentication Authentication::getAuthentication(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_getAuthentication_e5fe2221f3ee2ab1], a0.this$));
          }

          Authentication Authentication::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e5fe2221f3ee2ab1], a0.this$));
          }

          JArray< Authentication > Authentication::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Authentication >(env->callStaticObjectMethod(cls, mids$[mid_values_2db20232b225a69e]));
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
          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args);
          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Authentication_values(PyTypeObject *type);
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data);
          static PyGetSetDef t_Authentication__fields_[] = {
            DECLARE_GET_FIELD(t_Authentication, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Authentication__methods_[] = {
            DECLARE_METHOD(t_Authentication, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, of_, METH_VARARGS),
            DECLARE_METHOD(t_Authentication, getAuthentication, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Authentication, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Authentication)[] = {
            { Py_tp_methods, t_Authentication__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Authentication__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Authentication)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Authentication, t_Authentication, Authentication);
          PyObject *t_Authentication::wrap_Object(const Authentication& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Authentication::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Authentication::install(PyObject *module)
          {
            installType(&PY_TYPE(Authentication), &PY_TYPE_DEF(Authentication), module, "Authentication", 0);
          }

          void t_Authentication::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "class_", make_descriptor(Authentication::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "wrapfn_", make_descriptor(t_Authentication::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "boxfn_", make_descriptor(boxObject));
            env->getClass(Authentication::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "BASIC", make_descriptor(t_Authentication::wrap_Object(*Authentication::BASIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "DIGEST", make_descriptor(t_Authentication::wrap_Object(*Authentication::DIGEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "NONE", make_descriptor(t_Authentication::wrap_Object(*Authentication::NONE)));
          }

          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Authentication::initializeClass, 1)))
              return NULL;
            return t_Authentication::wrap_Object(Authentication(((t_Authentication *) arg)->object.this$));
          }
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Authentication::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::getAuthentication(a0));
              return t_Authentication::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getAuthentication", arg);
            return NULL;
          }

          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::valueOf(a0));
              return t_Authentication::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Authentication_values(PyTypeObject *type)
          {
            JArray< Authentication > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::values());
            return JArray<jobject>(result.this$).wrap(t_Authentication::wrap_jobject);
          }
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSAlmanac::class$ = NULL;
            jmethodID *GLONASSAlmanac::mids$ = NULL;
            bool GLONASSAlmanac::live$ = false;

            jclass GLONASSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_06c4a4bb4a52cbb6] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDD)V");
                mids$[mid_init$_aa72820258331840] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDDLorg/orekit/time/TimeScale;)V");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getDeltaI_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getFrequencyChannel_f2f64475e4580546] = env->getMethodID(cls, "getFrequencyChannel", "()I");
                mids$[mid_getGPS2Glo_456d9a2f64d6b28d] = env->getMethodID(cls, "getGPS2Glo", "()D");
                mids$[mid_getGlo2UTC_456d9a2f64d6b28d] = env->getMethodID(cls, "getGlo2UTC", "()D");
                mids$[mid_getGloOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getGloOffset", "()D");
                mids$[mid_getHealth_f2f64475e4580546] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getLambda_456d9a2f64d6b28d] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_f2f64475e4580546] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_f2f64475e4580546] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_5d976fca9b951997] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_4c2baddb9a889e9e] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_7a1576b7ec59009e] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06c4a4bb4a52cbb6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)) {}

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, const ::org::orekit::time::TimeScale & a15) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa72820258331840, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSAlmanac::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jdouble GLONASSAlmanac::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_456d9a2f64d6b28d]);
            }

            jdouble GLONASSAlmanac::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_456d9a2f64d6b28d]);
            }

            jdouble GLONASSAlmanac::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSAlmanac::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
            }

            jint GLONASSAlmanac::getFrequencyChannel() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyChannel_f2f64475e4580546]);
            }

            jdouble GLONASSAlmanac::getGPS2Glo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGPS2Glo_456d9a2f64d6b28d]);
            }

            jdouble GLONASSAlmanac::getGlo2UTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGlo2UTC_456d9a2f64d6b28d]);
            }

            jdouble GLONASSAlmanac::getGloOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGloOffset_456d9a2f64d6b28d]);
            }

            jint GLONASSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_f2f64475e4580546]);
            }

            jdouble GLONASSAlmanac::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_456d9a2f64d6b28d]);
            }

            jint GLONASSAlmanac::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_f2f64475e4580546]);
            }

            jint GLONASSAlmanac::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_f2f64475e4580546]);
            }

            jdouble GLONASSAlmanac::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_5d976fca9b951997]));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_4c2baddb9a889e9e], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_7a1576b7ec59009e], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GLONASSAlmanac::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
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
            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args);
            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data);
            static PyGetSetDef t_GLONASSAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSAlmanac, date),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaI),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaT),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, e),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, frequencyChannel),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gPS2Glo),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, glo2UTC),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gloOffset),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, health),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, lambda),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, n4),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, na),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, pa),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, propagator),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, time),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GLONASSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getFrequencyChannel, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGPS2Glo, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGlo2UTC, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGloOffset, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getTime, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSAlmanac)[] = {
              { Py_tp_methods, t_GLONASSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GLONASSAlmanac_init_ },
              { Py_tp_getset, t_GLONASSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSAlmanac)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSAlmanac, t_GLONASSAlmanac, GLONASSAlmanac);

            void t_GLONASSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSAlmanac), &PY_TYPE_DEF(GLONASSAlmanac), module, "GLONASSAlmanac", 0);
            }

            void t_GLONASSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "class_", make_descriptor(GLONASSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "wrapfn_", make_descriptor(t_GLONASSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GLONASSAlmanac::wrap_Object(GLONASSAlmanac(((t_GLONASSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 15:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
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
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 16:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
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
                  ::org::orekit::time::TimeScale a15((jobject) NULL);
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGloOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGloOffset());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
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
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DerivativeGenerator::class$ = NULL;
        jmethodID *DerivativeGenerator::mids$ = NULL;
        bool DerivativeGenerator::live$ = false;

        jclass DerivativeGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DerivativeGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_constant_0edde46ddfc92b82] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getSelected_a6156df500549a58] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_variable_bf7c211ac81c340b] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_constant_0edde46ddfc92b82], a0));
        }

        ::org::hipparchus::Field DerivativeGenerator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        ::java::util::List DerivativeGenerator::getSelected() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSelected_a6156df500549a58]));
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::variable(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_variable_bf7c211ac81c340b], a0.this$));
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
        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args);
        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data);
        static PyGetSetDef t_DerivativeGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeGenerator, field),
          DECLARE_GET_FIELD(t_DerivativeGenerator, selected),
          DECLARE_GET_FIELD(t_DerivativeGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeGenerator__methods_[] = {
          DECLARE_METHOD(t_DerivativeGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeGenerator, constant, METH_O),
          DECLARE_METHOD(t_DerivativeGenerator, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, getSelected, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, variable, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeGenerator)[] = {
          { Py_tp_methods, t_DerivativeGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeGenerator, t_DerivativeGenerator, DerivativeGenerator);
        PyObject *t_DerivativeGenerator::wrap_Object(const DerivativeGenerator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DerivativeGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DerivativeGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeGenerator), &PY_TYPE_DEF(DerivativeGenerator), module, "DerivativeGenerator", 0);
        }

        void t_DerivativeGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "class_", make_descriptor(DerivativeGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "wrapfn_", make_descriptor(t_DerivativeGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeGenerator::initializeClass, 1)))
            return NULL;
          return t_DerivativeGenerator::wrap_Object(DerivativeGenerator(((t_DerivativeGenerator *) arg)->object.this$));
        }
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.variable(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", arg);
          return NULL;
        }
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Dipole::class$ = NULL;
          jmethodID *Dipole::mids$ = NULL;
          bool Dipole::live$ = false;
          Dipole *Dipole::CANONICAL_I_J = NULL;

          jclass Dipole::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Dipole");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getPrimary_17a952530a808943] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSecondary_17a952530a808943] = env->getMethodID(cls, "getSecondary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CANONICAL_I_J = new Dipole(env->getStaticObjectField(cls, "CANONICAL_I_J", "Lorg/orekit/estimation/measurements/gnss/Dipole;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getPrimary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPrimary_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getSecondary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSecondary_17a952530a808943]));
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
          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_getPrimary(t_Dipole *self);
          static PyObject *t_Dipole_getSecondary(t_Dipole *self);
          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data);
          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data);
          static PyGetSetDef t_Dipole__fields_[] = {
            DECLARE_GET_FIELD(t_Dipole, primary),
            DECLARE_GET_FIELD(t_Dipole, secondary),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Dipole__methods_[] = {
            DECLARE_METHOD(t_Dipole, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, getPrimary, METH_NOARGS),
            DECLARE_METHOD(t_Dipole, getSecondary, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Dipole)[] = {
            { Py_tp_methods, t_Dipole__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Dipole__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Dipole)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Dipole, t_Dipole, Dipole);

          void t_Dipole::install(PyObject *module)
          {
            installType(&PY_TYPE(Dipole), &PY_TYPE_DEF(Dipole), module, "Dipole", 0);
          }

          void t_Dipole::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "class_", make_descriptor(Dipole::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "wrapfn_", make_descriptor(t_Dipole::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "boxfn_", make_descriptor(boxObject));
            env->getClass(Dipole::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "CANONICAL_I_J", make_descriptor(t_Dipole::wrap_Object(*Dipole::CANONICAL_I_J)));
          }

          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Dipole::initializeClass, 1)))
              return NULL;
            return t_Dipole::wrap_Object(Dipole(((t_Dipole *) arg)->object.this$));
          }
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Dipole::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Dipole_getPrimary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_getSecondary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldStateMapper::class$ = NULL;
        jmethodID *FieldStateMapper::mids$ = NULL;
        bool FieldStateMapper::live$ = false;

        jclass FieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_e6d4d3215c30992a] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_09b0a926600dfc14] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapArrayToState_1d69a30d154b40a6] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapArrayToState_62065ba7f82f6745] = env->getMethodID(cls, "mapArrayToState", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapDateToDouble_7bc0fd76ee915b72] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_mapDoubleToDate_b179475577cb34cc] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapDoubleToDate_49e30ae22838fba7] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapStateToArray_f420296d747d4672] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setPositionAngleType_7ae3461a92a43152] = env->getMethodID(cls, "setPositionAngleType", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider FieldStateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
        }

        ::org::orekit::frames::Frame FieldStateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e6d4d3215c30992a]));
        }

        ::org::orekit::orbits::OrbitType FieldStateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::orbits::PositionAngleType FieldStateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_09b0a926600dfc14]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_1d69a30d154b40a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_62065ba7f82f6745], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mapDateToDouble_7bc0fd76ee915b72], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_b179475577cb34cc], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_49e30ae22838fba7], a0.this$, a1.this$));
        }

        void FieldStateMapper::mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_f420296d747d4672], a0.this$, a1.this$, a2.this$);
        }

        void FieldStateMapper::setPositionAngleType() const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_7ae3461a92a43152]);
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
        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg);
        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data);
        static PyGetSetDef t_FieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldStateMapper, frame),
          DECLARE_GET_FIELD(t_FieldStateMapper, mu),
          DECLARE_GET_FIELD(t_FieldStateMapper, orbitType),
          DECLARE_GET_FIELD(t_FieldStateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_FieldStateMapper, referenceDate),
          DECLARE_GET_FIELD(t_FieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_FieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_FieldStateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, setPositionAngleType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStateMapper)[] = {
          { Py_tp_methods, t_FieldStateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStateMapper, t_FieldStateMapper, FieldStateMapper);
        PyObject *t_FieldStateMapper::wrap_Object(const FieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStateMapper), &PY_TYPE_DEF(FieldStateMapper), module, "FieldStateMapper", 0);
        }

        void t_FieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "class_", make_descriptor(FieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "wrapfn_", make_descriptor(t_FieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_FieldStateMapper::wrap_Object(FieldStateMapper(((t_FieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "K[K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self)
        {
          OBJ_CALL(self->object.setPositionAngleType());
          Py_RETURN_NONE;
        }
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *ParametricUnivariateFunction::class$ = NULL;
      jmethodID *ParametricUnivariateFunction::mids$ = NULL;
      bool ParametricUnivariateFunction::live$ = false;

      jclass ParametricUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/ParametricUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
          mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > ParametricUnivariateFunction::gradient(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
      }

      jdouble ParametricUnivariateFunction::value(jdouble a0, const JArray< jdouble > & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args);
      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args);

      static PyMethodDef t_ParametricUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_ParametricUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, gradient, METH_VARARGS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametricUnivariateFunction)[] = {
        { Py_tp_methods, t_ParametricUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametricUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParametricUnivariateFunction, t_ParametricUnivariateFunction, ParametricUnivariateFunction);

      void t_ParametricUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametricUnivariateFunction), &PY_TYPE_DEF(ParametricUnivariateFunction), module, "ParametricUnivariateFunction", 0);
      }

      void t_ParametricUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "class_", make_descriptor(ParametricUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "wrapfn_", make_descriptor(t_ParametricUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametricUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_ParametricUnivariateFunction::wrap_Object(ParametricUnivariateFunction(((t_ParametricUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametricUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args)
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

      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args)
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
