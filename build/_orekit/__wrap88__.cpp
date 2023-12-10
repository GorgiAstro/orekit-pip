#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractStateCovarianceInterpolator::class$ = NULL;
      jmethodID *AbstractStateCovarianceInterpolator::mids$ = NULL;
      bool AbstractStateCovarianceInterpolator::live$ = false;
      jint AbstractStateCovarianceInterpolator::COLUMN_DIM = (jint) 0;
      ::org::orekit::orbits::PositionAngleType *AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE = NULL;
      jint AbstractStateCovarianceInterpolator::ROW_DIM = (jint) 0;

      jclass AbstractStateCovarianceInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractStateCovarianceInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5f0807e7942c7d7c] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_7b4aa1d843c89a93] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getOrbitInterpolator_1d0d15c75b6b7aca] = env->getMethodID(cls, "getOrbitInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getOutFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getOutLOF_91870b5ccc8bfe11] = env->getMethodID(cls, "getOutLOF", "()Lorg/orekit/frames/LOFType;");
          mids$[mid_getOutOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOutOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getOutPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getOutPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_interpolate_fcc939c8c4b4de8b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedPair;");
          mids$[mid_interpolateOrbit_0577ed07067da9a4] = env->getMethodID(cls, "interpolateOrbit", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_b3673400c0fde69a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_expressCovarianceInDesiredOutput_787125c88b8db04c] = env->getMethodID(cls, "expressCovarianceInDesiredOutput", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/time/TimeStampedPair;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COLUMN_DIM = env->getStaticIntField(cls, "COLUMN_DIM");
          DEFAULT_POSITION_ANGLE = new ::org::orekit::orbits::PositionAngleType(env->getStaticObjectField(cls, "DEFAULT_POSITION_ANGLE", "Lorg/orekit/orbits/PositionAngleType;"));
          ROW_DIM = env->getStaticIntField(cls, "ROW_DIM");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5f0807e7942c7d7c, a0, a1, a2.this$, a3.this$)) {}

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7b4aa1d843c89a93, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::TimeInterpolator AbstractStateCovarianceInterpolator::getOrbitInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_1d0d15c75b6b7aca]));
      }

      ::org::orekit::frames::Frame AbstractStateCovarianceInterpolator::getOutFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::LOFType AbstractStateCovarianceInterpolator::getOutLOF() const
      {
        return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getOutLOF_91870b5ccc8bfe11]));
      }

      ::org::orekit::orbits::OrbitType AbstractStateCovarianceInterpolator::getOutOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOutOrbitType_e29360d311dc0e20]));
      }

      ::org::orekit::orbits::PositionAngleType AbstractStateCovarianceInterpolator::getOutPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getOutPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::orekit::time::TimeStampedPair AbstractStateCovarianceInterpolator::interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::time::TimeStampedPair(env->callObjectMethod(this$, mids$[mid_interpolate_fcc939c8c4b4de8b], a0.this$));
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
      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyGetSetDef t_AbstractStateCovarianceInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outFrame),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outLOF),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outOrbitType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outPositionAngleType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractStateCovarianceInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutLOF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractStateCovarianceInterpolator)[] = {
        { Py_tp_methods, t_AbstractStateCovarianceInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractStateCovarianceInterpolator_init_ },
        { Py_tp_getset, t_AbstractStateCovarianceInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractStateCovarianceInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractStateCovarianceInterpolator, t_AbstractStateCovarianceInterpolator, AbstractStateCovarianceInterpolator);
      PyObject *t_AbstractStateCovarianceInterpolator::wrap_Object(const AbstractStateCovarianceInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractStateCovarianceInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractStateCovarianceInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractStateCovarianceInterpolator), &PY_TYPE_DEF(AbstractStateCovarianceInterpolator), module, "AbstractStateCovarianceInterpolator", 0);
      }

      void t_AbstractStateCovarianceInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "class_", make_descriptor(AbstractStateCovarianceInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "wrapfn_", make_descriptor(t_AbstractStateCovarianceInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractStateCovarianceInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "COLUMN_DIM", make_descriptor(AbstractStateCovarianceInterpolator::COLUMN_DIM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "DEFAULT_POSITION_ANGLE", make_descriptor(::org::orekit::orbits::t_PositionAngleType::wrap_Object(*AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "ROW_DIM", make_descriptor(AbstractStateCovarianceInterpolator::ROW_DIM));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractStateCovarianceInterpolator::wrap_Object(AbstractStateCovarianceInterpolator(((t_AbstractStateCovarianceInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::LOFType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbstractTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeStampedPair result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::time::t_TimeStampedPair::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit), ::org::orekit::propagation::PY_TYPE(StateCovariance));
        }

        return callSuper(PY_TYPE(AbstractStateCovarianceInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::LOFType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolverEvent::class$ = NULL;
      jmethodID *IterativeLinearSolverEvent::mids$ = NULL;
      bool IterativeLinearSolverEvent::live$ = false;

      jclass IterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4d88176e7ce939fe] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getNormOfResidual_dff5885c2c873297] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_aab4fbf77867daa8] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_aab4fbf77867daa8] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_aab4fbf77867daa8] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_b108b35ef48e27bd] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolverEvent::IterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1) : ::org::hipparchus::util::IterationEvent(env->newObject(initializeClass, &mids$, mid_init$_4d88176e7ce939fe, a0.this$, a1)) {}

      jdouble IterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_aab4fbf77867daa8]));
      }

      jboolean IterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_b108b35ef48e27bd]);
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
      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_IterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getNormOfResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getRightHandSideVector, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getSolution, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, providesResidual, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_IterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_IterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::IterationEvent),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolverEvent, t_IterativeLinearSolverEvent, IterativeLinearSolverEvent);

      void t_IterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolverEvent), &PY_TYPE_DEF(IterativeLinearSolverEvent), module, "IterativeLinearSolverEvent", 0);
      }

      void t_IterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "class_", make_descriptor(IterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_IterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolverEvent::wrap_Object(IterativeLinearSolverEvent(((t_IterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterativeLinearSolverEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterativeLinearSolverEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.providesResidual());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer::live$ = false;

            jclass NonLinearConjugateGradientOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_66997f6d463bafd2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_10acb3130642ef67] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDD)V");
                mids$[mid_init$_37a794adef7d69f3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDDLorg/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner;)V");
                mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_66997f6d463bafd2, a0.this$, a1.this$)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_10acb3130642ef67, a0.this$, a1.this$, a2, a3, a4)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner & a5) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_37a794adef7d69f3, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

            ::org::hipparchus::optim::PointValuePair NonLinearConjugateGradientOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer, t_NonLinearConjugateGradientOptimizer, NonLinearConjugateGradientOptimizer);
            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_Object(const NonLinearConjugateGradientOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer), module, "NonLinearConjugateGradientOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "IdentityPreconditioner", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "Formula", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula)));
            }

            void t_NonLinearConjugateGradientOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "class_", make_descriptor(NonLinearConjugateGradientOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer::wrap_Object(NonLinearConjugateGradientOptimizer(((t_NonLinearConjugateGradientOptimizer *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDD", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner a5((jobject) NULL);
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDDk", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(NonLinearConjugateGradientOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovariance::class$ = NULL;
            jmethodID *CartesianCovariance::mids$ = NULL;
            bool CartesianCovariance::live$ = false;

            jclass CartesianCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4c1598888ef52491] = env->getMethodID(cls, "<init>", "(Ljava/util/function/Supplier;)V");
                mids$[mid_getCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCovarianceMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovariance::CartesianCovariance(const ::java::util::function::Supplier & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_4c1598888ef52491, a0.this$)) {}

            ::org::hipparchus::linear::RealMatrix CartesianCovariance::getCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_688b496048ff947b]));
            }

            ::org::orekit::time::AbsoluteDate CartesianCovariance::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CartesianCovariance::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_5d5dd95b04037824]));
            }

            void CartesianCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_1506189166690b5e], a0, a1, a2);
            }

            void CartesianCovariance::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
            }

            void CartesianCovariance::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_849bc9e3b38b9bcb], a0.this$);
            }

            void CartesianCovariance::validate(jdouble a0) const
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
          namespace odm {
            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data);
            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_CartesianCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovariance, covarianceMatrix),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, epoch),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovariance__methods_[] = {
              DECLARE_METHOD(t_CartesianCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, getCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovariance, setEpoch, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovariance)[] = {
              { Py_tp_methods, t_CartesianCovariance__methods_ },
              { Py_tp_init, (void *) t_CartesianCovariance_init_ },
              { Py_tp_getset, t_CartesianCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(CartesianCovariance, t_CartesianCovariance, CartesianCovariance);

            void t_CartesianCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovariance), &PY_TYPE_DEF(CartesianCovariance), module, "CartesianCovariance", 0);
            }

            void t_CartesianCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "class_", make_descriptor(CartesianCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "wrapfn_", make_descriptor(t_CartesianCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovariance::initializeClass, 1)))
                return NULL;
              return t_CartesianCovariance::wrap_Object(CartesianCovariance(((t_CartesianCovariance *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds)
            {
              ::java::util::function::Supplier a0((jobject) NULL);
              PyTypeObject **p0;
              CartesianCovariance object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
              {
                INT_CALL(object = CartesianCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CartesianCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data)
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

            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSNavigationMessage::class$ = NULL;
            jmethodID *GLONASSNavigationMessage::mids$ = NULL;
            bool GLONASSNavigationMessage::live$ = false;

            jclass GLONASSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getFrequencyNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getFrequencyNumber", "()I");
                mids$[mid_getGammaN_dff5885c2c873297] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getGroupDelayDifference_dff5885c2c873297] = env->getMethodID(cls, "getGroupDelayDifference", "()D");
                mids$[mid_getHealthFlags_570ce0828f81a2c1] = env->getMethodID(cls, "getHealthFlags", "()I");
                mids$[mid_getPropagator_a27ee2dfde4b9b92] = env->getMethodID(cls, "getPropagator", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_6290c448121b7580] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_54ef271179bfa4dd] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getStatusFlags_570ce0828f81a2c1] = env->getMethodID(cls, "getStatusFlags", "()I");
                mids$[mid_getTN_dff5885c2c873297] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_dff5885c2c873297] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setFrequencyNumber_17db3a65980d3441] = env->getMethodID(cls, "setFrequencyNumber", "(D)V");
                mids$[mid_setGammaN_17db3a65980d3441] = env->getMethodID(cls, "setGammaN", "(D)V");
                mids$[mid_setGroupDelayDifference_17db3a65980d3441] = env->getMethodID(cls, "setGroupDelayDifference", "(D)V");
                mids$[mid_setHealthFlags_17db3a65980d3441] = env->getMethodID(cls, "setHealthFlags", "(D)V");
                mids$[mid_setStatusFlags_17db3a65980d3441] = env->getMethodID(cls, "setStatusFlags", "(D)V");
                mids$[mid_setTauN_17db3a65980d3441] = env->getMethodID(cls, "setTauN", "(D)V");
                mids$[mid_setTime_17db3a65980d3441] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_17db3a65980d3441] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSNavigationMessage::GLONASSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint GLONASSNavigationMessage::getFrequencyNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyNumber_570ce0828f81a2c1]);
            }

            jdouble GLONASSNavigationMessage::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_dff5885c2c873297]);
            }

            jdouble GLONASSNavigationMessage::getGroupDelayDifference() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGroupDelayDifference_dff5885c2c873297]);
            }

            jint GLONASSNavigationMessage::getHealthFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthFlags_570ce0828f81a2c1]);
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_a27ee2dfde4b9b92], a0));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6290c448121b7580], a0, a1.this$));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_54ef271179bfa4dd], a0, a1.this$, a2.this$, a3.this$, a4));
            }

            jint GLONASSNavigationMessage::getStatusFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getStatusFlags_570ce0828f81a2c1]);
            }

            jdouble GLONASSNavigationMessage::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_dff5885c2c873297]);
            }

            jdouble GLONASSNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jdouble GLONASSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_dff5885c2c873297]);
            }

            void GLONASSNavigationMessage::setFrequencyNumber(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrequencyNumber_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setGammaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGammaN_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setGroupDelayDifference(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGroupDelayDifference_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setHealthFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthFlags_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setStatusFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStatusFlags_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setTauN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTauN_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_17db3a65980d3441], a0);
            }

            void GLONASSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_17db3a65980d3441], a0);
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
            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args);
            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GLONASSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, frequencyNumber),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, gammaN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, groupDelayDifference),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, healthFlags),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, statusFlags),
              DECLARE_GET_FIELD(t_GLONASSNavigationMessage, tN),
              DECLARE_SET_FIELD(t_GLONASSNavigationMessage, tauN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GLONASSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getFrequencyNumber, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGroupDelayDifference, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getHealthFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getStatusFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setFrequencyNumber, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGammaN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGroupDelayDifference, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setHealthFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setStatusFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTauN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSNavigationMessage)[] = {
              { Py_tp_methods, t_GLONASSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GLONASSNavigationMessage_init_ },
              { Py_tp_getset, t_GLONASSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(GLONASSNavigationMessage, t_GLONASSNavigationMessage, GLONASSNavigationMessage);

            void t_GLONASSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSNavigationMessage), &PY_TYPE_DEF(GLONASSNavigationMessage), module, "GLONASSNavigationMessage", 0);
            }

            void t_GLONASSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "class_", make_descriptor(GLONASSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "wrapfn_", make_descriptor(t_GLONASSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GLONASSNavigationMessage::wrap_Object(GLONASSNavigationMessage(((t_GLONASSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GLONASSNavigationMessage object((jobject) NULL);

              INT_CALL(object = GLONASSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "Dk", ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "DkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getStatusFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFrequencyNumber(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrequencyNumber", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGammaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGammaN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGroupDelayDifference(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGroupDelayDifference", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealthFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setStatusFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStatusFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTauN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTauN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFrequencyNumber(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frequencyNumber", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGammaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "gammaN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGroupDelayDifference(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "groupDelayDifference", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealthFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getStatusFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setStatusFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "statusFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTauN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tauN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$SmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$SmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$SmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$SmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_8c19bdea212fe058] = env->getMethodID(cls, "value", "(DDD)D");
            mids$[mid_checkInputEdges_8f2e782d5278b131] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_8c19bdea212fe058] = env->getMethodID(cls, "clampInput", "(DDD)D");
            mids$[mid_normalizeInput_8c19bdea212fe058] = env->getMethodID(cls, "normalizeInput", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8c19bdea212fe058], a0, a1, a2);
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
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$SmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$SmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$SmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$SmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::PolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$SmoothStepFunction, t_SmoothStepFactory$SmoothStepFunction, SmoothStepFactory$SmoothStepFunction);

        void t_SmoothStepFactory$SmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$SmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction), module, "SmoothStepFactory$SmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$SmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$SmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$SmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$SmoothStepFunction::wrap_Object(SmoothStepFactory$SmoothStepFunction(((t_SmoothStepFactory$SmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$SmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixPreservingVisitor::live$ = false;

      jclass DefaultFieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f96eb0f00086e90d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_d302e4fbc652587d] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixPreservingVisitor::DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f96eb0f00086e90d, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void DefaultFieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      void DefaultFieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_d302e4fbc652587d], a0, a1, a2.this$);
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
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixPreservingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixPreservingVisitor, t_DefaultFieldMatrixPreservingVisitor, DefaultFieldMatrixPreservingVisitor);
      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_Object(const DefaultFieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor), module, "DefaultFieldMatrixPreservingVisitor", 0);
      }

      void t_DefaultFieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "class_", make_descriptor(DefaultFieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixPreservingVisitor::wrap_Object(DefaultFieldMatrixPreservingVisitor(((t_DefaultFieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixPreservingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixPreservingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocity::class$ = NULL;
              jmethodID *AngularVelocity::mids$ = NULL;
              bool AngularVelocity::live$ = false;

              jclass AngularVelocity::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAngVelX_dff5885c2c873297] = env->getMethodID(cls, "getAngVelX", "()D");
                  mids$[mid_getAngVelY_dff5885c2c873297] = env->getMethodID(cls, "getAngVelY", "()D");
                  mids$[mid_getAngVelZ_dff5885c2c873297] = env->getMethodID(cls, "getAngVelZ", "()D");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getFrame_5d5dd95b04037824] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setAngVelX_17db3a65980d3441] = env->getMethodID(cls, "setAngVelX", "(D)V");
                  mids$[mid_setAngVelY_17db3a65980d3441] = env->getMethodID(cls, "setAngVelY", "(D)V");
                  mids$[mid_setAngVelZ_17db3a65980d3441] = env->getMethodID(cls, "setAngVelZ", "(D)V");
                  mids$[mid_setFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AngularVelocity::AngularVelocity() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble AngularVelocity::getAngVelX() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelX_dff5885c2c873297]);
              }

              jdouble AngularVelocity::getAngVelY() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelY_dff5885c2c873297]);
              }

              jdouble AngularVelocity::getAngVelZ() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelZ_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AngularVelocity::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AngularVelocity::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_5d5dd95b04037824]));
              }

              void AngularVelocity::setAngVelX(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelX_17db3a65980d3441], a0);
              }

              void AngularVelocity::setAngVelY(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelY_17db3a65980d3441], a0);
              }

              void AngularVelocity::setAngVelZ(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelZ_17db3a65980d3441], a0);
              }

              void AngularVelocity::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AngularVelocity::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args);
              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data);
              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyGetSetDef t_AngularVelocity__fields_[] = {
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelX),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelY),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelZ),
                DECLARE_GET_FIELD(t_AngularVelocity, endpoints),
                DECLARE_GETSET_FIELD(t_AngularVelocity, frame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocity__methods_[] = {
                DECLARE_METHOD(t_AngularVelocity, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelX, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelY, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelZ, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, setAngVelX, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelY, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelZ, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setFrame, METH_O),
                DECLARE_METHOD(t_AngularVelocity, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocity)[] = {
                { Py_tp_methods, t_AngularVelocity__methods_ },
                { Py_tp_init, (void *) t_AngularVelocity_init_ },
                { Py_tp_getset, t_AngularVelocity__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocity)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AngularVelocity, t_AngularVelocity, AngularVelocity);

              void t_AngularVelocity::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocity), &PY_TYPE_DEF(AngularVelocity), module, "AngularVelocity", 0);
              }

              void t_AngularVelocity::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "class_", make_descriptor(AngularVelocity::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "wrapfn_", make_descriptor(t_AngularVelocity::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocity::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocity::wrap_Object(AngularVelocity(((t_AngularVelocity *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocity::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds)
              {
                AngularVelocity object((jobject) NULL);

                INT_CALL(object = AngularVelocity());
                self->object = object;

                return 0;
              }

              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelX());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelY());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelX(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelX", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelY(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelY", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelZ(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelZ", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AngularVelocity), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelX());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelX(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelX", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelY());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelY(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelY", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelZ(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelZ", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
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
              mids$[mid_init$_f2d2df585c0173ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_acb9ad5ce0f1d2de] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeBuilder::BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2d2df585c0173ae, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRange BistaticRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRange(env->callObjectMethod(this$, mids$[mid_build_acb9ad5ce0f1d2de], a0.this$, a1.this$));
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
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonAbstractMultipleShooting::class$ = NULL;
      jmethodID *PythonAbstractMultipleShooting::mids$ = NULL;
      bool PythonAbstractMultipleShooting::live$ = false;

      jclass PythonAbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonAbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d9bf154f5a0c8c94] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;DIZLjava/lang/String;)V");
          mids$[mid_computeAdditionalConstraints_ae31e5696ec6455b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_11c2223c723fd443] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAugmentedInitialState_8f68ada11fb66675] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMultipleShooting::PythonAbstractMultipleShooting(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2, jint a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_d9bf154f5a0c8c94, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

      void PythonAbstractMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self);
      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0);
      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonAbstractMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMultipleShooting)[] = {
        { Py_tp_methods, t_PythonAbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMultipleShooting_init_ },
        { Py_tp_getset, t_PythonAbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMultipleShooting, t_PythonAbstractMultipleShooting, PythonAbstractMultipleShooting);

      void t_PythonAbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMultipleShooting), &PY_TYPE_DEF(PythonAbstractMultipleShooting), module, "PythonAbstractMultipleShooting", 1);
      }

      void t_PythonAbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "class_", make_descriptor(PythonAbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "wrapfn_", make_descriptor(t_PythonAbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "computeAdditionalConstraints", "(Ljava/util/List;)[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalConstraints0 },
          { "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1 },
          { "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractMultipleShooting_getAugmentedInitialState2 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMultipleShooting_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMultipleShooting::wrap_Object(PythonAbstractMultipleShooting(((t_PythonAbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jint a3;
        jboolean a4;
        ::java::lang::String a5((jobject) NULL);
        PythonAbstractMultipleShooting object((jobject) NULL);

        if (!parseArgs(args, "KKDIZs", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = PythonAbstractMultipleShooting(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalConstraints", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("computeAdditionalConstraints", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalJacobianMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeAdditionalJacobianMatrix", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAugmentedInitialState", "i", (int) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getAugmentedInitialState", result);
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

      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolution::class$ = NULL;
          jmethodID *IntegerLeastSquareSolution::mids$ = NULL;
          bool IntegerLeastSquareSolution::live$ = false;

          jclass IntegerLeastSquareSolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7a441056067c6c5b] = env->getMethodID(cls, "<init>", "([JD)V");
              mids$[mid_getSolution_08d09551619faf57] = env->getMethodID(cls, "getSolution", "()[J");
              mids$[mid_getSquaredDistance_dff5885c2c873297] = env->getMethodID(cls, "getSquaredDistance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareSolution::IntegerLeastSquareSolution(const JArray< jlong > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7a441056067c6c5b, a0.this$, a1)) {}

          JArray< jlong > IntegerLeastSquareSolution::getSolution() const
          {
            return JArray< jlong >(env->callObjectMethod(this$, mids$[mid_getSolution_08d09551619faf57]));
          }

          jdouble IntegerLeastSquareSolution::getSquaredDistance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSquaredDistance_dff5885c2c873297]);
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
          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data);
          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data);
          static PyGetSetDef t_IntegerLeastSquareSolution__fields_[] = {
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, solution),
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, squaredDistance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntegerLeastSquareSolution__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSolution, METH_NOARGS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSquaredDistance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolution)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolution__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareSolution_init_ },
            { Py_tp_getset, t_IntegerLeastSquareSolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolution, t_IntegerLeastSquareSolution, IntegerLeastSquareSolution);

          void t_IntegerLeastSquareSolution::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolution), &PY_TYPE_DEF(IntegerLeastSquareSolution), module, "IntegerLeastSquareSolution", 0);
          }

          void t_IntegerLeastSquareSolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "class_", make_descriptor(IntegerLeastSquareSolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolution::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolution::wrap_Object(IntegerLeastSquareSolution(((t_IntegerLeastSquareSolution *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds)
          {
            JArray< jlong > a0((jobject) NULL);
            jdouble a1;
            IntegerLeastSquareSolution object((jobject) NULL);

            if (!parseArgs(args, "[JD", &a0, &a1))
            {
              INT_CALL(object = IntegerLeastSquareSolution(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self)
          {
            JArray< jlong > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSolution());
            return result.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data)
          {
            JArray< jlong > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSolution());
            return value.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedKalmanFilter::class$ = NULL;
          jmethodID *UnscentedKalmanFilter::mids$ = NULL;
          bool UnscentedKalmanFilter::live$ = false;

          jclass UnscentedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8bb102852d4d6a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/unscented/UnscentedProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;Lorg/hipparchus/util/UnscentedTransformProvider;)V");
              mids$[mid_estimationStep_ba157b27aa6224ec] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getCorrected_c93ddc26f3b3eef4] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getPredicted_c93ddc26f3b3eef4] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getUnscentedTransformProvider_7accb6271c7127b9] = env->getMethodID(cls, "getUnscentedTransformProvider", "()Lorg/hipparchus/util/UnscentedTransformProvider;");
              mids$[mid_predictionAndCorrectionSteps_65e2c8ae613651cd] = env->getMethodID(cls, "predictionAndCorrectionSteps", "(Lorg/hipparchus/filtering/kalman/Measurement;[Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedKalmanFilter::UnscentedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2, const ::org::hipparchus::util::UnscentedTransformProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8bb102852d4d6a59, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_ba157b27aa6224ec], a0.this$));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getCorrected() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_c93ddc26f3b3eef4]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getPredicted() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_c93ddc26f3b3eef4]));
          }

          ::org::hipparchus::util::UnscentedTransformProvider UnscentedKalmanFilter::getUnscentedTransformProvider() const
          {
            return ::org::hipparchus::util::UnscentedTransformProvider(env->callObjectMethod(this$, mids$[mid_getUnscentedTransformProvider_7accb6271c7127b9]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::predictionAndCorrectionSteps(const ::org::hipparchus::filtering::kalman::Measurement & a0, const JArray< ::org::hipparchus::linear::RealVector > & a1) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_predictionAndCorrectionSteps_65e2c8ae613651cd], a0.this$, a1.this$));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args);
          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args);
          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data);
          static PyGetSetDef t_UnscentedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, corrected),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, predicted),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, unscentedTransformProvider),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_UnscentedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, estimationStep, METH_O),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getCorrected, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getPredicted, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getUnscentedTransformProvider, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, predictionAndCorrectionSteps, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanFilter)[] = {
            { Py_tp_methods, t_UnscentedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_UnscentedKalmanFilter_init_ },
            { Py_tp_getset, t_UnscentedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedKalmanFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedKalmanFilter, t_UnscentedKalmanFilter, UnscentedKalmanFilter);
          PyObject *t_UnscentedKalmanFilter::wrap_Object(const UnscentedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedKalmanFilter), &PY_TYPE_DEF(UnscentedKalmanFilter), module, "UnscentedKalmanFilter", 0);
          }

          void t_UnscentedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "class_", make_descriptor(UnscentedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "wrapfn_", make_descriptor(t_UnscentedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_UnscentedKalmanFilter::wrap_Object(UnscentedKalmanFilter(((t_UnscentedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ::org::hipparchus::util::UnscentedTransformProvider a3((jobject) NULL);
            UnscentedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedProcess::parameters_, &a2, &a3))
            {
              INT_CALL(object = UnscentedKalmanFilter(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
            return NULL;
          }

          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::util::UnscentedTransformProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.predictionAndCorrectionSteps(a0, a1));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "predictionAndCorrectionSteps", args);
            return NULL;
          }
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::util::UnscentedTransformProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OrekitConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OrekitConfiguration::class$ = NULL;
      jmethodID *OrekitConfiguration::mids$ = NULL;
      bool OrekitConfiguration::live$ = false;

      jclass OrekitConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OrekitConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCacheSlotsNumber_570ce0828f81a2c1] = env->getStaticMethodID(cls, "getCacheSlotsNumber", "()I");
          mids$[mid_setCacheSlotsNumber_99803b0791f320ff] = env->getStaticMethodID(cls, "setCacheSlotsNumber", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint OrekitConfiguration::getCacheSlotsNumber()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getCacheSlotsNumber_570ce0828f81a2c1]);
      }

      void OrekitConfiguration::setCacheSlotsNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setCacheSlotsNumber_99803b0791f320ff], a0);
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
      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type);
      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data);
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data);
      static PyGetSetDef t_OrekitConfiguration__fields_[] = {
        DECLARE_GETSET_FIELD(t_OrekitConfiguration, cacheSlotsNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitConfiguration__methods_[] = {
        DECLARE_METHOD(t_OrekitConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, getCacheSlotsNumber, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, setCacheSlotsNumber, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitConfiguration)[] = {
        { Py_tp_methods, t_OrekitConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrekitConfiguration, t_OrekitConfiguration, OrekitConfiguration);

      void t_OrekitConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitConfiguration), &PY_TYPE_DEF(OrekitConfiguration), module, "OrekitConfiguration", 0);
      }

      void t_OrekitConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "class_", make_descriptor(OrekitConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "wrapfn_", make_descriptor(t_OrekitConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitConfiguration::initializeClass, 1)))
          return NULL;
        return t_OrekitConfiguration::wrap_Object(OrekitConfiguration(((t_OrekitConfiguration *) arg)->object.this$));
      }
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type)
      {
        jint result;
        OBJ_CALL(result = ::org::orekit::utils::OrekitConfiguration::getCacheSlotsNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(::org::orekit::utils::OrekitConfiguration::setCacheSlotsNumber(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setCacheSlotsNumber", arg);
        return NULL;
      }

      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCacheSlotsNumber());
        return PyLong_FromLong((long) value);
      }
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setCacheSlotsNumber(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "cacheSlotsNumber", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataLoader::class$ = NULL;
      jmethodID *PythonDataLoader::mids$ = NULL;
      bool PythonDataLoader::live$ = false;

      jclass PythonDataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataLoader::PythonDataLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonDataLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonDataLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonDataLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self);
      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args);
      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data);
      static PyGetSetDef t_PythonDataLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataLoader__methods_[] = {
        DECLARE_METHOD(t_PythonDataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataLoader)[] = {
        { Py_tp_methods, t_PythonDataLoader__methods_ },
        { Py_tp_init, (void *) t_PythonDataLoader_init_ },
        { Py_tp_getset, t_PythonDataLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataLoader, t_PythonDataLoader, PythonDataLoader);

      void t_PythonDataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataLoader), &PY_TYPE_DEF(PythonDataLoader), module, "PythonDataLoader", 1);
      }

      void t_PythonDataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "class_", make_descriptor(PythonDataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "wrapfn_", make_descriptor(t_PythonDataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonDataLoader_loadData0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataLoader_pythonDecRef1 },
          { "stillAcceptsData", "()Z", (void *) t_PythonDataLoader_stillAcceptsData2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataLoader::initializeClass, 1)))
          return NULL;
        return t_PythonDataLoader::wrap_Object(PythonDataLoader(((t_PythonDataLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonDataLoader object((jobject) NULL);

        INT_CALL(object = PythonDataLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args)
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

      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "stillAcceptsData", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("stillAcceptsData", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data)
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSLegacyNavigationMessage::GPSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4add8fbc11d34426] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Segment;)V");
              mids$[mid_init$_10e1fbe5774bfd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_init$_9e348818a9543cf1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_a2606086a4a0acd9] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/SubLine;Z)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment & a0) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_4add8fbc11d34426, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_10e1fbe5774bfd91, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_9e348818a9543cf1, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_a2606086a4a0acd9], a0.this$, a1));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLine::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            DECLARE_GET_FIELD(t_SubLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);
          PyObject *t_SubLine::wrap_Object(const SubLine& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLine::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

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

          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::twod::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "KZ", SubLine::initializeClass, &a0, &p0, t_SubLine::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            return callSuper(PY_TYPE(SubLine), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationModifier::class$ = NULL;
        jmethodID *PythonEstimationModifier::mids$ = NULL;
        bool PythonEstimationModifier::live$ = false;

        jclass PythonEstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationModifier::PythonEstimationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEstimationModifier::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEstimationModifier::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEstimationModifier::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args);
        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self);
        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data);
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data);
        static PyGetSetDef t_PythonEstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationModifier, self),
          DECLARE_GET_FIELD(t_PythonEstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationModifier__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationModifier)[] = {
          { Py_tp_methods, t_PythonEstimationModifier__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationModifier_init_ },
          { Py_tp_getset, t_PythonEstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationModifier)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationModifier, t_PythonEstimationModifier, PythonEstimationModifier);
        PyObject *t_PythonEstimationModifier::wrap_Object(const PythonEstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonEstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonEstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationModifier), &PY_TYPE_DEF(PythonEstimationModifier), module, "PythonEstimationModifier", 1);
        }

        void t_PythonEstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "class_", make_descriptor(PythonEstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "wrapfn_", make_descriptor(t_PythonEstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationModifier::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonEstimationModifier_getParametersDrivers0 },
            { "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonEstimationModifier_modify1 },
            { "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V", (void *) t_PythonEstimationModifier_modifyWithoutDerivatives2 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationModifier_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationModifier::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationModifier::wrap_Object(PythonEstimationModifier(((t_PythonEstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationModifier object((jobject) NULL);

          INT_CALL(object = PythonEstimationModifier());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_492808a339bfa35f]);
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

        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "modify", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
          PyObject *result = PyObject_CallMethod(obj, "modifyWithoutDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data)
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
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSTransform::class$ = NULL;
        jmethodID *LOSTransform::mids$ = NULL;
        bool LOSTransform::live$ = false;

        jclass LOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_5bf59b7055ded983] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_ff297ae5ca0c9136] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream LOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_5bf59b7055ded983], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_ff297ae5ca0c9136], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self);
        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args);
        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data);
        static PyGetSetDef t_LOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_LOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LOSTransform__methods_[] = {
          DECLARE_METHOD(t_LOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSTransform)[] = {
          { Py_tp_methods, t_LOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSTransform, t_LOSTransform, LOSTransform);

        void t_LOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSTransform), &PY_TYPE_DEF(LOSTransform), module, "LOSTransform", 0);
        }

        void t_LOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "class_", make_descriptor(LOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "wrapfn_", make_descriptor(t_LOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSTransform::initializeClass, 1)))
            return NULL;
          return t_LOSTransform::wrap_Object(LOSTransform(((t_LOSTransform *) arg)->object.this$));
        }
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldBodiesElements::class$ = NULL;
      jmethodID *FieldBodiesElements::mids$ = NULL;
      bool FieldBodiesElements::live$ = false;

      jclass FieldBodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldBodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17fced9373839f7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJu_eba8e72a22c984ac] = env->getMethodID(cls, "getLJu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJuDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLJuDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMa_eba8e72a22c984ac] = env->getMethodID(cls, "getLMa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMaDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMe_eba8e72a22c984ac] = env->getMethodID(cls, "getLMe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNe_eba8e72a22c984ac] = env->getMethodID(cls, "getLNe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLNeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSa_eba8e72a22c984ac] = env->getMethodID(cls, "getLSa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSaDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLSaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUr_eba8e72a22c984ac] = env->getMethodID(cls, "getLUr", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUrDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLUrDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVe_eba8e72a22c984ac] = env->getMethodID(cls, "getLVe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLVeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPa_eba8e72a22c984ac] = env->getMethodID(cls, "getPa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPaDot_eba8e72a22c984ac] = env->getMethodID(cls, "getPaDot", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldBodiesElements::FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, const ::org::hipparchus::CalculusFieldElement & a16, const ::org::hipparchus::CalculusFieldElement & a17, const ::org::hipparchus::CalculusFieldElement & a18, const ::org::hipparchus::CalculusFieldElement & a19, const ::org::hipparchus::CalculusFieldElement & a20, const ::org::hipparchus::CalculusFieldElement & a21, const ::org::hipparchus::CalculusFieldElement & a22, const ::org::hipparchus::CalculusFieldElement & a23, const ::org::hipparchus::CalculusFieldElement & a24, const ::org::hipparchus::CalculusFieldElement & a25, const ::org::hipparchus::CalculusFieldElement & a26, const ::org::hipparchus::CalculusFieldElement & a27, const ::org::hipparchus::CalculusFieldElement & a28, const ::org::hipparchus::CalculusFieldElement & a29, const ::org::hipparchus::CalculusFieldElement & a30, const ::org::hipparchus::CalculusFieldElement & a31) : ::org::orekit::data::FieldDelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_17fced9373839f7f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$, a20.this$, a21.this$, a22.this$, a23.this$, a24.this$, a25.this$, a26.this$, a27.this$, a28.this$, a29.this$, a30.this$, a31.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJu_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJuDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJuDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMa_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMaDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMe_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMeDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNe_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNeDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSa_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSaDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUr() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUr_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUrDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUrDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVe_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVeDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPa_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPaDot_eba8e72a22c984ac]));
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
      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args);
      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data);
      static PyGetSetDef t_FieldBodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBodiesElements, lE),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lEDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJu),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUr),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, pa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, paDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBodiesElements__methods_[] = {
        DECLARE_METHOD(t_FieldBodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBodiesElements)[] = {
        { Py_tp_methods, t_FieldBodiesElements__methods_ },
        { Py_tp_init, (void *) t_FieldBodiesElements_init_ },
        { Py_tp_getset, t_FieldBodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::FieldDelaunayArguments),
        NULL
      };

      DEFINE_TYPE(FieldBodiesElements, t_FieldBodiesElements, FieldBodiesElements);
      PyObject *t_FieldBodiesElements::wrap_Object(const FieldBodiesElements& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBodiesElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBodiesElements), &PY_TYPE_DEF(FieldBodiesElements), module, "FieldBodiesElements", 0);
      }

      void t_FieldBodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "class_", make_descriptor(FieldBodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "wrapfn_", make_descriptor(t_FieldBodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBodiesElements::initializeClass, 1)))
          return NULL;
        return t_FieldBodiesElements::wrap_Object(FieldBodiesElements(((t_FieldBodiesElements *) arg)->object.this$));
      }
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
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
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
        PyTypeObject **p14;
        ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
        PyTypeObject **p15;
        ::org::hipparchus::CalculusFieldElement a16((jobject) NULL);
        PyTypeObject **p16;
        ::org::hipparchus::CalculusFieldElement a17((jobject) NULL);
        PyTypeObject **p17;
        ::org::hipparchus::CalculusFieldElement a18((jobject) NULL);
        PyTypeObject **p18;
        ::org::hipparchus::CalculusFieldElement a19((jobject) NULL);
        PyTypeObject **p19;
        ::org::hipparchus::CalculusFieldElement a20((jobject) NULL);
        PyTypeObject **p20;
        ::org::hipparchus::CalculusFieldElement a21((jobject) NULL);
        PyTypeObject **p21;
        ::org::hipparchus::CalculusFieldElement a22((jobject) NULL);
        PyTypeObject **p22;
        ::org::hipparchus::CalculusFieldElement a23((jobject) NULL);
        PyTypeObject **p23;
        ::org::hipparchus::CalculusFieldElement a24((jobject) NULL);
        PyTypeObject **p24;
        ::org::hipparchus::CalculusFieldElement a25((jobject) NULL);
        PyTypeObject **p25;
        ::org::hipparchus::CalculusFieldElement a26((jobject) NULL);
        PyTypeObject **p26;
        ::org::hipparchus::CalculusFieldElement a27((jobject) NULL);
        PyTypeObject **p27;
        ::org::hipparchus::CalculusFieldElement a28((jobject) NULL);
        PyTypeObject **p28;
        ::org::hipparchus::CalculusFieldElement a29((jobject) NULL);
        PyTypeObject **p29;
        ::org::hipparchus::CalculusFieldElement a30((jobject) NULL);
        PyTypeObject **p30;
        ::org::hipparchus::CalculusFieldElement a31((jobject) NULL);
        PyTypeObject **p31;
        FieldBodiesElements object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &p16, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a17, &p17, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a18, &p18, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a19, &p19, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a20, &p20, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a21, &p21, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a22, &p22, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a23, &p23, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a24, &p24, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a25, &p25, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a26, &p26, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a27, &p27, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a28, &p28, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a29, &p29, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a30, &p30, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a31, &p31, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldBodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJuDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUr());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUrDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJuDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUr());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUrDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GNSSDate::class$ = NULL;
      jmethodID *GNSSDate::mids$ = NULL;
      bool GNSSDate::live$ = false;

      jclass GNSSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GNSSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b9cc2ac718a579c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_48a5f9e9ad2c84e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_dc5b21d86cac5eb8] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_754add1b388c7d4c] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_48bb1b17002bbd73] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMilliInWeek_dff5885c2c873297] = env->getMethodID(cls, "getMilliInWeek", "()D");
          mids$[mid_getRolloverReference_06e6477664d37caa] = env->getStaticMethodID(cls, "getRolloverReference", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getSecondsInWeek_dff5885c2c873297] = env->getMethodID(cls, "getSecondsInWeek", "()D");
          mids$[mid_getWeekNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getWeekNumber", "()I");
          mids$[mid_setRolloverReference_56dc33c3871b1cb7] = env->getStaticMethodID(cls, "setRolloverReference", "(Lorg/orekit/time/DateComponents;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9cc2ac718a579c4, a0.this$, a1.this$)) {}

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48a5f9e9ad2c84e7, a0.this$, a1.this$, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc5b21d86cac5eb8, a0, a1, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_754add1b388c7d4c, a0, a1, a2.this$, a3.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48bb1b17002bbd73, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate GNSSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble GNSSDate::getMilliInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMilliInWeek_dff5885c2c873297]);
      }

      ::org::orekit::time::DateComponents GNSSDate::getRolloverReference()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::DateComponents(env->callStaticObjectMethod(cls, mids$[mid_getRolloverReference_06e6477664d37caa]));
      }

      jdouble GNSSDate::getSecondsInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInWeek_dff5885c2c873297]);
      }

      jint GNSSDate::getWeekNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getWeekNumber_570ce0828f81a2c1]);
      }

      void GNSSDate::setRolloverReference(const ::org::orekit::time::DateComponents & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setRolloverReference_56dc33c3871b1cb7], a0.this$);
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
      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type);
      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self);
      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data);
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data);
      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data);
      static PyGetSetDef t_GNSSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GNSSDate, date),
        DECLARE_GET_FIELD(t_GNSSDate, milliInWeek),
        DECLARE_GETSET_FIELD(t_GNSSDate, rolloverReference),
        DECLARE_GET_FIELD(t_GNSSDate, secondsInWeek),
        DECLARE_GET_FIELD(t_GNSSDate, weekNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GNSSDate__methods_[] = {
        DECLARE_METHOD(t_GNSSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getMilliInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getRolloverReference, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getSecondsInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getWeekNumber, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, setRolloverReference, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GNSSDate)[] = {
        { Py_tp_methods, t_GNSSDate__methods_ },
        { Py_tp_init, (void *) t_GNSSDate_init_ },
        { Py_tp_getset, t_GNSSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GNSSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GNSSDate, t_GNSSDate, GNSSDate);

      void t_GNSSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GNSSDate), &PY_TYPE_DEF(GNSSDate), module, "GNSSDate", 0);
      }

      void t_GNSSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "class_", make_descriptor(GNSSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "wrapfn_", make_descriptor(t_GNSSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GNSSDate::initializeClass, 1)))
          return NULL;
        return t_GNSSDate::wrap_Object(GNSSDate(((t_GNSSDate *) arg)->object.this$));
      }
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GNSSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKkk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3, &a4))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3, a4));
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

      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::GNSSDate::getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getWeekNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::GNSSDate::setRolloverReference(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setRolloverReference", arg);
        return NULL;
      }

      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
          {
            INT_CALL(self->object.setRolloverReference(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "rolloverReference", arg);
        return -1;
      }

      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getWeekNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$LeafMerger::class$ = NULL;
        jmethodID *BSPTree$LeafMerger::mids$ = NULL;
        bool BSPTree$LeafMerger::live$ = false;

        jclass BSPTree$LeafMerger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$LeafMerger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_merge_a220d82b690dc3f1] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;ZZ)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$LeafMerger::merge(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree & a1, const ::org::hipparchus::geometry::partitioning::BSPTree & a2, jboolean a3, jboolean a4) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_merge_a220d82b690dc3f1], a0.this$, a1.this$, a2.this$, a3, a4));
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
      namespace partitioning {
        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data);
        static PyGetSetDef t_BSPTree$LeafMerger__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$LeafMerger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$LeafMerger__methods_[] = {
          DECLARE_METHOD(t_BSPTree$LeafMerger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, merge, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$LeafMerger)[] = {
          { Py_tp_methods, t_BSPTree$LeafMerger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$LeafMerger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$LeafMerger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$LeafMerger, t_BSPTree$LeafMerger, BSPTree$LeafMerger);
        PyObject *t_BSPTree$LeafMerger::wrap_Object(const BSPTree$LeafMerger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$LeafMerger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$LeafMerger::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$LeafMerger), &PY_TYPE_DEF(BSPTree$LeafMerger), module, "BSPTree$LeafMerger", 0);
        }

        void t_BSPTree$LeafMerger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "class_", make_descriptor(BSPTree$LeafMerger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "wrapfn_", make_descriptor(t_BSPTree$LeafMerger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$LeafMerger::initializeClass, 1)))
            return NULL;
          return t_BSPTree$LeafMerger::wrap_Object(BSPTree$LeafMerger(((t_BSPTree$LeafMerger *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$LeafMerger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::BSPTree a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean a3;
          jboolean a4;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KKKZZ", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a3, &a4))
          {
            OBJ_CALL(result = self->object.merge(a0, a1, a2, a3, a4));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_157022313aa57ab0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_values_c6c9afa65b77213d] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_isTriggeredOnIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "isTriggeredOnIncreasing", "()Z");
            mids$[mid_selectTransformer_17a5d6d4b6b70ca8] = env->getMethodID(cls, "selectTransformer", "(Lorg/hipparchus/ode/events/Transformer;DZ)Lorg/hipparchus/ode/events/Transformer;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_157022313aa57ab0], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_c6c9afa65b77213d]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *Encloser::class$ = NULL;
        jmethodID *Encloser::mids$ = NULL;
        bool Encloser::live$ = false;

        jclass Encloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/Encloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_enclose_ab52cd1d30fd41e7] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall Encloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_ab52cd1d30fd41e7], a0.this$));
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
        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args);
        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg);
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data);
        static PyGetSetDef t_Encloser__fields_[] = {
          DECLARE_GET_FIELD(t_Encloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Encloser__methods_[] = {
          DECLARE_METHOD(t_Encloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_Encloser, enclose, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Encloser)[] = {
          { Py_tp_methods, t_Encloser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Encloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Encloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Encloser, t_Encloser, Encloser);
        PyObject *t_Encloser::wrap_Object(const Encloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Encloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Encloser::install(PyObject *module)
        {
          installType(&PY_TYPE(Encloser), &PY_TYPE_DEF(Encloser), module, "Encloser", 0);
        }

        void t_Encloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "class_", make_descriptor(Encloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "wrapfn_", make_descriptor(t_Encloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Encloser::initializeClass, 1)))
            return NULL;
          return t_Encloser::wrap_Object(Encloser(((t_Encloser *) arg)->object.this$));
        }
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Encloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolver::class$ = NULL;
      jmethodID *IterativeLinearSolver::mids$ = NULL;
      bool IterativeLinearSolver::live$ = false;

      jclass IterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_298a9e348b1bb52b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getIterationManager_1efaf682bf1a617d] = env->getMethodID(cls, "getIterationManager", "()Lorg/hipparchus/util/IterationManager;");
          mids$[mid_solve_0c01ae2730abb842] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_f5ad289a93e4d7cc] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_f5ad289a93e4d7cc] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_b0f73128b1b05928] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolver::IterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_298a9e348b1bb52b, a0.this$)) {}

      IterativeLinearSolver::IterativeLinearSolver(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ::org::hipparchus::util::IterationManager IterativeLinearSolver::getIterationManager() const
      {
        return ::org::hipparchus::util::IterationManager(env->callObjectMethod(this$, mids$[mid_getIterationManager_1efaf682bf1a617d]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0c01ae2730abb842], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self);
      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data);
      static PyGetSetDef t_IterativeLinearSolver__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolver, iterationManager),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, getIterationManager, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolver)[] = {
        { Py_tp_methods, t_IterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolver_init_ },
        { Py_tp_getset, t_IterativeLinearSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolver, t_IterativeLinearSolver, IterativeLinearSolver);

      void t_IterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolver), &PY_TYPE_DEF(IterativeLinearSolver), module, "IterativeLinearSolver", 0);
      }

      void t_IterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "class_", make_descriptor(IterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "wrapfn_", make_descriptor(t_IterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolver::wrap_Object(IterativeLinearSolver(((t_IterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
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

      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self)
      {
        ::org::hipparchus::util::IterationManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "solveInPlace", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data)
      {
        ::org::hipparchus::util::IterationManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *ExtendedEllipsoid::class$ = NULL;
        jmethodID *ExtendedEllipsoid::mids$ = NULL;
        bool ExtendedEllipsoid::live$ = false;

        jclass ExtendedEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/ExtendedEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0fb2e2980abbca2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
            mids$[mid_convertLos_e2a27ed5c4e12f6f] = env->getMethodID(cls, "convertLos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_convertLos_82744d9863c444fe] = env->getMethodID(cls, "convertLos", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtAltitude_de52532c17b2a672] = env->getMethodID(cls, "pointAtAltitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLatitude_a6d54ec6f4d1012e] = env->getMethodID(cls, "pointAtLatitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLongitude_de52532c17b2a672] = env->getMethodID(cls, "pointAtLongitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointOnGround_d269da9b33be9c15] = env->getMethodID(cls, "pointOnGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_5402a59525ad1a15] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtendedEllipsoid::ExtendedEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_b0fb2e2980abbca2, a0, a1, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_e2a27ed5c4e12f6f], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_82744d9863c444fe], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtAltitude_de52532c17b2a672], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLatitude_a6d54ec6f4d1012e], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLongitude_de52532c17b2a672], a0.this$, a1.this$, a2));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointOnGround_d269da9b33be9c15], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_6cf64433187e46c3], a0.this$));
        }

        ::org::orekit::bodies::GeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_dd18b1b42137f809], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_5402a59525ad1a15], a0.this$, a1.this$, a2.this$, a3));
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
        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args);

        static PyMethodDef t_ExtendedEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ExtendedEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, convertLos, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtAltitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLatitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLongitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointOnGround, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtendedEllipsoid)[] = {
          { Py_tp_methods, t_ExtendedEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ExtendedEllipsoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtendedEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ExtendedEllipsoid, t_ExtendedEllipsoid, ExtendedEllipsoid);

        void t_ExtendedEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtendedEllipsoid), &PY_TYPE_DEF(ExtendedEllipsoid), module, "ExtendedEllipsoid", 0);
        }

        void t_ExtendedEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "class_", make_descriptor(ExtendedEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "wrapfn_", make_descriptor(t_ExtendedEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtendedEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ExtendedEllipsoid::wrap_Object(ExtendedEllipsoid(((t_ExtendedEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtendedEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ExtendedEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = ExtendedEllipsoid(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convertLos", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtAltitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtAltitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.pointAtLatitude(a0, a1, a2, a3));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLatitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtLongitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLongitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointOnGround(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointOnGround", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2, a3));
                return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ExtendedEllipsoid), (PyObject *) self, "transform", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateMatrixFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateMatrixFunctionDifferentiator::mids$ = NULL;
        bool UnivariateMatrixFunctionDifferentiator::live$ = false;

        jclass UnivariateMatrixFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_b4b7f37a2e968eae] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction UnivariateMatrixFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_b4b7f37a2e968eae], a0.this$));
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
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateMatrixFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateMatrixFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateMatrixFunctionDifferentiator, t_UnivariateMatrixFunctionDifferentiator, UnivariateMatrixFunctionDifferentiator);

        void t_UnivariateMatrixFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateMatrixFunctionDifferentiator), &PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator), module, "UnivariateMatrixFunctionDifferentiator", 0);
        }

        void t_UnivariateMatrixFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "class_", make_descriptor(UnivariateMatrixFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateMatrixFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateMatrixFunctionDifferentiator::wrap_Object(UnivariateMatrixFunctionDifferentiator(((t_UnivariateMatrixFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizer::class$ = NULL;
        jmethodID *StepNormalizer::mids$ = NULL;
        bool StepNormalizer::live$ = false;

        jclass StepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c334db62477c934b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;)V");
            mids$[mid_init$_bd641fe5a14778d1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_68002566390c50c2] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_2677c76d5904b812] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_250c80d95e429c01] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_8c00288d760ba078] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c334db62477c934b, a0, a1.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd641fe5a14778d1, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68002566390c50c2, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2677c76d5904b812, a0, a1.this$, a2.this$, a3.this$)) {}

        void StepNormalizer::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_250c80d95e429c01], a0.this$);
        }

        void StepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_8c00288d760ba078], a0.this$);
        }

        void StepNormalizer::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args);

        static PyMethodDef t_StepNormalizer__methods_[] = {
          DECLARE_METHOD(t_StepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_StepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_StepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizer)[] = {
          { Py_tp_methods, t_StepNormalizer__methods_ },
          { Py_tp_init, (void *) t_StepNormalizer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepNormalizer, t_StepNormalizer, StepNormalizer);

        void t_StepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizer), &PY_TYPE_DEF(StepNormalizer), module, "StepNormalizer", 0);
        }

        void t_StepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "class_", make_descriptor(StepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "wrapfn_", make_descriptor(t_StepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizer::initializeClass, 1)))
            return NULL;
          return t_StepNormalizer::wrap_Object(StepNormalizer(((t_StepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkKK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionFormat::class$ = NULL;
      jmethodID *FractionFormat::mids$ = NULL;
      bool FractionFormat::live$ = false;

      jclass FractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_e2028a486c5b97a5] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_44821f0beb3a37bc] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatFraction_6a3db48ac3720129] = env->getStaticMethodID(cls, "formatFraction", "(Lorg/hipparchus/fraction/Fraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_f192aaa296be0934] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getImproperInstance_10a3af3e09246bc7] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_f192aaa296be0934] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_10a3af3e09246bc7] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_parse_e9aed033a393d409] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_parse_32af1cad14e4c6d5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getDefaultNumberFormat_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FractionFormat::FractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_e2028a486c5b97a5, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer FractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_44821f0beb3a37bc], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer FractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String FractionFormat::formatFraction(const ::org::hipparchus::fraction::Fraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatFraction_6a3db48ac3720129], a0.this$));
      }

      JArray< ::java::util::Locale > FractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      FractionFormat FractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_f192aaa296be0934]));
      }

      FractionFormat FractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_10a3af3e09246bc7], a0.this$));
      }

      FractionFormat FractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_f192aaa296be0934]));
      }

      FractionFormat FractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_10a3af3e09246bc7], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_e9aed033a393d409], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_32af1cad14e4c6d5], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data);
      static PyGetSetDef t_FractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_FractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_FractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_FractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionFormat__methods_[] = {
        DECLARE_METHOD(t_FractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_FractionFormat, formatFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionFormat)[] = {
        { Py_tp_methods, t_FractionFormat__methods_ },
        { Py_tp_init, (void *) t_FractionFormat_init_ },
        { Py_tp_getset, t_FractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(FractionFormat, t_FractionFormat, FractionFormat);

      void t_FractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionFormat), &PY_TYPE_DEF(FractionFormat), module, "FractionFormat", 0);
      }

      void t_FractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "class_", make_descriptor(FractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "wrapfn_", make_descriptor(t_FractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionFormat::initializeClass, 1)))
          return NULL;
        return t_FractionFormat::wrap_Object(FractionFormat(((t_FractionFormat *) arg)->object.this$));
      }
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat object((jobject) NULL);

            INT_CALL(object = FractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = FractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FractionFormat(a0, a1));
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

      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::formatFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatFraction", arg);
        return NULL;
      }

      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_FractionFormat::wrap_Object(value);
      }

      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_FractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventHandler::class$ = NULL;
          jmethodID *EventHandler::mids$ = NULL;
          bool EventHandler::live$ = false;

          jclass EventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_2e343080aa0c9516] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_7a28fd3585a5b57c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action EventHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
          }

          void EventHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2e343080aa0c9516], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_7a28fd3585a5b57c], a0.this$, a1.this$));
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
          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args);

          static PyMethodDef t_EventHandler__methods_[] = {
            DECLARE_METHOD(t_EventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventHandler)[] = {
            { Py_tp_methods, t_EventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventHandler, t_EventHandler, EventHandler);

          void t_EventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventHandler), &PY_TYPE_DEF(EventHandler), module, "EventHandler", 0);
          }

          void t_EventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "class_", make_descriptor(EventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "wrapfn_", make_descriptor(t_EventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventHandler::initializeClass, 1)))
              return NULL;
            return t_EventHandler::wrap_Object(EventHandler(((t_EventHandler *) arg)->object.this$));
          }
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
        }
      }
    }
  }
}
