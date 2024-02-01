#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *EquationsMapper::class$ = NULL;
      jmethodID *EquationsMapper::mids$ = NULL;
      bool EquationsMapper::live$ = false;

      jclass EquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/EquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_dc4fb3655ebdc470] = env->getMethodID(cls, "extractEquationData", "(I[D)[D");
          mids$[mid_getNumberOfEquations_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_d6ab429752e7c267] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_d2504f483b5abc99] = env->getMethodID(cls, "insertEquationData", "(I[D[D)V");
          mids$[mid_mapStateAndDerivative_0ef977b03acdbe00] = env->getMethodID(cls, "mapStateAndDerivative", "(D[D[D)Lorg/hipparchus/ode/ODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > EquationsMapper::extractEquationData(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractEquationData_dc4fb3655ebdc470], a0, a1.this$));
      }

      jint EquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_d6ab429752e7c267]);
      }

      jint EquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_d6ab429752e7c267]);
      }

      void EquationsMapper::insertEquationData(jint a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_d2504f483b5abc99], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative EquationsMapper::mapStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_0ef977b03acdbe00], a0, a1.this$, a2.this$));
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
      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data);
      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data);
      static PyGetSetDef t_EquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_EquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_EquationsMapper, totalDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquationsMapper__methods_[] = {
        DECLARE_METHOD(t_EquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquationsMapper)[] = {
        { Py_tp_methods, t_EquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EquationsMapper, t_EquationsMapper, EquationsMapper);

      void t_EquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(EquationsMapper), &PY_TYPE_DEF(EquationsMapper), module, "EquationsMapper", 0);
      }

      void t_EquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "class_", make_descriptor(EquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "wrapfn_", make_descriptor(t_EquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquationsMapper::initializeClass, 1)))
          return NULL;
        return t_EquationsMapper::wrap_Object(EquationsMapper(((t_EquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "I[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *FieldPVCoordinatesProvider::mids$ = NULL;
      bool FieldPVCoordinatesProvider::live$ = false;

      jclass FieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_bfce50434b755ecb] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_bfce50434b755ecb], a0.this$, a1.this$));
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
      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_FieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_FieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinatesProvider, t_FieldPVCoordinatesProvider, FieldPVCoordinatesProvider);
      PyObject *t_FieldPVCoordinatesProvider::wrap_Object(const FieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinatesProvider), &PY_TYPE_DEF(FieldPVCoordinatesProvider), module, "FieldPVCoordinatesProvider", 0);
      }

      void t_FieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "class_", make_descriptor(FieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_FieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinatesProvider::wrap_Object(FieldPVCoordinatesProvider(((t_FieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularRaDec::class$ = NULL;
        jmethodID *AngularRaDec::mids$ = NULL;
        bool AngularRaDec::live$ = false;
        ::java::lang::String *AngularRaDec::MEASUREMENT_TYPE = NULL;

        jclass AngularRaDec::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularRaDec");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a8f532d671f0ec66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_5996cdbecf4f0d06] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularRaDec::AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a8f532d671f0ec66, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularRaDec::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_5996cdbecf4f0d06], a0.this$));
        }

        ::org::orekit::frames::Frame AngularRaDec::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
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
        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args);
        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg);
        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self);
        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data);
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data);
        static PyGetSetDef t_AngularRaDec__fields_[] = {
          DECLARE_GET_FIELD(t_AngularRaDec, referenceFrame),
          DECLARE_GET_FIELD(t_AngularRaDec, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularRaDec__methods_[] = {
          DECLARE_METHOD(t_AngularRaDec, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularRaDec, getObservedLineOfSight, METH_O),
          DECLARE_METHOD(t_AngularRaDec, getReferenceFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularRaDec)[] = {
          { Py_tp_methods, t_AngularRaDec__methods_ },
          { Py_tp_init, (void *) t_AngularRaDec_init_ },
          { Py_tp_getset, t_AngularRaDec__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularRaDec)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularRaDec, t_AngularRaDec, AngularRaDec);
        PyObject *t_AngularRaDec::wrap_Object(const AngularRaDec& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularRaDec::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularRaDec::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularRaDec), &PY_TYPE_DEF(AngularRaDec), module, "AngularRaDec", 0);
        }

        void t_AngularRaDec::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "class_", make_descriptor(AngularRaDec::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "wrapfn_", make_descriptor(t_AngularRaDec::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularRaDec::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularRaDec::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularRaDec::initializeClass, 1)))
            return NULL;
          return t_AngularRaDec::wrap_Object(AngularRaDec(((t_AngularRaDec *) arg)->object.this$));
        }
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularRaDec::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          JArray< jdouble > a5((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          AngularRaDec object((jobject) NULL);

          if (!parseArgs(args, "kkk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = AngularRaDec(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }

        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanModel::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanModel::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_270f067ba2ecffc6] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_15d5094a30a75845] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_0c7d8b0df374bb31] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_4546a188365eb79d] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getNumberSelectedMeasurementDrivers_d6ab429752e7c267] = env->getMethodID(cls, "getNumberSelectedMeasurementDrivers", "()I");
            mids$[mid_getNumberSelectedOrbitalDrivers_d6ab429752e7c267] = env->getMethodID(cls, "getNumberSelectedOrbitalDrivers", "()I");
            mids$[mid_getNumberSelectedPropagationDrivers_d6ab429752e7c267] = env->getMethodID(cls, "getNumberSelectedPropagationDrivers", "()I");
            mids$[mid_getObserver_6e4d0b03328febe6] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_8e02540e91b649aa] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_70ac4e539761d234] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_72b846eb87f3af9a] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_32b51ab222e72e59], a0.this$, a1.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalUnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalUnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_270f067ba2ecffc6]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_15d5094a30a75845]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution SemiAnalyticalUnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_0c7d8b0df374bb31], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_4546a188365eb79d], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedMeasurementDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedMeasurementDrivers_d6ab429752e7c267]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedOrbitalDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedOrbitalDrivers_d6ab429752e7c267]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedPropagationDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedPropagationDrivers_d6ab429752e7c267]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalUnscentedKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_6e4d0b03328febe6]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::hipparchus::linear::RealVector > SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_8e02540e91b649aa], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79]));
        }

        void SemiAnalyticalUnscentedKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_70ac4e539761d234], a0.this$, a1.this$));
        }

        void SemiAnalyticalUnscentedKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_2002169216358a3a], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_72b846eb87f3af9a], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagator),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedMeasurementDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedOrbitalDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedPropagationDrivers),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedMeasurementDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedOrbitalDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedPropagationDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanModel, t_SemiAnalyticalUnscentedKalmanModel, SemiAnalyticalUnscentedKalmanModel);

        void t_SemiAnalyticalUnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanModel), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel), module, "SemiAnalyticalUnscentedKalmanModel", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanModel::wrap_Object(SemiAnalyticalUnscentedKalmanModel(((t_SemiAnalyticalUnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Minus::Minus() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Minus::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Minus::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/orekit/data/ClasspathCrawler.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ClasspathCrawler::class$ = NULL;
      jmethodID *ClasspathCrawler::mids$ = NULL;
      bool ClasspathCrawler::live$ = false;

      jclass ClasspathCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ClasspathCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0b0682dc773e1ff1] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;)V");
          mids$[mid_init$_a5e9406d5aff2e02] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ClasspathCrawler::ClasspathCrawler(const JArray< ::java::lang::String > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b0682dc773e1ff1, a0.this$)) {}

      ClasspathCrawler::ClasspathCrawler(const ::java::lang::ClassLoader & a0, const JArray< ::java::lang::String > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5e9406d5aff2e02, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ClasspathCrawler__methods_[] = {
        DECLARE_METHOD(t_ClasspathCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ClasspathCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ClasspathCrawler)[] = {
        { Py_tp_methods, t_ClasspathCrawler__methods_ },
        { Py_tp_init, (void *) t_ClasspathCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ClasspathCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ClasspathCrawler, t_ClasspathCrawler, ClasspathCrawler);

      void t_ClasspathCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ClasspathCrawler), &PY_TYPE_DEF(ClasspathCrawler), module, "ClasspathCrawler", 0);
      }

      void t_ClasspathCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "class_", make_descriptor(ClasspathCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "wrapfn_", make_descriptor(t_ClasspathCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ClasspathCrawler::initializeClass, 1)))
          return NULL;
        return t_ClasspathCrawler::wrap_Object(ClasspathCrawler(((t_ClasspathCrawler *) arg)->object.this$));
      }
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ClasspathCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "[s", &a0))
            {
              INT_CALL(object = ClasspathCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            JArray< ::java::lang::String > a1((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "k[s", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ClasspathCrawler(a0, a1));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolver::class$ = NULL;
          jmethodID *IntegerLeastSquareSolver::mids$ = NULL;
          bool IntegerLeastSquareSolver::live$ = false;

          jclass IntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_solveILS_c875ff52e2e6fa6c] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > IntegerLeastSquareSolver::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_c875ff52e2e6fa6c], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolver, t_IntegerLeastSquareSolver, IntegerLeastSquareSolver);

          void t_IntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolver), &PY_TYPE_DEF(IntegerLeastSquareSolver), module, "IntegerLeastSquareSolver", 0);
          }

          void t_IntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "class_", make_descriptor(IntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolver::wrap_Object(IntegerLeastSquareSolver(((t_IntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoading::class$ = NULL;
          jmethodID *OceanLoading::mids$ = NULL;
          bool OceanLoading::live$ = false;

          jclass OceanLoading::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoading");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6901ef30d5a1a8de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;)V");
              mids$[mid_displacement_44ddfc2adc2cc28a] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoading::OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6901ef30d5a1a8de, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanLoading::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
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
          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args);

          static PyMethodDef t_OceanLoading__methods_[] = {
            DECLARE_METHOD(t_OceanLoading, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoading)[] = {
            { Py_tp_methods, t_OceanLoading__methods_ },
            { Py_tp_init, (void *) t_OceanLoading_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoading)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoading, t_OceanLoading, OceanLoading);

          void t_OceanLoading::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoading), &PY_TYPE_DEF(OceanLoading), module, "OceanLoading", 0);
          }

          void t_OceanLoading::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "class_", make_descriptor(OceanLoading::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "wrapfn_", make_descriptor(t_OceanLoading::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoading::initializeClass, 1)))
              return NULL;
            return t_OceanLoading::wrap_Object(OceanLoading(((t_OceanLoading *) arg)->object.this$));
          }
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoading::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients a1((jobject) NULL);
            OceanLoading object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::displacement::OceanLoadingCoefficients::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OceanLoading(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem$Evaluation::class$ = NULL;
            jmethodID *LeastSquaresProblem$Evaluation::mids$ = NULL;
            bool LeastSquaresProblem$Evaluation::live$ = false;

            jclass LeastSquaresProblem$Evaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getChiSquare_9981f74b2d109da6] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_9981f74b2d109da6] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_d5a7c13c36e5009c] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getPoint_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPoint", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getRMS_9981f74b2d109da6] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_ce4c02d583456bc9] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getResiduals_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getResiduals", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getSigma_2fd46ead8ae05f47] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble LeastSquaresProblem$Evaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_9981f74b2d109da6]);
            }

            jdouble LeastSquaresProblem$Evaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_9981f74b2d109da6]);
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_d5a7c13c36e5009c], a0));
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getJacobian() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getJacobian_b2eebabce70526d8]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getPoint() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPoint_92d7e8d8d3f1dfcf]));
            }

            jdouble LeastSquaresProblem$Evaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_9981f74b2d109da6]);
            }

            jdouble LeastSquaresProblem$Evaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_ce4c02d583456bc9], a0);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getResiduals() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResiduals_92d7e8d8d3f1dfcf]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_2fd46ead8ae05f47], a0));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem$Evaluation__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, chiSquare),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, cost),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, jacobian),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, point),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, rMS),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, residuals),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem$Evaluation__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getJacobian, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getPoint, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getResiduals, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem$Evaluation)[] = {
              { Py_tp_methods, t_LeastSquaresProblem$Evaluation__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem$Evaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem$Evaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem$Evaluation, t_LeastSquaresProblem$Evaluation, LeastSquaresProblem$Evaluation);

            void t_LeastSquaresProblem$Evaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem$Evaluation), &PY_TYPE_DEF(LeastSquaresProblem$Evaluation), module, "LeastSquaresProblem$Evaluation", 0);
            }

            void t_LeastSquaresProblem$Evaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "class_", make_descriptor(LeastSquaresProblem$Evaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "wrapfn_", make_descriptor(t_LeastSquaresProblem$Evaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem$Evaluation::wrap_Object(LeastSquaresProblem$Evaluation(((t_LeastSquaresProblem$Evaluation *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_build_1e0d37b52d091497] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_constant_f7de6915022fec9a] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getCompiler_cf2c785981ead135] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_4ecc6a9742a924fc] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/DSFactory$DSField;");
            mids$[mid_variable_d7e3d05a5f4188e8] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSFactory::DSFactory(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_1e0d37b52d091497], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_f7de6915022fec9a], a0));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler DSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_cf2c785981ead135]));
        }

        ::org::hipparchus::analysis::differentiation::DSFactory$DSField DSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory$DSField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_4ecc6a9742a924fc]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_d7e3d05a5f4188e8], a0, a1));
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
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CovarianceMethod::class$ = NULL;
            jmethodID *CovarianceMethod::mids$ = NULL;
            bool CovarianceMethod::live$ = false;
            CovarianceMethod *CovarianceMethod::CALCULATED = NULL;
            CovarianceMethod *CovarianceMethod::DEFAULT = NULL;

            jclass CovarianceMethod::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CovarianceMethod");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_16e961bbdd83a23c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_values_1790d1cbc96b611a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CALCULATED = new CovarianceMethod(env->getStaticObjectField(cls, "CALCULATED", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                DEFAULT = new CovarianceMethod(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CovarianceMethod CovarianceMethod::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CovarianceMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_16e961bbdd83a23c], a0.this$));
            }

            JArray< CovarianceMethod > CovarianceMethod::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CovarianceMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_1790d1cbc96b611a]));
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
            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args);
            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CovarianceMethod_values(PyTypeObject *type);
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data);
            static PyGetSetDef t_CovarianceMethod__fields_[] = {
              DECLARE_GET_FIELD(t_CovarianceMethod, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CovarianceMethod__methods_[] = {
              DECLARE_METHOD(t_CovarianceMethod, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, of_, METH_VARARGS),
              DECLARE_METHOD(t_CovarianceMethod, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CovarianceMethod)[] = {
              { Py_tp_methods, t_CovarianceMethod__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CovarianceMethod__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CovarianceMethod)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CovarianceMethod, t_CovarianceMethod, CovarianceMethod);
            PyObject *t_CovarianceMethod::wrap_Object(const CovarianceMethod& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CovarianceMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CovarianceMethod::install(PyObject *module)
            {
              installType(&PY_TYPE(CovarianceMethod), &PY_TYPE_DEF(CovarianceMethod), module, "CovarianceMethod", 0);
            }

            void t_CovarianceMethod::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "class_", make_descriptor(CovarianceMethod::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "wrapfn_", make_descriptor(t_CovarianceMethod::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "boxfn_", make_descriptor(boxObject));
              env->getClass(CovarianceMethod::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "CALCULATED", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::CALCULATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "DEFAULT", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::DEFAULT)));
            }

            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CovarianceMethod::initializeClass, 1)))
                return NULL;
              return t_CovarianceMethod::wrap_Object(CovarianceMethod(((t_CovarianceMethod *) arg)->object.this$));
            }
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CovarianceMethod::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CovarianceMethod result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::valueOf(a0));
                return t_CovarianceMethod::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CovarianceMethod_values(PyTypeObject *type)
            {
              JArray< CovarianceMethod > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::values());
              return JArray<jobject>(result.this$).wrap(t_CovarianceMethod::wrap_jobject);
            }
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
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

              ::java::lang::Class *OemWriter::class$ = NULL;
              jmethodID *OemWriter::mids$ = NULL;
              bool OemWriter::live$ = false;
              jdouble OemWriter::CCSDS_OEM_VERS = (jdouble) 0;
              ::java::lang::String *OemWriter::DEFAULT_FILE_NAME = NULL;
              jint OemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_803b88445e6f9607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_533c32dcfb2da579] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/odm/oem/OemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OEM_VERS = env->getStaticDoubleField(cls, "CCSDS_OEM_VERS");
                  DEFAULT_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_FILE_NAME", "Ljava/lang/String;"));
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemWriter::OemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_803b88445e6f9607, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args);
              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data);
              static PyGetSetDef t_OemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemWriter__methods_[] = {
                DECLARE_METHOD(t_OemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemWriter)[] = {
                { Py_tp_methods, t_OemWriter__methods_ },
                { Py_tp_init, (void *) t_OemWriter_init_ },
                { Py_tp_getset, t_OemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OemWriter, t_OemWriter, OemWriter);
              PyObject *t_OemWriter::wrap_Object(const OemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OemWriter), &PY_TYPE_DEF(OemWriter), module, "OemWriter", 0);
              }

              void t_OemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "class_", make_descriptor(OemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "wrapfn_", make_descriptor(t_OemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "CCSDS_OEM_VERS", make_descriptor(OemWriter::CCSDS_OEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "DEFAULT_FILE_NAME", make_descriptor(j2p(*OemWriter::DEFAULT_FILE_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "KVN_PADDING_WIDTH", make_descriptor(OemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemWriter::initializeClass, 1)))
                  return NULL;
                return t_OemWriter::wrap_Object(OemWriter(((t_OemWriter *) arg)->object.this$));
              }
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(Oem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data)
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
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EnablingPredicate::class$ = NULL;
        jmethodID *EnablingPredicate::mids$ = NULL;
        bool EnablingPredicate::live$ = false;

        jclass EnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_edfe3d9894da78a1] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean EnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_edfe3d9894da78a1], a0.this$, a1.this$, a2);
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
        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args);

        static PyMethodDef t_EnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_EnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnablingPredicate)[] = {
          { Py_tp_methods, t_EnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnablingPredicate, t_EnablingPredicate, EnablingPredicate);

        void t_EnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(EnablingPredicate), &PY_TYPE_DEF(EnablingPredicate), module, "EnablingPredicate", 0);
        }

        void t_EnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "class_", make_descriptor(EnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "wrapfn_", make_descriptor(t_EnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_EnablingPredicate::wrap_Object(EnablingPredicate(((t_EnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovarianceKey::class$ = NULL;
            jmethodID *XYZCovarianceKey::mids$ = NULL;
            bool XYZCovarianceKey::live$ = false;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::COMMENT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_THR = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CX_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Z = NULL;

            jclass XYZCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_a87bb454dde4bd0c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;)Z");
                mids$[mid_valueOf_43054325e87a84d7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");
                mids$[mid_values_06cd62e0ea3f3c49] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                COMMENT = new XYZCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_THR = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CX_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XYZCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_a87bb454dde4bd0c], a0.this$, a1.this$, a2.this$);
            }

            XYZCovarianceKey XYZCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XYZCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43054325e87a84d7], a0.this$));
            }

            JArray< XYZCovarianceKey > XYZCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XYZCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_06cd62e0ea3f3c49]));
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
            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data);
            static PyGetSetDef t_XYZCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_XYZCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_XYZCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovarianceKey)[] = {
              { Py_tp_methods, t_XYZCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XYZCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XYZCovarianceKey, t_XYZCovarianceKey, XYZCovarianceKey);
            PyObject *t_XYZCovarianceKey::wrap_Object(const XYZCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XYZCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XYZCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovarianceKey), &PY_TYPE_DEF(XYZCovarianceKey), module, "XYZCovarianceKey", 0);
            }

            void t_XYZCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "class_", make_descriptor(XYZCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "wrapfn_", make_descriptor(t_XYZCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XYZCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "COMMENT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_THR", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CX_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Z)));
            }

            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_XYZCovarianceKey::wrap_Object(XYZCovarianceKey(((t_XYZCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XYZCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::valueOf(a0));
                return t_XYZCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type)
            {
              JArray< XYZCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_XYZCovarianceKey::wrap_jobject);
            }
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataKey::class$ = NULL;
            jmethodID *AdmCommonMetadataKey::mids$ = NULL;
            bool AdmCommonMetadataKey::live$ = false;
            AdmCommonMetadataKey *AdmCommonMetadataKey::OBJECT_ID = NULL;

            jclass AdmCommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f4d574d3ad330d8c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_002dab43785beb69] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");
                mids$[mid_values_37498d701d9c1477] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_ID = new AdmCommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmCommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f4d574d3ad330d8c], a0.this$, a1.this$, a2.this$);
            }

            AdmCommonMetadataKey AdmCommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmCommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_002dab43785beb69], a0.this$));
            }

            JArray< AdmCommonMetadataKey > AdmCommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmCommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_37498d701d9c1477]));
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
            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data);
            static PyGetSetDef t_AdmCommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmCommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmCommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataKey)[] = {
              { Py_tp_methods, t_AdmCommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmCommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataKey, t_AdmCommonMetadataKey, AdmCommonMetadataKey);
            PyObject *t_AdmCommonMetadataKey::wrap_Object(const AdmCommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmCommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmCommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataKey), &PY_TYPE_DEF(AdmCommonMetadataKey), module, "AdmCommonMetadataKey", 0);
            }

            void t_AdmCommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "class_", make_descriptor(AdmCommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "wrapfn_", make_descriptor(t_AdmCommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmCommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "OBJECT_ID", make_descriptor(t_AdmCommonMetadataKey::wrap_Object(*AdmCommonMetadataKey::OBJECT_ID)));
            }

            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataKey::wrap_Object(AdmCommonMetadataKey(((t_AdmCommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmCommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::valueOf(a0));
                return t_AdmCommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmCommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmCommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data)
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
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *NumericalPropagator::class$ = NULL;
        jmethodID *NumericalPropagator::mids$ = NULL;
        bool NumericalPropagator::live$ = false;

        jclass NumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/NumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c17d99cd56eae8b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
            mids$[mid_init$_76eafa66595c190d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_33ce7dbdc1ed7751] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_ff7cb6c242604316] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_b35db77cae58639e] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setOrbitType_faf186fbb93ad060] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_266be23fd67cbce4] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_14229beb23f11c5c] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/utils/AbsolutePVCoordinates;)[[D");
            mids$[mid_tolerances_f8917b89fe721e6e] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_dd7cd94dd65320be] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_setUpStmAndJacobianGenerators_ff7cb6c242604316] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_beforeIntegration_14deaae988292d42] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_createMapper_5f8935bd082b8966] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_97764934e3fe735c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_c17d99cd56eae8b6, a0.this$)) {}

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_76eafa66595c190d, a0.this$, a1.this$)) {}

        void NumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_33ce7dbdc1ed7751], a0.this$);
        }

        ::java::util::List NumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
        }

        ::org::orekit::orbits::OrbitType NumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates NumericalPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType NumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        void NumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_ff7cb6c242604316]);
        }

        void NumericalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
        }

        void NumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_b35db77cae58639e], a0);
        }

        void NumericalPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_72b846eb87f3af9a], a0.this$);
        }

        void NumericalPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_1ad26e8c8c0cd65b], a0);
        }

        void NumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_faf186fbb93ad060], a0.this$);
        }

        void NumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_266be23fd67cbce4], a0.this$);
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::utils::AbsolutePVCoordinates & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_14229beb23f11c5c], a0, a1.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_f8917b89fe721e6e], a0, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_dd7cd94dd65320be], a0, a1, a2.this$, a3.this$));
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
        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_NumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_NumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_NumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, positionAngleType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagator)[] = {
          { Py_tp_methods, t_NumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagator_init_ },
          { Py_tp_getset, t_NumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(NumericalPropagator, t_NumericalPropagator, NumericalPropagator);

        void t_NumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagator), &PY_TYPE_DEF(NumericalPropagator), module, "NumericalPropagator", 0);
        }

        void t_NumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "class_", make_descriptor(NumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "wrapfn_", make_descriptor(t_NumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagator::wrap_Object(NumericalPropagator(((t_NumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
              {
                INT_CALL(object = NumericalPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NumericalPropagator(a0, a1));
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

        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args)
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::utils::AbsolutePVCoordinates a1((jobject) NULL);
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::Orbit a2((jobject) NULL);
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixFormat::class$ = NULL;
      jmethodID *RealMatrixFormat::mids$ = NULL;
      bool RealMatrixFormat::live$ = false;

      jclass RealMatrixFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_799a817065a795a1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_73dd2d7a47d6eb4e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_9a8c300d410b936f] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;)Ljava/lang/String;");
          mids$[mid_format_62e5a2ca96e58f23] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getColumnSeparator_d2c8eb4129821f0e] = env->getMethodID(cls, "getColumnSeparator", "()Ljava/lang/String;");
          mids$[mid_getFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealMatrixFormat_ba919a7e2a8d4dec] = env->getStaticMethodID(cls, "getRealMatrixFormat", "()Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRealMatrixFormat_15d47cc6f5e552e9] = env->getStaticMethodID(cls, "getRealMatrixFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRowPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getRowPrefix", "()Ljava/lang/String;");
          mids$[mid_getRowSeparator_d2c8eb4129821f0e] = env->getMethodID(cls, "getRowSeparator", "()Ljava/lang/String;");
          mids$[mid_getRowSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getRowSuffix", "()Ljava/lang/String;");
          mids$[mid_getSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_171665f57cb7cc4c] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_parse_0b70eda82915d4b5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrixFormat::RealMatrixFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_799a817065a795a1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::text::NumberFormat & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73dd2d7a47d6eb4e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::java::lang::String RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_9a8c300d410b936f], a0.this$));
      }

      ::java::lang::StringBuffer RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_62e5a2ca96e58f23], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealMatrixFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      ::java::lang::String RealMatrixFormat::getColumnSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getColumnSeparator_d2c8eb4129821f0e]));
      }

      ::java::text::NumberFormat RealMatrixFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_525709eb5c5b5ea6]));
      }

      ::java::lang::String RealMatrixFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_d2c8eb4129821f0e]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_ba919a7e2a8d4dec]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_15d47cc6f5e552e9], a0.this$));
      }

      ::java::lang::String RealMatrixFormat::getRowPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowPrefix_d2c8eb4129821f0e]));
      }

      ::java::lang::String RealMatrixFormat::getRowSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSeparator_d2c8eb4129821f0e]));
      }

      ::java::lang::String RealMatrixFormat::getRowSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSuffix_d2c8eb4129821f0e]));
      }

      ::java::lang::String RealMatrixFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_171665f57cb7cc4c], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_0b70eda82915d4b5], a0.this$, a1.this$));
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
      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data);
      static PyGetSetDef t_RealMatrixFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrixFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealMatrixFormat, columnSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, prefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, realMatrixFormat),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowPrefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSuffix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrixFormat__methods_[] = {
        DECLARE_METHOD(t_RealMatrixFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getColumnSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRealMatrixFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixFormat)[] = {
        { Py_tp_methods, t_RealMatrixFormat__methods_ },
        { Py_tp_init, (void *) t_RealMatrixFormat_init_ },
        { Py_tp_getset, t_RealMatrixFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixFormat, t_RealMatrixFormat, RealMatrixFormat);

      void t_RealMatrixFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixFormat), &PY_TYPE_DEF(RealMatrixFormat), module, "RealMatrixFormat", 0);
      }

      void t_RealMatrixFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "class_", make_descriptor(RealMatrixFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "wrapfn_", make_descriptor(t_RealMatrixFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixFormat::initializeClass, 1)))
          return NULL;
        return t_RealMatrixFormat::wrap_Object(RealMatrixFormat(((t_RealMatrixFormat *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat object((jobject) NULL);

            INT_CALL(object = RealMatrixFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealMatrixFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            ::java::text::NumberFormat a6((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getColumnSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat());
            return t_RealMatrixFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealMatrixFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat(a0));
              return t_RealMatrixFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealMatrixFormat", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getColumnSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data)
      {
        RealMatrixFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealMatrixFormat());
        return t_RealMatrixFormat::wrap_Object(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSuffix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Attitude::class$ = NULL;
      jmethodID *Attitude::mids$ = NULL;
      bool Attitude::live$ = false;

      jclass Attitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Attitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3afccda4601b8f6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_015c89765fe30b90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_aa1099d6021eb7ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOrientation_f61c26acc5bceebd] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSpin_032312bdeb3f2f93] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_c569d6a6dc30b75c] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_bfb6cce037814112] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Attitude::Attitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3afccda4601b8f6c, a0.this$, a1.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_015c89765fe30b90, a0.this$, a1.this$, a2.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa1099d6021eb7ff, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate Attitude::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      ::org::orekit::utils::TimeStampedAngularCoordinates Attitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_f61c26acc5bceebd]));
      }

      ::org::orekit::frames::Frame Attitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Attitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_4d68cff5f6e4403a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSpin_032312bdeb3f2f93]));
      }

      Attitude Attitude::shiftedBy(jdouble a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_c569d6a6dc30b75c], a0));
      }

      Attitude Attitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_bfb6cce037814112], a0.this$));
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
      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Attitude_getDate(t_Attitude *self);
      static PyObject *t_Attitude_getOrientation(t_Attitude *self);
      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self);
      static PyObject *t_Attitude_getRotation(t_Attitude *self);
      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self);
      static PyObject *t_Attitude_getSpin(t_Attitude *self);
      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data);
      static PyGetSetDef t_Attitude__fields_[] = {
        DECLARE_GET_FIELD(t_Attitude, date),
        DECLARE_GET_FIELD(t_Attitude, orientation),
        DECLARE_GET_FIELD(t_Attitude, referenceFrame),
        DECLARE_GET_FIELD(t_Attitude, rotation),
        DECLARE_GET_FIELD(t_Attitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_Attitude, spin),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Attitude__methods_[] = {
        DECLARE_METHOD(t_Attitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, shiftedBy, METH_O),
        DECLARE_METHOD(t_Attitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Attitude)[] = {
        { Py_tp_methods, t_Attitude__methods_ },
        { Py_tp_init, (void *) t_Attitude_init_ },
        { Py_tp_getset, t_Attitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Attitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Attitude, t_Attitude, Attitude);

      void t_Attitude::install(PyObject *module)
      {
        installType(&PY_TYPE(Attitude), &PY_TYPE_DEF(Attitude), module, "Attitude", 0);
      }

      void t_Attitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "class_", make_descriptor(Attitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "wrapfn_", make_descriptor(t_Attitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Attitude::initializeClass, 1)))
          return NULL;
        return t_Attitude::wrap_Object(Attitude(((t_Attitude *) arg)->object.this$));
      }
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Attitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Attitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Attitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Attitude(a0, a1, a2, a3, a4));
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

      static PyObject *t_Attitude_getDate(t_Attitude *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Attitude_getOrientation(t_Attitude *self)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotation(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_getSpin(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg)
      {
        jdouble a0;
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }

      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowFieldMatrix::class$ = NULL;
      jmethodID *Array2DRowFieldMatrix::mids$ = NULL;
      bool Array2DRowFieldMatrix::live$ = false;

      jclass Array2DRowFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_79693579cf1d6b54] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_ab57da19aa96755a] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_eb6f5cf36a8e5529] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_8421b8da04368402] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_7aeac298fa801850] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_f05cf4c9bfd67964] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_51bcd4a8a90d8d6b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_addToEntry_8de38856a6ebea36] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_02883dbbe5db44ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_71a6a4df501a3e03] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_5d4bb4c2b3c3b853] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDataRef_5d4bb4c2b3c3b853] = env->getMethodID(cls, "getDataRef", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a81b5a6b0760a7e3] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_9410bfc023ff0ee6] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_1acf4e5d8c70f8c1] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_51bcd4a8a90d8d6b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_multiplyEntry_8de38856a6ebea36] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_9d44fdd5d20d82b4] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyTransposed_b180f987191970ad] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_da4e13f241d172b2] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_da4e13f241d172b2] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_setEntry_8de38856a6ebea36] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_1d7c60cf27d9f179] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubMatrix_24d277c6faa30a04] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_51bcd4a8a90d8d6b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_transposeMultiply_9d44fdd5d20d82b4] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_b180f987191970ad] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_718adedab84e4562] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_718adedab84e4562] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_79693579cf1d6b54, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ab57da19aa96755a, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_eb6f5cf36a8e5529, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_8421b8da04368402, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_7aeac298fa801850, a0.this$, a1)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1, jboolean a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_f05cf4c9bfd67964, a0.this$, a1.this$, a2)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

      Array2DRowFieldMatrix Array2DRowFieldMatrix::add(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_51bcd4a8a90d8d6b], a0.this$));
      }

      void Array2DRowFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_71a6a4df501a3e03], a0, a1));
      }

      jint Array2DRowFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_5d4bb4c2b3c3b853]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getDataRef() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getDataRef_5d4bb4c2b3c3b853]));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a81b5a6b0760a7e3], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_9410bfc023ff0ee6], a0));
      }

      jint Array2DRowFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1acf4e5d8c70f8c1], a0, a1, a2, a3));
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::multiply(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_51bcd4a8a90d8d6b], a0.this$));
      }

      void Array2DRowFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_9d44fdd5d20d82b4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b180f987191970ad], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_da4e13f241d172b2], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_da4e13f241d172b2], a0.this$));
      }

      void Array2DRowFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      void Array2DRowFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_1d7c60cf27d9f179], a0, a1.this$);
      }

      void Array2DRowFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_24d277c6faa30a04], a0.this$, a1, a2);
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::subtract(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_51bcd4a8a90d8d6b], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_9d44fdd5d20d82b4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b180f987191970ad], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args);
      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self);
      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowFieldMatrix)[] = {
        { Py_tp_methods, t_Array2DRowFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowFieldMatrix_init_ },
        { Py_tp_getset, t_Array2DRowFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowFieldMatrix, t_Array2DRowFieldMatrix, Array2DRowFieldMatrix);
      PyObject *t_Array2DRowFieldMatrix::wrap_Object(const Array2DRowFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Array2DRowFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Array2DRowFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowFieldMatrix), &PY_TYPE_DEF(Array2DRowFieldMatrix), module, "Array2DRowFieldMatrix", 0);
      }

      void t_Array2DRowFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "class_", make_descriptor(Array2DRowFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "wrapfn_", make_descriptor(t_Array2DRowFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowFieldMatrix::wrap_Object(Array2DRowFieldMatrix(((t_Array2DRowFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
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

      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *DoubleConsumer::class$ = NULL;
      jmethodID *DoubleConsumer::mids$ = NULL;
      bool DoubleConsumer::live$ = false;

      jclass DoubleConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/DoubleConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");
          mids$[mid_andThen_40d7dae8c198120d] = env->getMethodID(cls, "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DoubleConsumer::accept(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
      }

      DoubleConsumer DoubleConsumer::andThen(const DoubleConsumer & a0) const
      {
        return DoubleConsumer(env->callObjectMethod(this$, mids$[mid_andThen_40d7dae8c198120d], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg);
      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg);

      static PyMethodDef t_DoubleConsumer__methods_[] = {
        DECLARE_METHOD(t_DoubleConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, accept, METH_O),
        DECLARE_METHOD(t_DoubleConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleConsumer)[] = {
        { Py_tp_methods, t_DoubleConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleConsumer, t_DoubleConsumer, DoubleConsumer);

      void t_DoubleConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleConsumer), &PY_TYPE_DEF(DoubleConsumer), module, "DoubleConsumer", 0);
      }

      void t_DoubleConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "class_", make_descriptor(DoubleConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "wrapfn_", make_descriptor(t_DoubleConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleConsumer::initializeClass, 1)))
          return NULL;
        return t_DoubleConsumer::wrap_Object(DoubleConsumer(((t_DoubleConsumer *) arg)->object.this$));
      }
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg)
      {
        DoubleConsumer a0((jobject) NULL);
        DoubleConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_DoubleConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataFilter::class$ = NULL;
      jmethodID *PythonDataFilter::mids$ = NULL;
      bool PythonDataFilter::live$ = false;

      jclass PythonDataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataFilter::PythonDataFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonDataFilter::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonDataFilter::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonDataFilter::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self);
      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args);
      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data);
      static PyGetSetDef t_PythonDataFilter__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataFilter, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataFilter__methods_[] = {
        DECLARE_METHOD(t_PythonDataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataFilter, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataFilter)[] = {
        { Py_tp_methods, t_PythonDataFilter__methods_ },
        { Py_tp_init, (void *) t_PythonDataFilter_init_ },
        { Py_tp_getset, t_PythonDataFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataFilter, t_PythonDataFilter, PythonDataFilter);

      void t_PythonDataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataFilter), &PY_TYPE_DEF(PythonDataFilter), module, "PythonDataFilter", 1);
      }

      void t_PythonDataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "class_", make_descriptor(PythonDataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "wrapfn_", make_descriptor(t_PythonDataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataFilter::initializeClass);
        JNINativeMethod methods[] = {
          { "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;", (void *) t_PythonDataFilter_filter0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataFilter_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataFilter::initializeClass, 1)))
          return NULL;
        return t_PythonDataFilter::wrap_Object(PythonDataFilter(((t_PythonDataFilter *) arg)->object.this$));
      }
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds)
      {
        PythonDataFilter object((jobject) NULL);

        INT_CALL(object = PythonDataFilter());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::DataSource value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
        PyObject *result = PyObject_CallMethod(obj, "filter", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::DataSource::initializeClass, &value))
        {
          throwTypeError("filter", result);
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

      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2::mids$ = NULL;
        bool FieldUnivariateDerivative2::live$ = false;

        jclass FieldUnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d464f1870c2dee26] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_f9ea60a8dc2d69fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_4354ae7624bd9782] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acos_4354ae7624bd9782] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acosh_4354ae7624bd9782] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_db283754f165d955] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_4f74e0f57811e3fb] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_4f9cdf8f86985fad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asin_4354ae7624bd9782] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asinh_4354ae7624bd9782] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan_4354ae7624bd9782] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan2_db283754f165d955] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atanh_4354ae7624bd9782] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cbrt_4354ae7624bd9782] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ceil_4354ae7624bd9782] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_compose_3135193dd23a5a05] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_db283754f165d955] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_4f74e0f57811e3fb] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_4f9cdf8f86985fad] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cos_4354ae7624bd9782] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cosh_4354ae7624bd9782] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_db283754f165d955] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_4f74e0f57811e3fb] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_4f9cdf8f86985fad] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_4354ae7624bd9782] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_expm1_4354ae7624bd9782] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_floor_4354ae7624bd9782] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getDerivative_dfcf702144fd7bc1] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_b6828db084af3a65] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_08d37e3f77b7239d] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_4354ae7624bd9782] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_08d37e3f77b7239d] = env->getMethodID(cls, "getSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_577649682b9910c1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_db283754f165d955] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_95658a9fe5ae4758] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_8212ed6c2f6c3478] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_5cc822feca9d6afa] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_d7343cac3281f252] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_6a3c0ff58461c619] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_fd9fc6f15f77b205] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_91e2a28a1fda626c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_a7170c2a89a07dce] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_512cdf1e63c7d585] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_7e5914f45f163ae8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log_4354ae7624bd9782] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log10_4354ae7624bd9782] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log1p_4354ae7624bd9782] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_db283754f165d955] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_4f74e0f57811e3fb] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_1556512fd2e3e257] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_4f9cdf8f86985fad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_negate_4354ae7624bd9782] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_newInstance_4f74e0f57811e3fb] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_db283754f165d955] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_4f74e0f57811e3fb] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_1556512fd2e3e257] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_2f18e0290464ea64] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_reciprocal_4354ae7624bd9782] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_db283754f165d955] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_4f74e0f57811e3fb] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_4f9cdf8f86985fad] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rint_4354ae7624bd9782] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rootN_1556512fd2e3e257] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_scalb_1556512fd2e3e257] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sign_4354ae7624bd9782] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sin_4354ae7624bd9782] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_4354ae7624bd9782] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_4354ae7624bd9782] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_db283754f165d955] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_4f74e0f57811e3fb] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_4f9cdf8f86985fad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tan_4354ae7624bd9782] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tanh_4354ae7624bd9782] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_taylor_e3d0ff3c0584eadf] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_a3b854adede8eaaa] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_4354ae7624bd9782] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_b363d6ebd90353bf] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_4354ae7624bd9782] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ulp_4354ae7624bd9782] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d464f1870c2dee26, a0.this$)) {}

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_f9ea60a8dc2d69fb, a0.this$, a1.this$, a2.this$)) {}

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::abs() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_4f9cdf8f86985fad], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan2(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cbrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ceil() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_3135193dd23a5a05], a0.this$, a1.this$, a2.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_4f9cdf8f86985fad], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_4f9cdf8f86985fad], a0.this$));
        }

        jboolean FieldUnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::exp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::expm1() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::floor() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_4354ae7624bd9782]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_dfcf702144fd7bc1], a0));
        }

        jint FieldUnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field FieldUnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_b6828db084af3a65]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_08d37e3f77b7239d]));
        }

        jint FieldUnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::getPi() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_4354ae7624bd9782]));
        }

        jdouble FieldUnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getSecondDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSecondDerivative_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative2::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_577649682b9910c1]));
        }

        jint FieldUnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::hypot(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_95658a9fe5ae4758], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_8212ed6c2f6c3478], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< FieldUnivariateDerivative2 > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_5cc822feca9d6afa], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_d7343cac3281f252], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_6a3c0ff58461c619], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_fd9fc6f15f77b205], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_91e2a28a1fda626c], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative2 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative2 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_a7170c2a89a07dce], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5, const FieldUnivariateDerivative2 & a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_512cdf1e63c7d585], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5, jdouble a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_7e5914f45f163ae8], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log10() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log1p() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_1556512fd2e3e257], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_4f9cdf8f86985fad], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::negate() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_1556512fd2e3e257], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0, const FieldUnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_2f18e0290464ea64], a0, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::reciprocal() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_4f9cdf8f86985fad], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rint() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rootN(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_1556512fd2e3e257], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::scalb(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_1556512fd2e3e257], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sign() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_4354ae7624bd9782]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_4354ae7624bd9782]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sqrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_db283754f165d955], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_4f74e0f57811e3fb], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_4f9cdf8f86985fad], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_4354ae7624bd9782]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_e3d0ff3c0584eadf], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_a3b854adede8eaaa], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toDegrees() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_4354ae7624bd9782]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_b363d6ebd90353bf]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toRadians() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_4354ae7624bd9782]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ulp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_4354ae7624bd9782]));
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
        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative2_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2, t_FieldUnivariateDerivative2, FieldUnivariateDerivative2);
        PyObject *t_FieldUnivariateDerivative2::wrap_Object(const FieldUnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2), &PY_TYPE_DEF(FieldUnivariateDerivative2), module, "FieldUnivariateDerivative2", 0);
        }

        void t_FieldUnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "class_", make_descriptor(FieldUnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2::wrap_Object(FieldUnivariateDerivative2(((t_FieldUnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0, a1, a2));
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

        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1, a2));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &p6, t_FieldUnivariateDerivative2::parameters_, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2::pow(a0, a1));
            return t_FieldUnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data)
        {
          FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TypeSvMessage::class$ = NULL;
          jmethodID *TypeSvMessage::mids$ = NULL;
          bool TypeSvMessage::live$ = false;

          jclass TypeSvMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TypeSvMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationMessageType_d2c8eb4129821f0e] = env->getMethodID(cls, "getNavigationMessageType", "()Ljava/lang/String;");
              mids$[mid_getPrn_d6ab429752e7c267] = env->getMethodID(cls, "getPrn", "()I");
              mids$[mid_getSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String TypeSvMessage::getNavigationMessageType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNavigationMessageType_d2c8eb4129821f0e]));
          }

          jint TypeSvMessage::getPrn() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrn_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::SatelliteSystem TypeSvMessage::getSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_fb0bd27fcc3ba9fc]));
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
          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data);
          static PyGetSetDef t_TypeSvMessage__fields_[] = {
            DECLARE_GET_FIELD(t_TypeSvMessage, navigationMessageType),
            DECLARE_GET_FIELD(t_TypeSvMessage, prn),
            DECLARE_GET_FIELD(t_TypeSvMessage, system),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TypeSvMessage__methods_[] = {
            DECLARE_METHOD(t_TypeSvMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, getNavigationMessageType, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getPrn, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TypeSvMessage)[] = {
            { Py_tp_methods, t_TypeSvMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TypeSvMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TypeSvMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TypeSvMessage, t_TypeSvMessage, TypeSvMessage);

          void t_TypeSvMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(TypeSvMessage), &PY_TYPE_DEF(TypeSvMessage), module, "TypeSvMessage", 0);
          }

          void t_TypeSvMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "class_", make_descriptor(TypeSvMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "wrapfn_", make_descriptor(t_TypeSvMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TypeSvMessage::initializeClass, 1)))
              return NULL;
            return t_TypeSvMessage::wrap_Object(TypeSvMessage(((t_TypeSvMessage *) arg)->object.this$));
          }
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TypeSvMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationMessageType());
            return j2p(result);
          }

          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationMessageType());
            return j2p(value);
          }

          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeStampedCache::class$ = NULL;
      jmethodID *FieldTimeStampedCache::mids$ = NULL;
      bool FieldTimeStampedCache::live$ = false;

      jclass FieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_eb7a4124bb25f40f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_eb7a4124bb25f40f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_9de8811782a2be8a] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getNeighborsSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_eb7a4124bb25f40f]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_eb7a4124bb25f40f]));
      }

      ::java::util::stream::Stream FieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_9de8811782a2be8a], a0.this$));
      }

      jint FieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_d6ab429752e7c267]);
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
      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_FieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedCache)[] = {
        { Py_tp_methods, t_FieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedCache, t_FieldTimeStampedCache, FieldTimeStampedCache);
      PyObject *t_FieldTimeStampedCache::wrap_Object(const FieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedCache), &PY_TYPE_DEF(FieldTimeStampedCache), module, "FieldTimeStampedCache", 0);
      }

      void t_FieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "class_", make_descriptor(FieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "wrapfn_", make_descriptor(t_FieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedCache::wrap_Object(FieldTimeStampedCache(((t_FieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinates::class$ = NULL;
      jmethodID *AbsolutePVCoordinates::mids$ = NULL;
      bool AbsolutePVCoordinates::live$ = false;

      jclass AbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bf17706d61c7c060] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_ef9b4c9c65e8f64e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_f18c63b6a877017a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_73a746b7f0a60196] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b2f0b252237d4955] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7e4810973426bed8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_8a92b49de3c6f304] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_0903a30af23ba460] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_52ae6364f8ffb9fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_5015ac2efa5365ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_76634063992a70d7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_5996cdbecf4f0d06] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_7e13d9132ca7ef7d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_781ab98286dad7d5] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_bf17706d61c7c060, a0.this$, a1.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const AbsolutePVCoordinates & a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ef9b4c9c65e8f64e, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f18c63b6a877017a, a0.this$, a1, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_73a746b7f0a60196, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b2f0b252237d4955, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7e4810973426bed8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8a92b49de3c6f304, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0903a30af23ba460, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_52ae6364f8ffb9fd, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6, jdouble a7, const AbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5015ac2efa5365ae, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::frames::Frame AbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_674031698a428ce8]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_76634063992a70d7], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5996cdbecf4f0d06], a0.this$));
      }

      AbsolutePVCoordinates AbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7e13d9132ca7ef7d], a0));
      }

      ::org::orekit::utils::PVCoordinatesProvider AbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_781ab98286dad7d5]));
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
      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self);
      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data);
      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, pVCoordinates),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, toTaylorProvider, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinates, t_AbsolutePVCoordinates, AbsolutePVCoordinates);

      void t_AbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinates), &PY_TYPE_DEF(AbsolutePVCoordinates), module, "AbsolutePVCoordinates", 0);
      }

      void t_AbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "class_", make_descriptor(AbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "wrapfn_", make_descriptor(t_AbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinates::wrap_Object(AbsolutePVCoordinates(((t_AbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbsolutePVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            jdouble a7;
            AbsolutePVCoordinates a8((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args)
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
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsolutePVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toTaylorProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "toTaylorProvider", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSAlmanac::class$ = NULL;
            jmethodID *QZSSAlmanac::mids$ = NULL;
            bool QZSSAlmanac::live$ = false;

            jclass QZSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_d6ab429752e7c267] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_setHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSource_105e1eadb709d9ac] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSAlmanac::QZSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint QZSSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_d6ab429752e7c267]);
            }

            ::java::lang::String QZSSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_d2c8eb4129821f0e]));
            }

            void QZSSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_8fd427ab23829bf5], a0);
            }

            void QZSSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_105e1eadb709d9ac], a0.this$);
            }

            void QZSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_QZSSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, health),
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, source),
              DECLARE_SET_FIELD(t_QZSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_QZSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_QZSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSAlmanac)[] = {
              { Py_tp_methods, t_QZSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_QZSSAlmanac_init_ },
              { Py_tp_getset, t_QZSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(QZSSAlmanac, t_QZSSAlmanac, QZSSAlmanac);

            void t_QZSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSAlmanac), &PY_TYPE_DEF(QZSSAlmanac), module, "QZSSAlmanac", 0);
            }

            void t_QZSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "class_", make_descriptor(QZSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "wrapfn_", make_descriptor(t_QZSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_QZSSAlmanac::wrap_Object(QZSSAlmanac(((t_QZSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              QZSSAlmanac object((jobject) NULL);

              INT_CALL(object = QZSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg)
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

            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data)
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

            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Mean::class$ = NULL;
          jmethodID *Mean::mids$ = NULL;
          bool Mean::live$ = false;

          jclass Mean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Mean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_43fa94dba5c449e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");
              mids$[mid_aggregate_ecff28aa28da69ff] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Mean;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2b73b4dd9d42384f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Mean;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0b039b932db219bf] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Mean::Mean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Mean::Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_43fa94dba5c449e7, a0.this$)) {}

          void Mean::aggregate(const Mean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_ecff28aa28da69ff], a0.this$);
          }

          void Mean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Mean Mean::copy() const
          {
            return Mean(env->callObjectMethod(this$, mids$[mid_copy_2b73b4dd9d42384f]));
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0b039b932db219bf], a0.this$, a1.this$, a2, a3);
          }

          jlong Mean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Mean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Mean::increment(jdouble a0) const
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
          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg);
          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_get__n(t_Mean *self, void *data);
          static PyObject *t_Mean_get__result(t_Mean *self, void *data);
          static PyGetSetDef t_Mean__fields_[] = {
            DECLARE_GET_FIELD(t_Mean, n),
            DECLARE_GET_FIELD(t_Mean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mean__methods_[] = {
            DECLARE_METHOD(t_Mean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, aggregate, METH_O),
            DECLARE_METHOD(t_Mean, clear, METH_VARARGS),
            DECLARE_METHOD(t_Mean, copy, METH_VARARGS),
            DECLARE_METHOD(t_Mean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getN, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Mean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mean)[] = {
            { Py_tp_methods, t_Mean__methods_ },
            { Py_tp_init, (void *) t_Mean_init_ },
            { Py_tp_getset, t_Mean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Mean, t_Mean, Mean);

          void t_Mean::install(PyObject *module)
          {
            installType(&PY_TYPE(Mean), &PY_TYPE_DEF(Mean), module, "Mean", 0);
          }

          void t_Mean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "class_", make_descriptor(Mean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "wrapfn_", make_descriptor(t_Mean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mean::initializeClass, 1)))
              return NULL;
            return t_Mean::wrap_Object(Mean(((t_Mean *) arg)->object.this$));
          }
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Mean object((jobject) NULL);

                INT_CALL(object = Mean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::FirstMoment a0((jobject) NULL);
                Mean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::FirstMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Mean(a0));
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

          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg)
          {
            Mean a0((jobject) NULL);

            if (!parseArg(arg, "k", Mean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args)
          {
            Mean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Mean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Mean_get__n(t_Mean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Mean_get__result(t_Mean *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDetermination::class$ = NULL;
              jmethodID *AttitudeDetermination::mids$ = NULL;
              bool AttitudeDetermination::live$ = false;

              jclass AttitudeDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addSensor_f45fd26bf181d10b] = env->getMethodID(cls, "addSensor", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)V");
                  mids$[mid_getAttitudeStates_8cc80fd874f53bfc] = env->getMethodID(cls, "getAttitudeStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getCovarianceType_74687e132732dee9] = env->getMethodID(cls, "getCovarianceType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_503d51f00fe64860] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMethod_eff2d3fe8f228985] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/AdMethodType;");
                  mids$[mid_getNbStates_d6ab429752e7c267] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getPrevId_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRateProcessNoiseStdDev_9981f74b2d109da6] = env->getMethodID(cls, "getRateProcessNoiseStdDev", "()D");
                  mids$[mid_getRateStates_29a8b143d426bd15] = env->getMethodID(cls, "getRateStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_getSensorsUsed_d751c1a57012b438] = env->getMethodID(cls, "getSensorsUsed", "()Ljava/util/List;");
                  mids$[mid_getSigmaU_9981f74b2d109da6] = env->getMethodID(cls, "getSigmaU", "()D");
                  mids$[mid_getSigmaV_9981f74b2d109da6] = env->getMethodID(cls, "getSigmaV", "()D");
                  mids$[mid_getSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                  mids$[mid_setAttitudeStates_c9e4b2c8c6496634] = env->getMethodID(cls, "setAttitudeStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setCovarianceType_fceaef4829f7546b] = env->getMethodID(cls, "setCovarianceType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_setEulerRotSeq_d6989ad0241efe2c] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setId_105e1eadb709d9ac] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMethod_bfe4590503579790] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/AdMethodType;)V");
                  mids$[mid_setNbStates_8fd427ab23829bf5] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setPrevId_105e1eadb709d9ac] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRateProcessNoiseStdDev_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRateProcessNoiseStdDev", "(D)V");
                  mids$[mid_setRateStates_60a107afe829430c] = env->getMethodID(cls, "setRateStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_setSigmaU_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSigmaU", "(D)V");
                  mids$[mid_setSigmaV_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSigmaV", "(D)V");
                  mids$[mid_setSource_105e1eadb709d9ac] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDetermination::AttitudeDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              void AttitudeDetermination::addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addSensor_f45fd26bf181d10b], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeDetermination::getAttitudeStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_8cc80fd874f53bfc]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeDetermination::getCovarianceType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovarianceType_74687e132732dee9]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeDetermination::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeDetermination::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_503d51f00fe64860]));
              }

              ::java::lang::String AttitudeDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::definitions::AdMethodType AttitudeDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::AdMethodType(env->callObjectMethod(this$, mids$[mid_getMethod_eff2d3fe8f228985]));
              }

              jint AttitudeDetermination::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_d6ab429752e7c267]);
              }

              ::java::lang::String AttitudeDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_d2c8eb4129821f0e]));
              }

              jdouble AttitudeDetermination::getRateProcessNoiseStdDev() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRateProcessNoiseStdDev_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeDetermination::getRateStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateStates_29a8b143d426bd15]));
              }

              ::java::util::List AttitudeDetermination::getSensorsUsed() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensorsUsed_d751c1a57012b438]));
              }

              jdouble AttitudeDetermination::getSigmaU() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaU_9981f74b2d109da6]);
              }

              jdouble AttitudeDetermination::getSigmaV() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaV_9981f74b2d109da6]);
              }

              ::java::lang::String AttitudeDetermination::getSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_d2c8eb4129821f0e]));
              }

              void AttitudeDetermination::setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeStates_c9e4b2c8c6496634], a0.this$);
              }

              void AttitudeDetermination::setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovarianceType_fceaef4829f7546b], a0.this$);
              }

              void AttitudeDetermination::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_d6989ad0241efe2c], a0.this$);
              }

              void AttitudeDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_bfe4590503579790], a0.this$);
              }

              void AttitudeDetermination::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_8fd427ab23829bf5], a0);
              }

              void AttitudeDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeDetermination::setRateProcessNoiseStdDev(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateProcessNoiseStdDev_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeDetermination::setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateStates_60a107afe829430c], a0.this$);
              }

              void AttitudeDetermination::setSigmaU(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaU_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeDetermination::setSigmaV(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaV_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeDetermination::setSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSource_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            namespace acm {
              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args);
              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, attitudeStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, covarianceType),
                DECLARE_GET_FIELD(t_AttitudeDetermination, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, id),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, method),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, prevId),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateProcessNoiseStdDev),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateStates),
                DECLARE_GET_FIELD(t_AttitudeDetermination, sensorsUsed),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaU),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaV),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, source),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDetermination__methods_[] = {
                DECLARE_METHOD(t_AttitudeDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, addSensor, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getCovarianceType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateProcessNoiseStdDev, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSensorsUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaU, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaV, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSource, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, setAttitudeStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setCovarianceType, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateProcessNoiseStdDev, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaU, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaV, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSource, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDetermination)[] = {
                { Py_tp_methods, t_AttitudeDetermination__methods_ },
                { Py_tp_init, (void *) t_AttitudeDetermination_init_ },
                { Py_tp_getset, t_AttitudeDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDetermination, t_AttitudeDetermination, AttitudeDetermination);

              void t_AttitudeDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDetermination), &PY_TYPE_DEF(AttitudeDetermination), module, "AttitudeDetermination", 0);
              }

              void t_AttitudeDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "class_", make_descriptor(AttitudeDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "wrapfn_", make_descriptor(t_AttitudeDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDetermination::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDetermination::wrap_Object(AttitudeDetermination(((t_AttitudeDetermination *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDetermination object((jobject) NULL);

                INT_CALL(object = AttitudeDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addSensor(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addSensor", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeDeterminationSensor));
              }

              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaU());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaV());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSource());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovarianceType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovarianceType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_AdMethodType::parameters_))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRateProcessNoiseStdDev(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateProcessNoiseStdDev", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaU(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaU", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaV(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaV", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg)
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

              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovarianceType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covarianceType", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRateProcessNoiseStdDev(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateProcessNoiseStdDev", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaU());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaU(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaU", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaV());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaV(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaV", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSource());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeShiftable::class$ = NULL;
      jmethodID *TimeShiftable::mids$ = NULL;
      bool TimeShiftable::live$ = false;

      jclass TimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_d6202557abc1fed4] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeShiftable TimeShiftable::shiftedBy(jdouble a0) const
      {
        return TimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_d6202557abc1fed4], a0));
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
      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args);
      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg);
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data);
      static PyGetSetDef t_TimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_TimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeShiftable__methods_[] = {
        DECLARE_METHOD(t_TimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeShiftable)[] = {
        { Py_tp_methods, t_TimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeShiftable, t_TimeShiftable, TimeShiftable);
      PyObject *t_TimeShiftable::wrap_Object(const TimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeShiftable), &PY_TYPE_DEF(TimeShiftable), module, "TimeShiftable", 0);
      }

      void t_TimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "class_", make_descriptor(TimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "wrapfn_", make_descriptor(t_TimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeShiftable::initializeClass, 1)))
          return NULL;
        return t_TimeShiftable::wrap_Object(TimeShiftable(((t_TimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg)
      {
        jdouble a0;
        TimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_TimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
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
          mids$[mid_init$_1616713eb635c8bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;DD)V");
          mids$[mid_nextNormalizedDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StableRandomGenerator::StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1616713eb635c8bd, a0.this$, a1, a2)) {}

      jdouble StableRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_9981f74b2d109da6]);
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
#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFixedStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFixedStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFixedStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractFixedStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldStep_82f08cbfdc38e40a] = env->getMethodID(cls, "getFieldStep", "(Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkStep_1ad26e8c8c0cd65b] = env->getMethodID(cls, "checkStep", "(D)V");

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
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFixedStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFixedStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFixedStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFixedStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFixedStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFixedStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFixedStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractFixedStepFieldIntegratorBuilder, t_AbstractFixedStepFieldIntegratorBuilder, AbstractFixedStepFieldIntegratorBuilder);
        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(const AbstractFixedStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFixedStepFieldIntegratorBuilder), module, "AbstractFixedStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(AbstractFixedStepFieldIntegratorBuilder(((t_AbstractFixedStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *OrientedPoint::class$ = NULL;
          jmethodID *OrientedPoint::mids$ = NULL;
          bool OrientedPoint::live$ = false;

          jclass OrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/OrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_626e303a54ef8cd1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;ZD)V");
              mids$[mid_copySelf_94525402f1c54c7a] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/oned/OrientedPoint;");
              mids$[mid_emptyHyperplane_14c0810a4442ccfe] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_getLocation_dfd07178ba1b5f7f] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_54eca2a6b3ac81a2] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_eee3de00fe971136] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_revertSelf_ff7cb6c242604316] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_14c0810a4442ccfe] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_wholeSpace_12c95b7fca28f858] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OrientedPoint::OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_626e303a54ef8cd1, a0.this$, a1, a2)) {}

          OrientedPoint OrientedPoint::copySelf() const
          {
            return OrientedPoint(env->callObjectMethod(this$, mids$[mid_copySelf_94525402f1c54c7a]));
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_14c0810a4442ccfe]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D OrientedPoint::getLocation() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_getLocation_dfd07178ba1b5f7f]));
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble OrientedPoint::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          jboolean OrientedPoint::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_eee3de00fe971136]);
          }

          ::org::hipparchus::geometry::Point OrientedPoint::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
          }

          void OrientedPoint::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_ff7cb6c242604316]);
          }

          jboolean OrientedPoint::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_14c0810a4442ccfe]));
          }

          ::org::hipparchus::geometry::euclidean::oned::IntervalsSet OrientedPoint::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::IntervalsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_12c95b7fca28f858]));
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
        namespace oned {
          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args);
          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data);
          static PyGetSetDef t_OrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_OrientedPoint, direct),
            DECLARE_GET_FIELD(t_OrientedPoint, location),
            DECLARE_GET_FIELD(t_OrientedPoint, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrientedPoint__methods_[] = {
            DECLARE_METHOD(t_OrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_OrientedPoint, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, project, METH_O),
            DECLARE_METHOD(t_OrientedPoint, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_OrientedPoint, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrientedPoint)[] = {
            { Py_tp_methods, t_OrientedPoint__methods_ },
            { Py_tp_init, (void *) t_OrientedPoint_init_ },
            { Py_tp_getset, t_OrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrientedPoint)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OrientedPoint, t_OrientedPoint, OrientedPoint);

          void t_OrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(OrientedPoint), &PY_TYPE_DEF(OrientedPoint), module, "OrientedPoint", 0);
          }

          void t_OrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "class_", make_descriptor(OrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "wrapfn_", make_descriptor(t_OrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrientedPoint::initializeClass, 1)))
              return NULL;
            return t_OrientedPoint::wrap_Object(OrientedPoint(((t_OrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            OrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrientedPoint(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self)
          {
            OrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_OrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(value);
          }

          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
