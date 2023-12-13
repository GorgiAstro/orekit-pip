#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/Position.h"
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
            mids$[mid_init$_a1acfe8b36ed0409] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_23dc943efa00c9f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_de5442b2fe341289] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_3b7b373db8e7887f] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_3b7b373db8e7887f] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a1acfe8b36ed0409, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< JArray< jdouble > > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_23dc943efa00c9f0, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_de5442b2fe341289, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        JArray< JArray< jdouble > > Position::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_3b7b373db8e7887f]));
        }

        JArray< JArray< jdouble > > Position::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_3b7b373db8e7887f]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Position::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
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
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystem::class$ = NULL;
          jmethodID *TideSystem::mids$ = NULL;
          bool TideSystem::live$ = false;
          TideSystem *TideSystem::TIDE_FREE = NULL;
          TideSystem *TideSystem::UNKNOWN = NULL;
          TideSystem *TideSystem::ZERO_TIDE = NULL;

          jclass TideSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_c25fab39e503a044] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_values_3b2c378a4b3ff1b1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TIDE_FREE = new TideSystem(env->getStaticObjectField(cls, "TIDE_FREE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              UNKNOWN = new TideSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              ZERO_TIDE = new TideSystem(env->getStaticObjectField(cls, "ZERO_TIDE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TideSystem TideSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TideSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c25fab39e503a044], a0.this$));
          }

          JArray< TideSystem > TideSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TideSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_3b2c378a4b3ff1b1]));
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
          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args);
          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TideSystem_values(PyTypeObject *type);
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data);
          static PyGetSetDef t_TideSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystem__methods_[] = {
            DECLARE_METHOD(t_TideSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TideSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystem)[] = {
            { Py_tp_methods, t_TideSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TideSystem, t_TideSystem, TideSystem);
          PyObject *t_TideSystem::wrap_Object(const TideSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TideSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TideSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystem), &PY_TYPE_DEF(TideSystem), module, "TideSystem", 0);
          }

          void t_TideSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "class_", make_descriptor(TideSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "wrapfn_", make_descriptor(t_TideSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TideSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "TIDE_FREE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::TIDE_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "UNKNOWN", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::UNKNOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "ZERO_TIDE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::ZERO_TIDE)));
          }

          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystem::initializeClass, 1)))
              return NULL;
            return t_TideSystem::wrap_Object(TideSystem(((t_TideSystem *) arg)->object.this$));
          }
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TideSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::valueOf(a0));
              return t_TideSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TideSystem_values(PyTypeObject *type)
          {
            JArray< TideSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TideSystem::wrap_jobject);
          }
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data)
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
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *DetectorBasedEventState::class$ = NULL;
        jmethodID *DetectorBasedEventState::mids$ = NULL;
        bool DetectorBasedEventState::live$ = false;

        jclass DetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/DetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b3037e2992b522fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_doEvent_1eca994d89f760c7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_f2bd5620f6269916] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_4cf067cf8dc74d67] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_getEventTime_b74f83833fdad017] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_reinitializeBegin_197c5aaefd855810] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_tryAdvance_709063baedbc9642] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DetectorBasedEventState::DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3037e2992b522fb, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence DetectorBasedEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_1eca994d89f760c7], a0.this$));
        }

        jboolean DetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_f2bd5620f6269916], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector DetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_4cf067cf8dc74d67]));
        }

        jdouble DetectorBasedEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_b74f83833fdad017]);
        }

        void DetectorBasedEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }

        void DetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_197c5aaefd855810], a0.this$);
        }

        jboolean DetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_709063baedbc9642], a0.this$, a1.this$);
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
        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data);
        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data);
        static PyGetSetDef t_DetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_DetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DetectorBasedEventState)[] = {
          { Py_tp_methods, t_DetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_DetectorBasedEventState_init_ },
          { Py_tp_getset, t_DetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DetectorBasedEventState, t_DetectorBasedEventState, DetectorBasedEventState);

        void t_DetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(DetectorBasedEventState), &PY_TYPE_DEF(DetectorBasedEventState), module, "DetectorBasedEventState", 0);
        }

        void t_DetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "class_", make_descriptor(DetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "wrapfn_", make_descriptor(t_DetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_DetectorBasedEventState::wrap_Object(DetectorBasedEventState(((t_DetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          DetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
          {
            INT_CALL(object = DetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg)
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

        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg)
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

        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args)
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

        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
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
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_0436fee875157bff] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Max;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_e4970a39a0905c8e] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Max;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Max::Max() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Max::aggregate(const Max & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_0436fee875157bff], a0.this$);
          }

          void Max::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Max Max::copy() const
          {
            return Max(env->callObjectMethod(this$, mids$[mid_copy_e4970a39a0905c8e]));
          }

          jdouble Max::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong Max::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Max::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Max::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceWriter::class$ = NULL;
            jmethodID *RTNCovarianceWriter::mids$ = NULL;
            bool RTNCovarianceWriter::live$ = false;

            jclass RTNCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_RTNCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceWriter)[] = {
              { Py_tp_methods, t_RTNCovarianceWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceWriter, t_RTNCovarianceWriter, RTNCovarianceWriter);

            void t_RTNCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceWriter), &PY_TYPE_DEF(RTNCovarianceWriter), module, "RTNCovarianceWriter", 0);
            }

            void t_RTNCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "class_", make_descriptor(RTNCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "wrapfn_", make_descriptor(t_RTNCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceWriter::wrap_Object(RTNCovarianceWriter(((t_RTNCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceWriter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
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
              mids$[mid_init$_1437c06a6f40cf9b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBody;)V");
              mids$[mid_create_4bbf95743698337f] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_9d1a0e179e09f078] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_33547d7be3dbbee8] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_getBody_5df52e80cbb5eb85] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BodyFacade::BodyFacade(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1437c06a6f40cf9b, a0.this$, a1.this$)) {}

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_4bbf95743698337f], a0.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::bodies::CelestialBodies & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_9d1a0e179e09f078], a0.this$, a1.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::data::DataContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_33547d7be3dbbee8], a0.this$, a1.this$));
          }

          ::org::orekit::bodies::CelestialBody BodyFacade::getBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_5df52e80cbb5eb85]));
          }

          ::java::lang::String BodyFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
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
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary$Entry::class$ = NULL;
      jmethodID *DoubleArrayDictionary$Entry::mids$ = NULL;
      bool DoubleArrayDictionary$Entry::live$ = false;

      jclass DoubleArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_25e1757a36c4dde2] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_scaledIncrement_0ed2f42ee710b1b6] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/DoubleArrayDictionary$Entry;)V");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_a1fa5dae97ea5ed2] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String DoubleArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
      }

      JArray< jdouble > DoubleArrayDictionary$Entry::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_25e1757a36c4dde2]));
      }

      void DoubleArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
      }

      void DoubleArrayDictionary$Entry::scaledIncrement(jdouble a0, const DoubleArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_0ed2f42ee710b1b6], a0, a1.this$);
      }

      jint DoubleArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
      }

      void DoubleArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_a1fa5dae97ea5ed2]);
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
      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, increment, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DoubleArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary$Entry, t_DoubleArrayDictionary$Entry, DoubleArrayDictionary$Entry);

      void t_DoubleArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary$Entry), &PY_TYPE_DEF(DoubleArrayDictionary$Entry), module, "DoubleArrayDictionary$Entry", 0);
      }

      void t_DoubleArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "class_", make_descriptor(DoubleArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "wrapfn_", make_descriptor(t_DoubleArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary$Entry::wrap_Object(DoubleArrayDictionary$Entry(((t_DoubleArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return result.wrap();
      }

      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg)
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

      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args)
      {
        jdouble a0;
        DoubleArrayDictionary$Entry a1((jobject) NULL);

        if (!parseArgs(args, "Dk", DoubleArrayDictionary$Entry::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaledIncrement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::mids$ = NULL;
        bool AttitudeEphemerisFile$SatelliteAttitudeEphemeris::live$ = false;

        jclass AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e]));
        }

        ::java::lang::String AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        ::java::util::List AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), &PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), module, "AttitudeEphemerisFile$SatelliteAttitudeEphemeris", 0);
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "class_", make_descriptor(AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(AttitudeEphemerisFile$SatelliteAttitudeEphemeris(((t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateJacobian::class$ = NULL;
      jmethodID *StateJacobian::mids$ = NULL;
      bool StateJacobian::live$ = false;

      jclass StateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_92a90247fa9f7aa3] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > StateJacobian::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_92a90247fa9f7aa3], a0.this$));
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
      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg);

      static PyMethodDef t_StateJacobian__methods_[] = {
        DECLARE_METHOD(t_StateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateJacobian)[] = {
        { Py_tp_methods, t_StateJacobian__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateJacobian, t_StateJacobian, StateJacobian);

      void t_StateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(StateJacobian), &PY_TYPE_DEF(StateJacobian), module, "StateJacobian", 0);
      }

      void t_StateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "class_", make_descriptor(StateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "wrapfn_", make_descriptor(t_StateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateJacobian::initializeClass, 1)))
          return NULL;
        return t_StateJacobian::wrap_Object(StateJacobian(((t_StateJacobian *) arg)->object.this$));
      }
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *HessenbergTransformer::class$ = NULL;
      jmethodID *HessenbergTransformer::mids$ = NULL;
      bool HessenbergTransformer::live$ = false;

      jclass HessenbergTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/HessenbergTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getH_f77d745f2128c391] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_f77d745f2128c391] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HessenbergTransformer::HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_f77d745f2128c391]));
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
      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data);
      static PyGetSetDef t_HessenbergTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_HessenbergTransformer, h),
        DECLARE_GET_FIELD(t_HessenbergTransformer, p),
        DECLARE_GET_FIELD(t_HessenbergTransformer, pT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HessenbergTransformer__methods_[] = {
        DECLARE_METHOD(t_HessenbergTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, getH, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getPT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HessenbergTransformer)[] = {
        { Py_tp_methods, t_HessenbergTransformer__methods_ },
        { Py_tp_init, (void *) t_HessenbergTransformer_init_ },
        { Py_tp_getset, t_HessenbergTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HessenbergTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HessenbergTransformer, t_HessenbergTransformer, HessenbergTransformer);

      void t_HessenbergTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(HessenbergTransformer), &PY_TYPE_DEF(HessenbergTransformer), module, "HessenbergTransformer", 0);
      }

      void t_HessenbergTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "class_", make_descriptor(HessenbergTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "wrapfn_", make_descriptor(t_HessenbergTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HessenbergTransformer::initializeClass, 1)))
          return NULL;
        return t_HessenbergTransformer::wrap_Object(HessenbergTransformer(((t_HessenbergTransformer *) arg)->object.this$));
      }
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HessenbergTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        HessenbergTransformer object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = HessenbergTransformer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AltitudeDetector::class$ = NULL;
        jmethodID *AltitudeDetector::mids$ = NULL;
        bool AltitudeDetector::live$ = false;

        jclass AltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_32e5db5e4ad291ee] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_a739cce113527776] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_451aa2fac482ca7b] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAltitude_b74f83833fdad017] = env->getMethodID(cls, "getAltitude", "()D");
            mids$[mid_getBodyShape_95d324082d4f411b] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_0e173868746d06e5] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AltitudeDetector::AltitudeDetector(jdouble a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_32e5db5e4ad291ee, a0, a1.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a739cce113527776, a0, a1, a2.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_451aa2fac482ca7b, a0, a1, a2, a3.this$)) {}

        jdouble AltitudeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble AltitudeDetector::getAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAltitude_b74f83833fdad017]);
        }

        ::org::orekit::bodies::BodyShape AltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_95d324082d4f411b]));
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
        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args);
        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args);
        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data);
        static PyGetSetDef t_AltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_AltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_AltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_AltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_AltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AltitudeDetector)[] = {
          { Py_tp_methods, t_AltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_AltitudeDetector_init_ },
          { Py_tp_getset, t_AltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AltitudeDetector, t_AltitudeDetector, AltitudeDetector);
        PyObject *t_AltitudeDetector::wrap_Object(const AltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AltitudeDetector), &PY_TYPE_DEF(AltitudeDetector), module, "AltitudeDetector", 0);
        }

        void t_AltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "class_", make_descriptor(AltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "wrapfn_", make_descriptor(t_AltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_AltitudeDetector::wrap_Object(AltitudeDetector(((t_AltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AltitudeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
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

        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *DataUsed::class$ = NULL;
        jmethodID *DataUsed::mids$ = NULL;
        bool DataUsed::live$ = false;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = NULL;
        DataUsed *DataUsed::MIXED = NULL;
        DataUsed *DataUsed::ORBIT = NULL;
        DataUsed *DataUsed::SATELLITE_LASER_RANGING = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CODE_PHASE = NULL;

        jclass DataUsed::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/DataUsed");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_f4e648268d1df76b] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/lang/String;C)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_valueOf_16a7ca151d842fbd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_values_2bb59ab87b23a09c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/DataUsed;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            MIXED = new DataUsed(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/DataUsed;"));
            ORBIT = new DataUsed(env->getStaticObjectField(cls, "ORBIT", "Lorg/orekit/files/sp3/DataUsed;"));
            SATELLITE_LASER_RANGING = new DataUsed(env->getStaticObjectField(cls, "SATELLITE_LASER_RANGING", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String DataUsed::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
        }

        DataUsed DataUsed::parse(const ::java::lang::String & a0, const ::java::lang::String & a1, jchar a2)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_parse_f4e648268d1df76b], a0.this$, a1.this$, a2));
        }

        DataUsed DataUsed::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_valueOf_16a7ca151d842fbd], a0.this$));
        }

        JArray< DataUsed > DataUsed::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< DataUsed >(env->callStaticObjectMethod(cls, mids$[mid_values_2bb59ab87b23a09c]));
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
        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args);
        static PyObject *t_DataUsed_getKey(t_DataUsed *self);
        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_values(PyTypeObject *type);
        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data);
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data);
        static PyGetSetDef t_DataUsed__fields_[] = {
          DECLARE_GET_FIELD(t_DataUsed, key),
          DECLARE_GET_FIELD(t_DataUsed, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DataUsed__methods_[] = {
          DECLARE_METHOD(t_DataUsed, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, of_, METH_VARARGS),
          DECLARE_METHOD(t_DataUsed, getKey, METH_NOARGS),
          DECLARE_METHOD(t_DataUsed, parse, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DataUsed)[] = {
          { Py_tp_methods, t_DataUsed__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DataUsed__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DataUsed)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(DataUsed, t_DataUsed, DataUsed);
        PyObject *t_DataUsed::wrap_Object(const DataUsed& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DataUsed::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DataUsed::install(PyObject *module)
        {
          installType(&PY_TYPE(DataUsed), &PY_TYPE_DEF(DataUsed), module, "DataUsed", 0);
        }

        void t_DataUsed::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "class_", make_descriptor(DataUsed::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "wrapfn_", make_descriptor(t_DataUsed::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "boxfn_", make_descriptor(boxObject));
          env->getClass(DataUsed::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "MIXED", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "ORBIT", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::ORBIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "SATELLITE_LASER_RANGING", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::SATELLITE_LASER_RANGING)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CODE_PHASE)));
        }

        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DataUsed::initializeClass, 1)))
            return NULL;
          return t_DataUsed::wrap_Object(DataUsed(((t_DataUsed *) arg)->object.this$));
        }
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DataUsed::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DataUsed_getKey(t_DataUsed *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jchar a2;
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "ssC", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::parse(a0, a1, a2));
            return t_DataUsed::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", args);
          return NULL;
        }

        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::valueOf(a0));
            return t_DataUsed::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_DataUsed_values(PyTypeObject *type)
        {
          JArray< DataUsed > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::values());
          return JArray<jobject>(result.this$).wrap(t_DataUsed::wrap_jobject);
        }
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data)
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
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractLimitedVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractLimitedVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractLimitedVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder, t_AbstractLimitedVariableStepFieldIntegratorBuilder, AbstractLimitedVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder), module, "AbstractLimitedVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(AbstractLimitedVariableStepFieldIntegratorBuilder(((t_AbstractLimitedVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFieldStaticTransform::class$ = NULL;
      jmethodID *PythonFieldStaticTransform::mids$ = NULL;
      bool PythonFieldStaticTransform::live$ = false;

      jclass PythonFieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_f5bae1937d1edbc7] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_1e54a5caa5199c2e] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_ff5ac73a7b43eddd] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldStaticTransform::PythonFieldStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldStaticTransform::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args);
      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self);
      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data);
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data);
      static PyGetSetDef t_PythonFieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, self),
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonFieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldStaticTransform)[] = {
        { Py_tp_methods, t_PythonFieldStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonFieldStaticTransform_init_ },
        { Py_tp_getset, t_PythonFieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldStaticTransform, t_PythonFieldStaticTransform, PythonFieldStaticTransform);
      PyObject *t_PythonFieldStaticTransform::wrap_Object(const PythonFieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldStaticTransform), &PY_TYPE_DEF(PythonFieldStaticTransform), module, "PythonFieldStaticTransform", 1);
      }

      void t_PythonFieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "class_", make_descriptor(PythonFieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "wrapfn_", make_descriptor(t_PythonFieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonFieldStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;", (void *) t_PythonFieldStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonFieldStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonFieldStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonFieldStaticTransform::wrap_Object(PythonFieldStaticTransform(((t_PythonFieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonFieldStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldStaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldStaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data)
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
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView::class$ = NULL;
        jmethodID *PolygonalFieldOfView::mids$ = NULL;
        bool PolygonalFieldOfView::live$ = false;

        jclass PolygonalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e7bf98f3a1c4d4a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_3eff6b21956b60d6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
            mids$[mid_getFootprint_f20a8500298f8a78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getZone_bf39bb9c5825f40e] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_e7bf98f3a1c4d4a1, a0.this$, a1)) {}

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jint a4, jdouble a5) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_3eff6b21956b60d6, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

        ::java::util::List PolygonalFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_f20a8500298f8a78], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet PolygonalFieldOfView::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_bf39bb9c5825f40e]));
        }

        jdouble PolygonalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_927580832e9083f9], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolygonalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_f21507e4850a184e], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self);
        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView, zone),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getZone, METH_NOARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PolygonalFieldOfView_init_ },
          { Py_tp_getset, t_PolygonalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView, t_PolygonalFieldOfView, PolygonalFieldOfView);

        void t_PolygonalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView), &PY_TYPE_DEF(PolygonalFieldOfView), module, "PolygonalFieldOfView", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "DefiningConeType", make_descriptor(&PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType)));
        }

        void t_PolygonalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "class_", make_descriptor(PolygonalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "wrapfn_", make_descriptor(t_PolygonalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView::wrap_Object(PolygonalFieldOfView(((t_PolygonalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jint a4;
              jdouble a5;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "kKkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::geometry::fov::t_PolygonalFieldOfView$DefiningConeType::parameters_, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileParser::class$ = NULL;
        jmethodID *PythonEphemerisFileParser::mids$ = NULL;
        bool PythonEphemerisFileParser::live$ = false;

        jclass PythonEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_c2184fda105f33cd] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileParser::PythonEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEphemerisFileParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self);
        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileParser, t_PythonEphemerisFileParser, PythonEphemerisFileParser);

        void t_PythonEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileParser), &PY_TYPE_DEF(PythonEphemerisFileParser), module, "PythonEphemerisFileParser", 1);
        }

        void t_PythonEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "class_", make_descriptor(PythonEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;", (void *) t_PythonEphemerisFileParser_parse0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileParser_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileParser::wrap_Object(PythonEphemerisFileParser(((t_PythonEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::EphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::EphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
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

        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data)
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
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$Segment::class$ = NULL;
        jmethodID *StreamingCpfWriter$Segment::mids$ = NULL;
        bool StreamingCpfWriter$Segment::live$ = false;

        jclass StreamingCpfWriter$Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_writeEphemerisLine_be80243d6885d1b6] = env->getMethodID(cls, "writeEphemerisLine", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StreamingCpfWriter$Segment::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
        }

        void StreamingCpfWriter$Segment::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_280c3390961e0a50], a0.this$);
        }

        void StreamingCpfWriter$Segment::writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_writeEphemerisLine_be80243d6885d1b6], a0.this$);
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
        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg);

        static PyMethodDef t_StreamingCpfWriter$Segment__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, finish, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, handleStep, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, writeEphemerisLine, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$Segment)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$Segment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$Segment, t_StreamingCpfWriter$Segment, StreamingCpfWriter$Segment);

        void t_StreamingCpfWriter$Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$Segment), &PY_TYPE_DEF(StreamingCpfWriter$Segment), module, "StreamingCpfWriter$Segment", 0);
        }

        void t_StreamingCpfWriter$Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "class_", make_descriptor(StreamingCpfWriter$Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "wrapfn_", make_descriptor(t_StreamingCpfWriter$Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$Segment::wrap_Object(StreamingCpfWriter$Segment(((t_StreamingCpfWriter$Segment *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg)
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

        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
          {
            OBJ_CALL(self->object.writeEphemerisLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "writeEphemerisLine", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Header::class$ = NULL;
              jmethodID *SsrIgm01Header::mids$ = NULL;
              bool SsrIgm01Header::live$ = false;

              jclass SsrIgm01Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_44ed599e93e8a30c] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Header::SsrIgm01Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIgm01Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_55546ef6a647f39b]);
              }

              void SsrIgm01Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_44ed599e93e8a30c], a0);
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
              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self);
              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg);
              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data);
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Header)[] = {
                { Py_tp_methods, t_SsrIgm01Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Header_init_ },
                { Py_tp_getset, t_SsrIgm01Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Header, t_SsrIgm01Header, SsrIgm01Header);

              void t_SsrIgm01Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Header), &PY_TYPE_DEF(SsrIgm01Header), module, "SsrIgm01Header", 0);
              }

              void t_SsrIgm01Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "class_", make_descriptor(SsrIgm01Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "wrapfn_", make_descriptor(t_SsrIgm01Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Header::wrap_Object(SsrIgm01Header(((t_SsrIgm01Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Header object((jobject) NULL);

                INT_CALL(object = SsrIgm01Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/hipparchus/util/Precision.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Precision::class$ = NULL;
      jmethodID *Precision::mids$ = NULL;
      bool Precision::live$ = false;
      jdouble Precision::EPSILON = (jdouble) 0;
      jdouble Precision::SAFE_MIN = (jdouble) 0;

      jclass Precision::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Precision");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compareTo_18a1d9f7038621b1] = env->getStaticMethodID(cls, "compareTo", "(DDD)I");
          mids$[mid_compareTo_94fc7c86fb1a5c44] = env->getStaticMethodID(cls, "compareTo", "(DDI)I");
          mids$[mid_equals_cd8da52a7e84190c] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_equals_8eb2261870903ac3] = env->getStaticMethodID(cls, "equals", "(FF)Z");
          mids$[mid_equals_bf10cceb76af8f9c] = env->getStaticMethodID(cls, "equals", "(DDD)Z");
          mids$[mid_equals_5bb0bdcb37b789c1] = env->getStaticMethodID(cls, "equals", "(DDI)Z");
          mids$[mid_equals_f0bec0daed739313] = env->getStaticMethodID(cls, "equals", "(FFF)Z");
          mids$[mid_equals_f52624cee373f677] = env->getStaticMethodID(cls, "equals", "(FFI)Z");
          mids$[mid_equalsIncludingNaN_cd8da52a7e84190c] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DD)Z");
          mids$[mid_equalsIncludingNaN_8eb2261870903ac3] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FF)Z");
          mids$[mid_equalsIncludingNaN_bf10cceb76af8f9c] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDD)Z");
          mids$[mid_equalsIncludingNaN_f0bec0daed739313] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFF)Z");
          mids$[mid_equalsIncludingNaN_5bb0bdcb37b789c1] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDI)Z");
          mids$[mid_equalsIncludingNaN_f52624cee373f677] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFI)Z");
          mids$[mid_equalsWithRelativeTolerance_bf10cceb76af8f9c] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(DDD)Z");
          mids$[mid_isMathematicalInteger_716249baa52d209e] = env->getStaticMethodID(cls, "isMathematicalInteger", "(D)Z");
          mids$[mid_isMathematicalInteger_967314f8b6d71dd4] = env->getStaticMethodID(cls, "isMathematicalInteger", "(F)Z");
          mids$[mid_representableDelta_99e3200dafc19573] = env->getStaticMethodID(cls, "representableDelta", "(DD)D");
          mids$[mid_round_2eeda88661ae34d3] = env->getStaticMethodID(cls, "round", "(DI)D");
          mids$[mid_round_7bd2126e67defb15] = env->getStaticMethodID(cls, "round", "(FI)F");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EPSILON = env->getStaticDoubleField(cls, "EPSILON");
          SAFE_MIN = env->getStaticDoubleField(cls, "SAFE_MIN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_18a1d9f7038621b1], a0, a1, a2);
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_94fc7c86fb1a5c44], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_cd8da52a7e84190c], a0, a1);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_8eb2261870903ac3], a0, a1);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_bf10cceb76af8f9c], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_5bb0bdcb37b789c1], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f0bec0daed739313], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f52624cee373f677], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_cd8da52a7e84190c], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_8eb2261870903ac3], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_bf10cceb76af8f9c], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_f0bec0daed739313], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_5bb0bdcb37b789c1], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_f52624cee373f677], a0, a1, a2);
      }

      jboolean Precision::equalsWithRelativeTolerance(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_bf10cceb76af8f9c], a0, a1, a2);
      }

      jboolean Precision::isMathematicalInteger(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_716249baa52d209e], a0);
      }

      jboolean Precision::isMathematicalInteger(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_967314f8b6d71dd4], a0);
      }

      jdouble Precision::representableDelta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_representableDelta_99e3200dafc19573], a0, a1);
      }

      jdouble Precision::round(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_round_2eeda88661ae34d3], a0, a1);
      }

      jfloat Precision::round(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_round_7bd2126e67defb15], a0, a1);
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
      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Precision__methods_[] = {
        DECLARE_METHOD(t_Precision, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, compareTo, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, isMathematicalInteger, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, representableDelta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, round, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Precision)[] = {
        { Py_tp_methods, t_Precision__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Precision)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Precision, t_Precision, Precision);

      void t_Precision::install(PyObject *module)
      {
        installType(&PY_TYPE(Precision), &PY_TYPE_DEF(Precision), module, "Precision", 0);
      }

      void t_Precision::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "class_", make_descriptor(Precision::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "wrapfn_", make_descriptor(t_Precision::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "boxfn_", make_descriptor(boxObject));
        env->getClass(Precision::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "EPSILON", make_descriptor(Precision::EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "SAFE_MIN", make_descriptor(Precision::SAFE_MIN));
      }

      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Precision::initializeClass, 1)))
          return NULL;
        return t_Precision::wrap_Object(Precision(((t_Precision *) arg)->object.this$));
      }
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Precision::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "compareTo", args);
        return NULL;
      }

      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jboolean result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jboolean result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMathematicalInteger", args);
        return NULL;
      }

      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::representableDelta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "representableDelta", args);
        return NULL;
      }

      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
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
              mids$[mid_init$_b651b5ef96594ce8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesRangeModifier::OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b651b5ef96594ce8, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OnBoardAntennaInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *SubLimitAngle::class$ = NULL;
          jmethodID *SubLimitAngle::mids$ = NULL;
          bool SubLimitAngle::live$ = false;

          jclass SubLimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/SubLimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ae2db4be0bbe390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLimitAngle::SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_6ae2db4be0bbe390, a0.this$, a1.this$)) {}

          jdouble SubLimitAngle::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
          }

          jboolean SubLimitAngle::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLimitAngle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args);
          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data);
          static PyGetSetDef t_SubLimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_SubLimitAngle, empty),
            DECLARE_GET_FIELD(t_SubLimitAngle, size),
            DECLARE_GET_FIELD(t_SubLimitAngle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLimitAngle__methods_[] = {
            DECLARE_METHOD(t_SubLimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLimitAngle)[] = {
            { Py_tp_methods, t_SubLimitAngle__methods_ },
            { Py_tp_init, (void *) t_SubLimitAngle_init_ },
            { Py_tp_getset, t_SubLimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLimitAngle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLimitAngle, t_SubLimitAngle, SubLimitAngle);
          PyObject *t_SubLimitAngle::wrap_Object(const SubLimitAngle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLimitAngle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLimitAngle), &PY_TYPE_DEF(SubLimitAngle), module, "SubLimitAngle", 0);
          }

          void t_SubLimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "class_", make_descriptor(SubLimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "wrapfn_", make_descriptor(t_SubLimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLimitAngle::initializeClass, 1)))
              return NULL;
            return t_SubLimitAngle::wrap_Object(SubLimitAngle(((t_SubLimitAngle *) arg)->object.this$));
          }
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubLimitAngle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubLimitAngle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorConverter::class$ = NULL;
        jmethodID *PythonAbstractPropagatorConverter::mids$ = NULL;
        bool PythonAbstractPropagatorConverter::live$ = false;

        jclass PythonAbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_91f1a39ce0677121] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getModel_6a20d4ddc607b9bb] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_72c2cddd79f92b83] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorConverter::PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_91f1a39ce0677121, a0.this$, a1, a2)) {}

        void PythonAbstractPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractPropagatorConverter::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self);
        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorConverter, t_PythonAbstractPropagatorConverter, PythonAbstractPropagatorConverter);

        void t_PythonAbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorConverter), &PY_TYPE_DEF(PythonAbstractPropagatorConverter), module, "PythonAbstractPropagatorConverter", 1);
        }

        void t_PythonAbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "class_", make_descriptor(PythonAbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonAbstractPropagatorConverter_getModel0 },
            { "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;", (void *) t_PythonAbstractPropagatorConverter_getObjectiveFunction1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorConverter::wrap_Object(PythonAbstractPropagatorConverter(((t_PythonAbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractPropagatorConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModel", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("getModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObjectiveFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &value))
          {
            throwTypeError("getObjectiveFunction", result);
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

        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data)
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
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_8fed341cbd0be79a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
            mids$[mid_init$_b17fc9ddddb90642] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_e67a3f64db21455b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_88484f0bd7270549] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DD)V");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8fed341cbd0be79a, a0.this$, a1)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b17fc9ddddb90642, a0.this$, a1.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e67a3f64db21455b, a0.this$, a1.this$, a2)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_88484f0bd7270549, a0.this$, a1.this$, a2, a3)) {}

        void KeplerianPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/SignalCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SignalCode::class$ = NULL;
      jmethodID *SignalCode::mids$ = NULL;
      bool SignalCode::live$ = false;
      SignalCode *SignalCode::A = NULL;
      SignalCode *SignalCode::B = NULL;
      SignalCode *SignalCode::C = NULL;
      SignalCode *SignalCode::CODELESS = NULL;
      SignalCode *SignalCode::D = NULL;
      SignalCode *SignalCode::E = NULL;
      SignalCode *SignalCode::I = NULL;
      SignalCode *SignalCode::L = NULL;
      SignalCode *SignalCode::M = NULL;
      SignalCode *SignalCode::N = NULL;
      SignalCode *SignalCode::P = NULL;
      SignalCode *SignalCode::Q = NULL;
      SignalCode *SignalCode::S = NULL;
      SignalCode *SignalCode::W = NULL;
      SignalCode *SignalCode::X = NULL;
      SignalCode *SignalCode::Y = NULL;
      SignalCode *SignalCode::Z = NULL;

      jclass SignalCode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SignalCode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c567b9f38a3e11af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SignalCode;");
          mids$[mid_values_12006fc515163d83] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SignalCode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new SignalCode(env->getStaticObjectField(cls, "A", "Lorg/orekit/gnss/SignalCode;"));
          B = new SignalCode(env->getStaticObjectField(cls, "B", "Lorg/orekit/gnss/SignalCode;"));
          C = new SignalCode(env->getStaticObjectField(cls, "C", "Lorg/orekit/gnss/SignalCode;"));
          CODELESS = new SignalCode(env->getStaticObjectField(cls, "CODELESS", "Lorg/orekit/gnss/SignalCode;"));
          D = new SignalCode(env->getStaticObjectField(cls, "D", "Lorg/orekit/gnss/SignalCode;"));
          E = new SignalCode(env->getStaticObjectField(cls, "E", "Lorg/orekit/gnss/SignalCode;"));
          I = new SignalCode(env->getStaticObjectField(cls, "I", "Lorg/orekit/gnss/SignalCode;"));
          L = new SignalCode(env->getStaticObjectField(cls, "L", "Lorg/orekit/gnss/SignalCode;"));
          M = new SignalCode(env->getStaticObjectField(cls, "M", "Lorg/orekit/gnss/SignalCode;"));
          N = new SignalCode(env->getStaticObjectField(cls, "N", "Lorg/orekit/gnss/SignalCode;"));
          P = new SignalCode(env->getStaticObjectField(cls, "P", "Lorg/orekit/gnss/SignalCode;"));
          Q = new SignalCode(env->getStaticObjectField(cls, "Q", "Lorg/orekit/gnss/SignalCode;"));
          S = new SignalCode(env->getStaticObjectField(cls, "S", "Lorg/orekit/gnss/SignalCode;"));
          W = new SignalCode(env->getStaticObjectField(cls, "W", "Lorg/orekit/gnss/SignalCode;"));
          X = new SignalCode(env->getStaticObjectField(cls, "X", "Lorg/orekit/gnss/SignalCode;"));
          Y = new SignalCode(env->getStaticObjectField(cls, "Y", "Lorg/orekit/gnss/SignalCode;"));
          Z = new SignalCode(env->getStaticObjectField(cls, "Z", "Lorg/orekit/gnss/SignalCode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SignalCode SignalCode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SignalCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c567b9f38a3e11af], a0.this$));
      }

      JArray< SignalCode > SignalCode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SignalCode >(env->callStaticObjectMethod(cls, mids$[mid_values_12006fc515163d83]));
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
      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args);
      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SignalCode_values(PyTypeObject *type);
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data);
      static PyGetSetDef t_SignalCode__fields_[] = {
        DECLARE_GET_FIELD(t_SignalCode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SignalCode__methods_[] = {
        DECLARE_METHOD(t_SignalCode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, of_, METH_VARARGS),
        DECLARE_METHOD(t_SignalCode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SignalCode)[] = {
        { Py_tp_methods, t_SignalCode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SignalCode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SignalCode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SignalCode, t_SignalCode, SignalCode);
      PyObject *t_SignalCode::wrap_Object(const SignalCode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SignalCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SignalCode::install(PyObject *module)
      {
        installType(&PY_TYPE(SignalCode), &PY_TYPE_DEF(SignalCode), module, "SignalCode", 0);
      }

      void t_SignalCode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "class_", make_descriptor(SignalCode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "wrapfn_", make_descriptor(t_SignalCode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "boxfn_", make_descriptor(boxObject));
        env->getClass(SignalCode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "A", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "B", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "C", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "CODELESS", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::CODELESS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "D", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "E", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "I", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "L", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "M", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "N", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "P", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Q", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "S", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "W", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "X", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Y", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Z", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Z)));
      }

      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SignalCode::initializeClass, 1)))
          return NULL;
        return t_SignalCode::wrap_Object(SignalCode(((t_SignalCode *) arg)->object.this$));
      }
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SignalCode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SignalCode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SignalCode::valueOf(a0));
          return t_SignalCode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SignalCode_values(PyTypeObject *type)
      {
        JArray< SignalCode > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SignalCode::values());
        return JArray<jobject>(result.this$).wrap(t_SignalCode::wrap_jobject);
      }
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDParser::class$ = NULL;
        jmethodID *CRDParser::mids$ = NULL;
        bool CRDParser::live$ = false;
        ::java::lang::String *CRDParser::DEFAULT_CRD_SUPPORTED_NAMES = NULL;

        jclass CRDParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
            mids$[mid_getTimeScale_34d3bda0a8989e3e] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_parse_d0ee9288361369fc] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CRD;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CRD_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_CRD_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDParser::CRDParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        CRDParser::CRDParser(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

        ::org::orekit::time::TimeScale CRDParser::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_34d3bda0a8989e3e]));
        }

        ::org::orekit::files::ilrs::CRD CRDParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CRD(env->callObjectMethod(this$, mids$[mid_parse_d0ee9288361369fc], a0.this$));
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
        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self);
        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg);
        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data);
        static PyGetSetDef t_CRDParser__fields_[] = {
          DECLARE_GET_FIELD(t_CRDParser, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDParser__methods_[] = {
          DECLARE_METHOD(t_CRDParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDParser)[] = {
          { Py_tp_methods, t_CRDParser__methods_ },
          { Py_tp_init, (void *) t_CRDParser_init_ },
          { Py_tp_getset, t_CRDParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDParser, t_CRDParser, CRDParser);

        void t_CRDParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDParser), &PY_TYPE_DEF(CRDParser), module, "CRDParser", 0);
        }

        void t_CRDParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "class_", make_descriptor(CRDParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "wrapfn_", make_descriptor(t_CRDParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDParser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "DEFAULT_CRD_SUPPORTED_NAMES", make_descriptor(j2p(*CRDParser::DEFAULT_CRD_SUPPORTED_NAMES)));
        }

        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDParser::initializeClass, 1)))
            return NULL;
          return t_CRDParser::wrap_Object(CRDParser(((t_CRDParser *) arg)->object.this$));
        }
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CRDParser object((jobject) NULL);

              INT_CALL(object = CRDParser());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CRDParser object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CRDParser(a0));
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

        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CRD::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }

        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PythonAccelerationModel::class$ = NULL;
        jmethodID *PythonAccelerationModel::mids$ = NULL;
        bool PythonAccelerationModel::live$ = false;

        jclass PythonAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PythonAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_signedAmplitude_8e86371c61460f23] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
            mids$[mid_signedAmplitude_f867476668f8eb00] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAccelerationModel::PythonAccelerationModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAccelerationModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAccelerationModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAccelerationModel::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace empirical {
        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self);
        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args);
        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data);
        static PyGetSetDef t_PythonAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAccelerationModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PythonAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAccelerationModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAccelerationModel)[] = {
          { Py_tp_methods, t_PythonAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PythonAccelerationModel_init_ },
          { Py_tp_getset, t_PythonAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAccelerationModel, t_PythonAccelerationModel, PythonAccelerationModel);

        void t_PythonAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAccelerationModel), &PY_TYPE_DEF(PythonAccelerationModel), module, "PythonAccelerationModel", 1);
        }

        void t_PythonAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "class_", make_descriptor(PythonAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "wrapfn_", make_descriptor(t_PythonAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAccelerationModel::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAccelerationModel_getParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonAccelerationModel_pythonDecRef1 },
            { "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAccelerationModel_signedAmplitude2 },
            { "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonAccelerationModel_signedAmplitude3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PythonAccelerationModel::wrap_Object(PythonAccelerationModel(((t_PythonAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          PythonAccelerationModel object((jobject) NULL);

          INT_CALL(object = PythonAccelerationModel());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("signedAmplitude", result);
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

        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("signedAmplitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data)
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
#include "org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FiniteDifferencePropagatorConverter::class$ = NULL;
        jmethodID *FiniteDifferencePropagatorConverter::mids$ = NULL;
        bool FiniteDifferencePropagatorConverter::live$ = false;

        jclass FiniteDifferencePropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_91f1a39ce0677121] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_getModel_6a20d4ddc607b9bb] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_72c2cddd79f92b83] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencePropagatorConverter::FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_91f1a39ce0677121, a0.this$, a1, a2)) {}
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
        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_FiniteDifferencePropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencePropagatorConverter)[] = {
          { Py_tp_methods, t_FiniteDifferencePropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencePropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencePropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencePropagatorConverter, t_FiniteDifferencePropagatorConverter, FiniteDifferencePropagatorConverter);

        void t_FiniteDifferencePropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencePropagatorConverter), &PY_TYPE_DEF(FiniteDifferencePropagatorConverter), module, "FiniteDifferencePropagatorConverter", 0);
        }

        void t_FiniteDifferencePropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "class_", make_descriptor(FiniteDifferencePropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "wrapfn_", make_descriptor(t_FiniteDifferencePropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencePropagatorConverter::wrap_Object(FiniteDifferencePropagatorConverter(((t_FiniteDifferencePropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          FiniteDifferencePropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FiniteDifferencePropagatorConverter(a0, a1, a2));
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
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger::class$ = NULL;
        jmethodID *FieldEventsLogger::mids$ = NULL;
        bool FieldEventsLogger::live$ = false;

        jclass FieldEventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventsLogger::FieldEventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void FieldEventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_a1fa5dae97ea5ed2]);
        }

        ::java::util::List FieldEventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_e62d3bb06d56d7e3]));
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
        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args);
        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data);
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data);
        static PyGetSetDef t_FieldEventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger, loggedEvents),
          DECLARE_GET_FIELD(t_FieldEventsLogger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger, getLoggedEvents, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger)[] = {
          { Py_tp_methods, t_FieldEventsLogger__methods_ },
          { Py_tp_init, (void *) t_FieldEventsLogger_init_ },
          { Py_tp_getset, t_FieldEventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger, t_FieldEventsLogger, FieldEventsLogger);
        PyObject *t_FieldEventsLogger::wrap_Object(const FieldEventsLogger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger), &PY_TYPE_DEF(FieldEventsLogger), module, "FieldEventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "FieldLoggedEvent", make_descriptor(&PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent)));
        }

        void t_FieldEventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "class_", make_descriptor(FieldEventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "wrapfn_", make_descriptor(t_FieldEventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger::wrap_Object(FieldEventsLogger(((t_FieldEventsLogger *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds)
        {
          FieldEventsLogger object((jobject) NULL);

          INT_CALL(object = FieldEventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
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
          mids$[mid_init$_859cebb55f4be973] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getPnm_431f825c752f7b4c] = env->getMethodID(cls, "getPnm", "(II)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLegendrePolynomials::FieldLegendrePolynomials(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_859cebb55f4be973, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldLegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPnm_431f825c752f7b4c], a0, a1));
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
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_ad8592156f0d09e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getFilter_1ad5d92370feb87a] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_94951659c0c458e9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ad8592156f0d09e7, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9ada55f07f5a223c]));
        }

        ::org::orekit::propagation::events::FilterType EventSlopeFilter::getFilter() const
        {
          return ::org::orekit::propagation::events::FilterType(env->callObjectMethod(this$, mids$[mid_getFilter_1ad5d92370feb87a]));
        }

        void EventSlopeFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovariance::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovariance::mids$ = NULL;
            bool SigmaEigenvectorsCovariance::live$ = false;

            jclass SigmaEigenvectorsCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCsig3eigvec3_25e1757a36c4dde2] = env->getMethodID(cls, "getCsig3eigvec3", "()[D");
                mids$[mid_isAltCovFlagSet_9ab94ac1dc23b105] = env->getMethodID(cls, "isAltCovFlagSet", "()Z");
                mids$[mid_setCsig3eigvec3_ab69da052b88f50c] = env->getMethodID(cls, "setCsig3eigvec3", "([D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SigmaEigenvectorsCovariance::SigmaEigenvectorsCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

            JArray< jdouble > SigmaEigenvectorsCovariance::getCsig3eigvec3() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCsig3eigvec3_25e1757a36c4dde2]));
            }

            jboolean SigmaEigenvectorsCovariance::isAltCovFlagSet() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isAltCovFlagSet_9ab94ac1dc23b105]);
            }

            void SigmaEigenvectorsCovariance::setCsig3eigvec3(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsig3eigvec3_ab69da052b88f50c], a0.this$);
            }

            void SigmaEigenvectorsCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data);
            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data);
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovariance, altCovFlagSet),
              DECLARE_GETSET_FIELD(t_SigmaEigenvectorsCovariance, csig3eigvec3),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovariance__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, getCsig3eigvec3, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, isAltCovFlagSet, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, setCsig3eigvec3, METH_O),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovariance)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovariance__methods_ },
              { Py_tp_init, (void *) t_SigmaEigenvectorsCovariance_init_ },
              { Py_tp_getset, t_SigmaEigenvectorsCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovariance, t_SigmaEigenvectorsCovariance, SigmaEigenvectorsCovariance);

            void t_SigmaEigenvectorsCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovariance), &PY_TYPE_DEF(SigmaEigenvectorsCovariance), module, "SigmaEigenvectorsCovariance", 0);
            }

            void t_SigmaEigenvectorsCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "class_", make_descriptor(SigmaEigenvectorsCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovariance::wrap_Object(SigmaEigenvectorsCovariance(((t_SigmaEigenvectorsCovariance *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              SigmaEigenvectorsCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SigmaEigenvectorsCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCsig3eigvec3());
              return result.wrap();
            }

            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setCsig3eigvec3(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsig3eigvec3", arg);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SigmaEigenvectorsCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCsig3eigvec3());
              return value.wrap();
            }
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setCsig3eigvec3(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csig3eigvec3", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
