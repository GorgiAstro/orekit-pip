#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetector::class$ = NULL;
        jmethodID *EventDetector::mids$ = NULL;
        bool EventDetector::live$ = false;

        jclass EventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0c96c441e92b6ffa] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_014eea600d2cdae8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_b74f83833fdad017] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EventDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler EventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0c96c441e92b6ffa]));
        }

        ::org::orekit::propagation::events::AdaptableInterval EventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_014eea600d2cdae8]));
        }

        jint EventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        jdouble EventDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_b74f83833fdad017]);
        }

        void EventDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg);
        static PyObject *t_EventDetector_getHandler(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self);
        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self);
        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args);
        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data);
        static PyGetSetDef t_EventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetector, handler),
          DECLARE_GET_FIELD(t_EventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_EventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_EventDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetector__methods_[] = {
          DECLARE_METHOD(t_EventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, g, METH_O),
          DECLARE_METHOD(t_EventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetector)[] = {
          { Py_tp_methods, t_EventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetector, t_EventDetector, EventDetector);

        void t_EventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetector), &PY_TYPE_DEF(EventDetector), module, "EventDetector", 0);
        }

        void t_EventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "class_", make_descriptor(EventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "wrapfn_", make_descriptor(t_EventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetector::initializeClass, 1)))
            return NULL;
          return t_EventDetector::wrap_Object(EventDetector(((t_EventDetector *) arg)->object.this$));
        }
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_EventDetector_getHandler(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args)
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

        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *FieldVector2D::class$ = NULL;
          jmethodID *FieldVector2D::mids$ = NULL;
          bool FieldVector2D::live$ = false;

          jclass FieldVector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/FieldVector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8b0f7facc8a6a46e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_e092330a3cb18383] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_8cd1d38fb24395b1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_06b31aba3d9cf9b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_9d0e66f5351834a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_e337ae7145f7989c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_11fbfd88fc245e05] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_b0a421f7dbeaed0f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_9037b64010093e7a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_b48a0e1d40bd38d0] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_df12b4a2f331dd1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_3f6696ed5fcdb619] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_75474ee55105ddaf] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_368e18fe3cf4d9c7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_380aba02f510ab2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_352489997a01ac70] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_31710f0c4eb8aef4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_d32f883885561b31] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_4b66fb4f5e817fcb] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_7d38e0441e838830] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_b55179abf30de838] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_angle_e99932ffda9acd7f] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_438cf30c67841384] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_4687371cee9ba77e] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_e99932ffda9acd7f] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_0f13ba5caeaa83d4] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b4f5e0115d69a846] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_14d7a7c35a3db44a] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_e99932ffda9acd7f] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_438cf30c67841384] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_4687371cee9ba77e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b4f5e0115d69a846] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_14d7a7c35a3db44a] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_e99932ffda9acd7f] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_438cf30c67841384] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_4687371cee9ba77e] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b4f5e0115d69a846] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_14d7a7c35a3db44a] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_e99932ffda9acd7f] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_4687371cee9ba77e] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_438cf30c67841384] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b4f5e0115d69a846] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_14d7a7c35a3db44a] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_e99932ffda9acd7f] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_438cf30c67841384] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_4687371cee9ba77e] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b4f5e0115d69a846] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_14d7a7c35a3db44a] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getMinusI_94a569d6057bef26] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getMinusJ_94a569d6057bef26] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNaN_94a569d6057bef26] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNegativeInfinity_94a569d6057bef26] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNorm_81520b552cb3fa26] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_81520b552cb3fa26] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_81520b552cb3fa26] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_81520b552cb3fa26] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_94a569d6057bef26] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPlusJ_94a569d6057bef26] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPositiveInfinity_94a569d6057bef26] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getX_81520b552cb3fa26] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_81520b552cb3fa26] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_94a569d6057bef26] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_6cf625db6271ad65] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_normalize_6cf625db6271ad65] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_orientation_67cdb0b92c146205] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_scalarMultiply_d397b0a1d0379da7] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_scalarMultiply_f3d6fa340bb755f8] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_352489997a01ac70] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_31710f0c4eb8aef4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_d32f883885561b31] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_4b66fb4f5e817fcb] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_7d38e0441e838830] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_b55179abf30de838] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_toArray_883be608cfc68c26] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector2D_9cb1572c1d4936cf] = env->getMethodID(cls, "toVector2D", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector2D::FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b0f7facc8a6a46e, a0.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e092330a3cb18383, a0, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cd1d38fb24395b1, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06b31aba3d9cf9b6, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d0e66f5351834a8, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e337ae7145f7989c, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11fbfd88fc245e05, a0, a1.this$, a2, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a421f7dbeaed0f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9037b64010093e7a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b48a0e1d40bd38d0, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df12b4a2f331dd1c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f6696ed5fcdb619, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5, jdouble a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75474ee55105ddaf, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_368e18fe3cf4d9c7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_380aba02f510ab2c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D FieldVector2D::add(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_352489997a01ac70], a0.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_31710f0c4eb8aef4], a0.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_d32f883885561b31], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_4b66fb4f5e817fcb], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_7d38e0441e838830], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_b55179abf30de838], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_438cf30c67841384], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_4687371cee9ba77e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const FieldVector2D & a0, const FieldVector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_0f13ba5caeaa83d4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_b4f5e0115d69a846], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_14d7a7c35a3db44a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_438cf30c67841384], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_4687371cee9ba77e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_b4f5e0115d69a846], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_14d7a7c35a3db44a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_438cf30c67841384], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_4687371cee9ba77e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_b4f5e0115d69a846], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_14d7a7c35a3db44a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_4687371cee9ba77e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_438cf30c67841384], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_b4f5e0115d69a846], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_14d7a7c35a3db44a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_e99932ffda9acd7f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_438cf30c67841384], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_4687371cee9ba77e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_b4f5e0115d69a846], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_14d7a7c35a3db44a], a0.this$));
          }

          jboolean FieldVector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          FieldVector2D FieldVector2D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_94a569d6057bef26], a0.this$));
          }

          FieldVector2D FieldVector2D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_94a569d6057bef26], a0.this$));
          }

          FieldVector2D FieldVector2D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_94a569d6057bef26], a0.this$));
          }

          FieldVector2D FieldVector2D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_94a569d6057bef26], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_81520b552cb3fa26]));
          }

          FieldVector2D FieldVector2D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_94a569d6057bef26], a0.this$));
          }

          FieldVector2D FieldVector2D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_94a569d6057bef26], a0.this$));
          }

          FieldVector2D FieldVector2D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_94a569d6057bef26], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_81520b552cb3fa26]));
          }

          FieldVector2D FieldVector2D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getZero_94a569d6057bef26], a0.this$));
          }

          jint FieldVector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean FieldVector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
          }

          jboolean FieldVector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          FieldVector2D FieldVector2D::negate() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_negate_6cf625db6271ad65]));
          }

          FieldVector2D FieldVector2D::normalize() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_normalize_6cf625db6271ad65]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::orientation(const FieldVector2D & a0, const FieldVector2D & a1, const FieldVector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_orientation_67cdb0b92c146205], a0.this$, a1.this$, a2.this$));
          }

          FieldVector2D FieldVector2D::scalarMultiply(jdouble a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_d397b0a1d0379da7], a0));
          }

          FieldVector2D FieldVector2D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f3d6fa340bb755f8], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_352489997a01ac70], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_31710f0c4eb8aef4], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_d32f883885561b31], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_4b66fb4f5e817fcb], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_7d38e0441e838830], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_b55179abf30de838], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector2D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_883be608cfc68c26]));
          }

          ::java::lang::String FieldVector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String FieldVector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D FieldVector2D::toVector2D() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toVector2D_9cb1572c1d4936cf]));
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
          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args);
          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data);
          static PyGetSetDef t_FieldVector2D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector2D, infinite),
            DECLARE_GET_FIELD(t_FieldVector2D, naN),
            DECLARE_GET_FIELD(t_FieldVector2D, norm),
            DECLARE_GET_FIELD(t_FieldVector2D, norm1),
            DECLARE_GET_FIELD(t_FieldVector2D, normInf),
            DECLARE_GET_FIELD(t_FieldVector2D, normSq),
            DECLARE_GET_FIELD(t_FieldVector2D, x),
            DECLARE_GET_FIELD(t_FieldVector2D, y),
            DECLARE_GET_FIELD(t_FieldVector2D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector2D__methods_[] = {
            DECLARE_METHOD(t_FieldVector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toVector2D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector2D)[] = {
            { Py_tp_methods, t_FieldVector2D__methods_ },
            { Py_tp_init, (void *) t_FieldVector2D_init_ },
            { Py_tp_getset, t_FieldVector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector2D, t_FieldVector2D, FieldVector2D);
          PyObject *t_FieldVector2D::wrap_Object(const FieldVector2D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector2D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector2D), &PY_TYPE_DEF(FieldVector2D), module, "FieldVector2D", 0);
          }

          void t_FieldVector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "class_", make_descriptor(FieldVector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "wrapfn_", make_descriptor(t_FieldVector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector2D::initializeClass, 1)))
              return NULL;
            return t_FieldVector2D::wrap_Object(FieldVector2D(((t_FieldVector2D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_, &a6, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a7((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNaN(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNegativeInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPositiveInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getZero(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector2D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::orientation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args)
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

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector2D());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPBasedTransformProvider::class$ = NULL;
      jmethodID *PythonEOPBasedTransformProvider::mids$ = NULL;
      bool PythonEOPBasedTransformProvider::live$ = false;

      jclass PythonEOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_f9d30be358d43685] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_8b3864a3bd1af1da] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPBasedTransformProvider::PythonEOPBasedTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonEOPBasedTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonEOPBasedTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonEOPBasedTransformProvider::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self);
      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_PythonEOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPBasedTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_PythonEOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonEOPBasedTransformProvider_init_ },
        { Py_tp_getset, t_PythonEOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPBasedTransformProvider, t_PythonEOPBasedTransformProvider, PythonEOPBasedTransformProvider);

      void t_PythonEOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPBasedTransformProvider), &PY_TYPE_DEF(PythonEOPBasedTransformProvider), module, "PythonEOPBasedTransformProvider", 1);
      }

      void t_PythonEOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "class_", make_descriptor(PythonEOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "wrapfn_", make_descriptor(t_PythonEOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPBasedTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;", (void *) t_PythonEOPBasedTransformProvider_getEOPHistory0 },
          { "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;", (void *) t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1 },
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonEOPBasedTransformProvider_getTransform2 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonEOPBasedTransformProvider_getTransform3 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPBasedTransformProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonEOPBasedTransformProvider::wrap_Object(PythonEOPBasedTransformProvider(((t_PythonEOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPBasedTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonEOPBasedTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPBasedTransformProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNonInterpolatingProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPBasedTransformProvider::initializeClass, &value))
        {
          throwTypeError("getNonInterpolatingProvider", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonAbstractGaussianContribution::class$ = NULL;
            jmethodID *PythonAbstractGaussianContribution::mids$ = NULL;
            bool PythonAbstractGaussianContribution::live$ = false;

            jclass PythonAbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d5ff3cc52c55df24] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/forces/ForceModel;D)V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getLLimits_9b6fd6b3a2b07f62] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_1abf2eee80dffc68] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGaussianContribution::PythonAbstractGaussianContribution(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::forces::ForceModel & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_d5ff3cc52c55df24, a0.this$, a1, a2.this$, a3)) {}

            void PythonAbstractGaussianContribution::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractGaussianContribution::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractGaussianContribution::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self);
            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_PythonAbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGaussianContribution, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGaussianContribution)[] = {
              { Py_tp_methods, t_PythonAbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGaussianContribution_init_ },
              { Py_tp_getset, t_PythonAbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGaussianContribution, t_PythonAbstractGaussianContribution, PythonAbstractGaussianContribution);

            void t_PythonAbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGaussianContribution), &PY_TYPE_DEF(PythonAbstractGaussianContribution), module, "PythonAbstractGaussianContribution", 1);
            }

            void t_PythonAbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "class_", make_descriptor(PythonAbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "wrapfn_", make_descriptor(t_PythonAbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGaussianContribution::initializeClass);
              JNINativeMethod methods[] = {
                { "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractGaussianContribution_getLLimits0 },
                { "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D", (void *) t_PythonAbstractGaussianContribution_getLLimits1 },
                { "getParametersDriversWithoutMu", "()Ljava/util/List;", (void *) t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGaussianContribution_pythonDecRef3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGaussianContribution::wrap_Object(PythonAbstractGaussianContribution(((t_PythonAbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::ForceModel a2((jobject) NULL);
              jdouble a3;
              PythonAbstractGaussianContribution object((jobject) NULL);

              if (!parseArgs(args, "sDkD", ::org::orekit::forces::ForceModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGaussianContribution(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDriversWithoutMu", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDriversWithoutMu", result);
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

            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet::class$ = NULL;
          jmethodID *PolyhedronsSet::mids$ = NULL;
          bool PolyhedronsSet::live$ = false;

          jclass PolyhedronsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_5c8a1dde536da6df] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;D)V");
              mids$[mid_init$_936ab5386aba1bbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_16deaf08470737f9] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_3ec226cbba8fb999] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;D)V");
              mids$[mid_init$_f52a2398ff588db1] = env->getMethodID(cls, "<init>", "(DDDDDDD)V");
              mids$[mid_buildNew_770980e770be1770] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_firstIntersection_72c56cde01db3a53] = env->getMethodID(cls, "firstIntersection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
              mids$[mid_getBRep_b209c5db604582f1] = env->getMethodID(cls, "getBRep", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;");
              mids$[mid_rotate_0fb78dbfaa114bbd] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_translate_2e8219aa47d34a5a] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet::PolyhedronsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_5c8a1dde536da6df, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_936ab5386aba1bbf, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_16deaf08470737f9, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3ec226cbba8fb999, a0.this$, a1.this$, a2)) {}

          PolyhedronsSet::PolyhedronsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_f52a2398ff588db1, a0, a1, a2, a3, a4, a5, a6)) {}

          PolyhedronsSet PolyhedronsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_buildNew_770980e770be1770], a0.this$));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane PolyhedronsSet::firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Line & a1) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_firstIntersection_72c56cde01db3a53], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep PolyhedronsSet::getBRep() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep(env->callObjectMethod(this$, mids$[mid_getBRep_b209c5db604582f1]));
          }

          PolyhedronsSet PolyhedronsSet::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_rotate_0fb78dbfaa114bbd], a0.this$, a1.this$));
          }

          PolyhedronsSet PolyhedronsSet::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_translate_2e8219aa47d34a5a], a0.this$));
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
          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args);
          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self);
          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg);
          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data);
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data);
          static PyGetSetDef t_PolyhedronsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet, bRep),
            DECLARE_GET_FIELD(t_PolyhedronsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, firstIntersection, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, getBRep, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet, rotate, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, translate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet)[] = {
            { Py_tp_methods, t_PolyhedronsSet__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet_init_ },
            { Py_tp_getset, t_PolyhedronsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet, t_PolyhedronsSet, PolyhedronsSet);
          PyObject *t_PolyhedronsSet::wrap_Object(const PolyhedronsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet), &PY_TYPE_DEF(PolyhedronsSet), module, "PolyhedronsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "BRep", make_descriptor(&PY_TYPE_DEF(PolyhedronsSet$BRep)));
          }

          void t_PolyhedronsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "class_", make_descriptor(PolyhedronsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "wrapfn_", make_descriptor(t_PolyhedronsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet::wrap_Object(PolyhedronsSet(((t_PolyhedronsSet *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolyhedronsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KKD", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 7:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolyhedronsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a1((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.firstIntersection(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "firstIntersection", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep result((jobject) NULL);
            OBJ_CALL(result = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(result);
          }

          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep value((jobject) NULL);
            OBJ_CALL(value = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *LeastSquareAdjuster::class$ = NULL;
        jmethodID *LeastSquareAdjuster::mids$ = NULL;
        bool LeastSquareAdjuster::live$ = false;

        jclass LeastSquareAdjuster::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/LeastSquareAdjuster");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_c5aa51c2423b63eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");
            mids$[mid_optimize_b4aa3e5bf3a16dc8] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LeastSquareAdjuster::LeastSquareAdjuster() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        LeastSquareAdjuster::LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5aa51c2423b63eb, a0.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquareAdjuster::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_b4aa3e5bf3a16dc8], a0.this$));
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
      namespace adjustment {
        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg);

        static PyMethodDef t_LeastSquareAdjuster__methods_[] = {
          DECLARE_METHOD(t_LeastSquareAdjuster, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, optimize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LeastSquareAdjuster)[] = {
          { Py_tp_methods, t_LeastSquareAdjuster__methods_ },
          { Py_tp_init, (void *) t_LeastSquareAdjuster_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LeastSquareAdjuster)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LeastSquareAdjuster, t_LeastSquareAdjuster, LeastSquareAdjuster);

        void t_LeastSquareAdjuster::install(PyObject *module)
        {
          installType(&PY_TYPE(LeastSquareAdjuster), &PY_TYPE_DEF(LeastSquareAdjuster), module, "LeastSquareAdjuster", 0);
        }

        void t_LeastSquareAdjuster::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "class_", make_descriptor(LeastSquareAdjuster::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "wrapfn_", make_descriptor(t_LeastSquareAdjuster::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LeastSquareAdjuster::initializeClass, 1)))
            return NULL;
          return t_LeastSquareAdjuster::wrap_Object(LeastSquareAdjuster(((t_LeastSquareAdjuster *) arg)->object.this$));
        }
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LeastSquareAdjuster::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LeastSquareAdjuster object((jobject) NULL);

              INT_CALL(object = LeastSquareAdjuster());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquareAdjuster object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
              {
                INT_CALL(object = LeastSquareAdjuster(a0));
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

        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "optimize", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManeuverFieldType::class$ = NULL;
              jmethodID *ManeuverFieldType::mids$ = NULL;
              bool ManeuverFieldType::live$ = false;
              ManeuverFieldType *ManeuverFieldType::ACC_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_X = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DELTA_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_CDA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_RATIO = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_ID = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::MAN_DURA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_EFFIC = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_ISP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_X = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_ABSOLUTE = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_RELATIVE = NULL;

              jclass ManeuverFieldType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_checkUnit_730245a45ba30f8c] = env->getMethodID(cls, "checkUnit", "(Lorg/orekit/utils/units/Unit;)V");
                  mids$[mid_getUnit_6466188dbb1eea22] = env->getMethodID(cls, "getUnit", "()Lorg/orekit/utils/units/Unit;");
                  mids$[mid_isTime_9ab94ac1dc23b105] = env->getMethodID(cls, "isTime", "()Z");
                  mids$[mid_outputField_68f42d904f396276] = env->getMethodID(cls, "outputField", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;)Ljava/lang/String;");
                  mids$[mid_process_2d87f7458cd57d50] = env->getMethodID(cls, "process", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;ILjava/lang/String;)V");
                  mids$[mid_valueOf_422bdb88ed017510] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");
                  mids$[mid_values_13eba1f9c3416306] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACC_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_X = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DELTA_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_CDA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_CDA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_RATIO = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_RATIO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_ID = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  MAN_DURA = new ManeuverFieldType(env->getStaticObjectField(cls, "MAN_DURA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_EFFIC = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_EFFIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_ISP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_ISP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_X = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_ABSOLUTE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_RELATIVE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_RELATIVE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              void ManeuverFieldType::checkUnit(const ::org::orekit::utils::units::Unit & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_checkUnit_730245a45ba30f8c], a0.this$);
              }

              ::org::orekit::utils::units::Unit ManeuverFieldType::getUnit() const
              {
                return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnit_6466188dbb1eea22]));
              }

              jboolean ManeuverFieldType::isTime() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isTime_9ab94ac1dc23b105]);
              }

              ::java::lang::String ManeuverFieldType::outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a1) const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_outputField_68f42d904f396276], a0.this$, a1.this$));
              }

              void ManeuverFieldType::process(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a2, jint a3, const ::java::lang::String & a4) const
              {
                env->callVoidMethod(this$, mids$[mid_process_2d87f7458cd57d50], a0.this$, a1.this$, a2.this$, a3, a4.this$);
              }

              ManeuverFieldType ManeuverFieldType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverFieldType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_422bdb88ed017510], a0.this$));
              }

              JArray< ManeuverFieldType > ManeuverFieldType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverFieldType >(env->callStaticObjectMethod(cls, mids$[mid_values_13eba1f9c3416306]));
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
            namespace ocm {
              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg);
              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type);
              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data);
              static PyGetSetDef t_ManeuverFieldType__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverFieldType, time),
                DECLARE_GET_FIELD(t_ManeuverFieldType, unit),
                DECLARE_GET_FIELD(t_ManeuverFieldType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverFieldType__methods_[] = {
                DECLARE_METHOD(t_ManeuverFieldType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, checkUnit, METH_O),
                DECLARE_METHOD(t_ManeuverFieldType, getUnit, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, isTime, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, outputField, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverFieldType)[] = {
                { Py_tp_methods, t_ManeuverFieldType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverFieldType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverFieldType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverFieldType, t_ManeuverFieldType, ManeuverFieldType);
              PyObject *t_ManeuverFieldType::wrap_Object(const ManeuverFieldType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverFieldType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverFieldType::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverFieldType), &PY_TYPE_DEF(ManeuverFieldType), module, "ManeuverFieldType", 0);
              }

              void t_ManeuverFieldType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "class_", make_descriptor(ManeuverFieldType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "wrapfn_", make_descriptor(t_ManeuverFieldType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverFieldType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DELTA_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_CDA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_CDA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_RATIO", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_RATIO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_ID", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "MAN_DURA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::MAN_DURA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_EFFIC", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_EFFIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_ISP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_ISP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_ABSOLUTE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_RELATIVE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_RELATIVE)));
              }

              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverFieldType::initializeClass, 1)))
                  return NULL;
                return t_ManeuverFieldType::wrap_Object(ManeuverFieldType(((t_ManeuverFieldType *) arg)->object.this$));
              }
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverFieldType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg)
              {
                ::org::orekit::utils::units::Unit a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.checkUnit(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "checkUnit", arg);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self)
              {
                ::org::orekit::utils::units::Unit result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
              }

              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isTime());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a1((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.outputField(a0, a1));
                  return j2p(result);
                }

                PyErr_SetArgsError((PyObject *) self, "outputField", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a2((jobject) NULL);
                jint a3;
                ::java::lang::String a4((jobject) NULL);

                if (!parseArgs(args, "skkIs", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(self->object.process(a0, a1, a2, a3, a4));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverFieldType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::valueOf(a0));
                  return t_ManeuverFieldType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type)
              {
                JArray< ManeuverFieldType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverFieldType::wrap_jobject);
              }
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isTime());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data)
              {
                ::org::orekit::utils::units::Unit value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
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
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *FieldOfView::class$ = NULL;
        jmethodID *FieldOfView::mids$ = NULL;
        bool FieldOfView::live$ = false;

        jclass FieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/FieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFootprint_f20a8500298f8a78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_b74f83833fdad017] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List FieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_f20a8500298f8a78], a0.this$, a1.this$, a2));
        }

        jdouble FieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_b74f83833fdad017]);
        }

        jdouble FieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_927580832e9083f9], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
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
        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self);
        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg);
        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data);
        static PyGetSetDef t_FieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfView__methods_[] = {
          DECLARE_METHOD(t_FieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfView)[] = {
          { Py_tp_methods, t_FieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOfView, t_FieldOfView, FieldOfView);

        void t_FieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfView), &PY_TYPE_DEF(FieldOfView), module, "FieldOfView", 0);
        }

        void t_FieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "class_", make_descriptor(FieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "wrapfn_", make_descriptor(t_FieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfView::initializeClass, 1)))
            return NULL;
          return t_FieldOfView::wrap_Object(FieldOfView(((t_FieldOfView *) arg)->object.this$));
        }
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "getFootprint", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "offsetFromBoundary", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }

        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1Field::class$ = NULL;
        jmethodID *UnivariateDerivative1Field::mids$ = NULL;
        bool UnivariateDerivative1Field::live$ = false;

        jclass UnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_99ac5972aa279a25] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getOne_7826974382aac05b] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_7826974382aac05b] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        UnivariateDerivative1Field UnivariateDerivative1Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_99ac5972aa279a25]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_7826974382aac05b]));
        }

        ::java::lang::Class UnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_7826974382aac05b]));
        }

        jint UnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1Field, t_UnivariateDerivative1Field, UnivariateDerivative1Field);

        void t_UnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1Field), &PY_TYPE_DEF(UnivariateDerivative1Field), module, "UnivariateDerivative1Field", 0);
        }

        void t_UnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "class_", make_descriptor(UnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "wrapfn_", make_descriptor(t_UnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1Field::wrap_Object(UnivariateDerivative1Field(((t_UnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative1Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field::getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
        }

        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data)
        {
          UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldBivariateFunction::class$ = NULL;
      jmethodID *FieldBivariateFunction::mids$ = NULL;
      bool FieldBivariateFunction::live$ = false;

      jclass FieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldBivariateFunction_ee5f4a5d663cf9ce] = env->getMethodID(cls, "toCalculusFieldBivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldBivariateFunction;");
          mids$[mid_value_c6408fdce2cc6c1a] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldBivariateFunction FieldBivariateFunction::toCalculusFieldBivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldBivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldBivariateFunction_ee5f4a5d663cf9ce], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c6408fdce2cc6c1a], a0.this$, a1.this$));
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
      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args);

      static PyMethodDef t_FieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, toCalculusFieldBivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBivariateFunction)[] = {
        { Py_tp_methods, t_FieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBivariateFunction, t_FieldBivariateFunction, FieldBivariateFunction);

      void t_FieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBivariateFunction), &PY_TYPE_DEF(FieldBivariateFunction), module, "FieldBivariateFunction", 0);
      }

      void t_FieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "class_", make_descriptor(FieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "wrapfn_", make_descriptor(t_FieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldBivariateFunction::wrap_Object(FieldBivariateFunction(((t_FieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldBivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldBivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldBivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldBivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Maneuver::class$ = NULL;
        jmethodID *Maneuver::mids$ = NULL;
        bool Maneuver::live$ = false;

        jclass Maneuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Maneuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2cfe271e1be0464c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addContribution_6aa2b69cacacea60] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_ab5e59960ebc27c2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getAttitudeOverride_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getManeuverTriggers_2d460145092fdd66] = env->getMethodID(cls, "getManeuverTriggers", "()Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropulsionModel_ae30c99eecbf6088] = env->getMethodID(cls, "getPropulsionModel", "()Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Maneuver::Maneuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cfe271e1be0464c, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Maneuver::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_6aa2b69cacacea60], a0.this$, a1.this$);
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_ab5e59960ebc27c2], a0.this$, a1.this$);
        }

        jboolean Maneuver::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::org::orekit::attitudes::AttitudeProvider Maneuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_331f12bb6017243b]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType Maneuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
        }

        ::java::util::stream::Stream Maneuver::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream Maneuver::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers Maneuver::getManeuverTriggers() const
        {
          return ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers(env->callObjectMethod(this$, mids$[mid_getManeuverTriggers_2d460145092fdd66]));
        }

        ::java::lang::String Maneuver::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::java::util::List Maneuver::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::forces::maneuvers::propulsion::PropulsionModel Maneuver::getPropulsionModel() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(env->callObjectMethod(this$, mids$[mid_getPropulsionModel_ae30c99eecbf6088]));
        }

        void Maneuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        void Maneuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace forces {
      namespace maneuvers {
        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self);
        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self);
        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self);
        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self);
        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg);
        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self);
        static PyObject *t_Maneuver_getName(t_Maneuver *self);
        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self);
        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self);
        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data);
        static PyGetSetDef t_Maneuver__fields_[] = {
          DECLARE_GET_FIELD(t_Maneuver, attitudeOverride),
          DECLARE_GET_FIELD(t_Maneuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_Maneuver, eventDetectors),
          DECLARE_GET_FIELD(t_Maneuver, maneuverTriggers),
          DECLARE_GET_FIELD(t_Maneuver, name),
          DECLARE_GET_FIELD(t_Maneuver, parametersDrivers),
          DECLARE_GET_FIELD(t_Maneuver, propulsionModel),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Maneuver__methods_[] = {
          DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_Maneuver, getManeuverTriggers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getName, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getPropulsionModel, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
          { Py_tp_methods, t_Maneuver__methods_ },
          { Py_tp_init, (void *) t_Maneuver_init_ },
          { Py_tp_getset, t_Maneuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

        void t_Maneuver::install(PyObject *module)
        {
          installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
        }

        void t_Maneuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
            return NULL;
          return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
        }
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Maneuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel a2((jobject) NULL);
          Maneuver object((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::PropulsionModel::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Maneuver(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers result((jobject) NULL);
          OBJ_CALL(result = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getName(t_Maneuver *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(result);
        }

        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.init(a0, a1));
                Py_RETURN_NONE;
              }
            }
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
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers value((jobject) NULL);
          OBJ_CALL(value = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnDecreasing::class$ = NULL;
          jmethodID *StopOnDecreasing::mids$ = NULL;
          bool StopOnDecreasing::live$ = false;

          jclass StopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnDecreasing::StopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action StopOnDecreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args);

          static PyMethodDef t_StopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnDecreasing)[] = {
            { Py_tp_methods, t_StopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnDecreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnDecreasing, t_StopOnDecreasing, StopOnDecreasing);

          void t_StopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnDecreasing), &PY_TYPE_DEF(StopOnDecreasing), module, "StopOnDecreasing", 0);
          }

          void t_StopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "class_", make_descriptor(StopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "wrapfn_", make_descriptor(t_StopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnDecreasing::wrap_Object(StopOnDecreasing(((t_StopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnDecreasing object((jobject) NULL);

            INT_CALL(object = StopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TCBScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *LazyLoadedTimeScales::class$ = NULL;
      jmethodID *LazyLoadedTimeScales::mids$ = NULL;
      bool LazyLoadedTimeScales::live$ = false;

      jclass LazyLoadedTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/LazyLoadedTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_69b9330e9509abf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;)V");
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_1237785d9625f10b] = env->getMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_e66ecc29d9b0858a] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_75a06d4a3e06af34] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_375ab849f7e3d9ee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_a74060fc815076a7] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_935fd284aa6ccd53] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_d7fbef15a3374e78] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_f801e6f0b9a78872] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_700cdb40469496d6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_e0443055c5547bea] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_9ccd709f9ae42bbc] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_61ba58ac615801fa] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_68d743a8c670f6cb] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_0d98cf69977e0c28] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_246820b70f2cddeb] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_1e4acbbebd50858e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_getEopHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedTimeScales::LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop & a0) : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_69b9330e9509abf7, a0.this$)) {}

      void LazyLoadedTimeScales::addDefaultUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2]);
      }

      void LazyLoadedTimeScales::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addUTCTAIOffsetsLoader_1237785d9625f10b], a0.this$);
      }

      void LazyLoadedTimeScales::clearUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::time::BDTScale LazyLoadedTimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_e66ecc29d9b0858a]));
      }

      ::org::orekit::time::GLONASSScale LazyLoadedTimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_75a06d4a3e06af34]));
      }

      ::org::orekit::time::GMSTScale LazyLoadedTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_375ab849f7e3d9ee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale LazyLoadedTimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_a74060fc815076a7]));
      }

      ::org::orekit::time::GalileoScale LazyLoadedTimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_935fd284aa6ccd53]));
      }

      ::org::orekit::time::IRNSSScale LazyLoadedTimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_d7fbef15a3374e78]));
      }

      ::org::orekit::time::QZSSScale LazyLoadedTimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_f801e6f0b9a78872]));
      }

      ::org::orekit::time::TAIScale LazyLoadedTimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_700cdb40469496d6]));
      }

      ::org::orekit::time::TCBScale LazyLoadedTimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_e0443055c5547bea]));
      }

      ::org::orekit::time::TCGScale LazyLoadedTimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_9ccd709f9ae42bbc]));
      }

      ::org::orekit::time::TDBScale LazyLoadedTimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_61ba58ac615801fa]));
      }

      ::org::orekit::time::TTScale LazyLoadedTimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_68d743a8c670f6cb]));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_0d98cf69977e0c28], a0.this$));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_246820b70f2cddeb], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale LazyLoadedTimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_1e4acbbebd50858e]));
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
      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data);
      static PyGetSetDef t_LazyLoadedTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, bDT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gLONASS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gPS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gST),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, iRNSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, qZSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tAI),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCG),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tDB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedTimeScales__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addUTCTAIOffsetsLoader, METH_O),
        DECLARE_METHOD(t_LazyLoadedTimeScales, clearUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getBDT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGLONASS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGPS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getIRNSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getQZSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTAI, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCG, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTDB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUTC, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedTimeScales)[] = {
        { Py_tp_methods, t_LazyLoadedTimeScales__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedTimeScales_init_ },
        { Py_tp_getset, t_LazyLoadedTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(LazyLoadedTimeScales, t_LazyLoadedTimeScales, LazyLoadedTimeScales);

      void t_LazyLoadedTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedTimeScales), &PY_TYPE_DEF(LazyLoadedTimeScales), module, "LazyLoadedTimeScales", 0);
      }

      void t_LazyLoadedTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "class_", make_descriptor(LazyLoadedTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "wrapfn_", make_descriptor(t_LazyLoadedTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedTimeScales::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedTimeScales::wrap_Object(LazyLoadedTimeScales(((t_LazyLoadedTimeScales *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        LazyLoadedTimeScales object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::LazyLoadedEop::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedTimeScales(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getBDT());
          return ::org::orekit::time::t_BDTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getBDT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGLONASS());
          return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGLONASS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args)
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

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGMST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGPS());
          return ::org::orekit::time::t_GPSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGPS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGST());
          return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIRNSS());
          return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getIRNSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getQZSS());
          return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getQZSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTAI());
          return ::org::orekit::time::t_TAIScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTAI", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCB());
          return ::org::orekit::time::t_TCBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCG());
          return ::org::orekit::time::t_TCGScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCG", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTDB());
          return ::org::orekit::time::t_TDBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTDB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTT());
          return ::org::orekit::time::t_TTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
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
          }
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getUTC());
          return ::org::orekit::time::t_UTCScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUTC", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
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
              mids$[mid_init$_2c76b3e9d62e0fe4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Segment;)V");
              mids$[mid_init$_6ae2db4be0bbe390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_init$_14bec7b2bdc550d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_355a26b05422d291] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/SubLine;Z)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment & a0) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_2c76b3e9d62e0fe4, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_6ae2db4be0bbe390, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_14bec7b2bdc550d3, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_355a26b05422d291], a0.this$, a1));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLine::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
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
            mids$[mid_init$_0cf43987106ef7f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;D[Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_contains_b92074fa0a6b377c] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;)Z");
            mids$[mid_contains_939c2b4f37355197] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;D)Z");
            mids$[mid_getCenter_4b90e5ca2d7b0c50] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getRadius_b74f83833fdad017] = env->getMethodID(cls, "getRadius", "()D");
            mids$[mid_getSupport_afc97567b9ab5b54] = env->getMethodID(cls, "getSupport", "()[Lorg/hipparchus/geometry/Point;");
            mids$[mid_getSupportSize_55546ef6a647f39b] = env->getMethodID(cls, "getSupportSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnclosingBall::EnclosingBall(const ::org::hipparchus::geometry::Point & a0, jdouble a1, const JArray< ::org::hipparchus::geometry::Point > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0cf43987106ef7f4, a0.this$, a1, a2.this$)) {}

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_b92074fa0a6b377c], a0.this$);
        }

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_939c2b4f37355197], a0.this$, a1);
        }

        ::org::hipparchus::geometry::Point EnclosingBall::getCenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getCenter_4b90e5ca2d7b0c50]));
        }

        jdouble EnclosingBall::getRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRadius_b74f83833fdad017]);
        }

        JArray< ::org::hipparchus::geometry::Point > EnclosingBall::getSupport() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getSupport_afc97567b9ab5b54]));
        }

        jint EnclosingBall::getSupportSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportSize_55546ef6a647f39b]);
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
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
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
            mids$[mid_init$_cb396584af19332c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_init$_c9527380c71353fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/data/DataContext;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_def703a4cd204ea8] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
            mids$[mid_copy_f0f088b56f464362] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/TLEPropagatorBuilder;");
            mids$[mid_getTemplateTLE_1c01e307dcced049] = env->getMethodID(cls, "getTemplateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_cb396584af19332c, a0.this$, a1.this$, a2, a3.this$)) {}

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c9527380c71353fc, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel TLEPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::tle::TLEPropagator TLEPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::tle::TLEPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_def703a4cd204ea8], a0.this$));
        }

        TLEPropagatorBuilder TLEPropagatorBuilder::copy() const
        {
          return TLEPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_f0f088b56f464362]));
        }

        ::org::orekit::propagation::analytical::tle::TLE TLEPropagatorBuilder::getTemplateTLE() const
        {
          return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTemplateTLE_1c01e307dcced049]));
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
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinh::class$ = NULL;
        jmethodID *Sinh::mids$ = NULL;
        bool Sinh::live$ = false;

        jclass Sinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinh::Sinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Sinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args);

        static PyMethodDef t_Sinh__methods_[] = {
          DECLARE_METHOD(t_Sinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinh)[] = {
          { Py_tp_methods, t_Sinh__methods_ },
          { Py_tp_init, (void *) t_Sinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinh, t_Sinh, Sinh);

        void t_Sinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinh), &PY_TYPE_DEF(Sinh), module, "Sinh", 0);
        }

        void t_Sinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "class_", make_descriptor(Sinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "wrapfn_", make_descriptor(t_Sinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinh::initializeClass, 1)))
            return NULL;
          return t_Sinh::wrap_Object(Sinh(((t_Sinh *) arg)->object.this$));
        }
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds)
        {
          Sinh object((jobject) NULL);

          INT_CALL(object = Sinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args)
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
#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *BoxAndSolarArraySpacecraft::class$ = NULL;
      jmethodID *BoxAndSolarArraySpacecraft::mids$ = NULL;
      bool BoxAndSolarArraySpacecraft::live$ = false;

      jclass BoxAndSolarArraySpacecraft::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/BoxAndSolarArraySpacecraft");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_a3477d519f0e75e1] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)V");
          mids$[mid_buildBox_6d5fc44237d88733] = env->getStaticMethodID(cls, "buildBox", "(DDDDDDD)Ljava/util/List;");
          mids$[mid_buildPanels_7d90265de2e24a3d] = env->getStaticMethodID(cls, "buildPanels", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)Ljava/util/List;");
          mids$[mid_dragAcceleration_7a2b875d7cdeb947] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_dragAcceleration_c95e6c4bf4979a1a] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
          mids$[mid_getPanels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPanels", "()Ljava/util/List;");
          mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
          mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3477d519f0e75e1, a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9)) {}

      ::java::util::List BoxAndSolarArraySpacecraft::buildBox(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildBox_6d5fc44237d88733], a0, a1, a2, a3, a4, a5, a6));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::buildPanels(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildPanels_7d90265de2e24a3d], a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_7a2b875d7cdeb947], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_c95e6c4bf4979a1a], a0.this$, a1, a2.this$, a3.this$));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getDragParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getPanels() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPanels_e62d3bb06d56d7e3]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getRadiationParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a230d7bdb943f733], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyGetSetDef t_BoxAndSolarArraySpacecraft__fields_[] = {
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, dragParametersDrivers),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, panels),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, radiationParametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoxAndSolarArraySpacecraft__methods_[] = {
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildBox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildPanels, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, dragAcceleration, METH_VARARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getDragParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getPanels, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getRadiationParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, radiationPressureAcceleration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoxAndSolarArraySpacecraft)[] = {
        { Py_tp_methods, t_BoxAndSolarArraySpacecraft__methods_ },
        { Py_tp_init, (void *) t_BoxAndSolarArraySpacecraft_init_ },
        { Py_tp_getset, t_BoxAndSolarArraySpacecraft__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoxAndSolarArraySpacecraft)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BoxAndSolarArraySpacecraft, t_BoxAndSolarArraySpacecraft, BoxAndSolarArraySpacecraft);

      void t_BoxAndSolarArraySpacecraft::install(PyObject *module)
      {
        installType(&PY_TYPE(BoxAndSolarArraySpacecraft), &PY_TYPE_DEF(BoxAndSolarArraySpacecraft), module, "BoxAndSolarArraySpacecraft", 0);
      }

      void t_BoxAndSolarArraySpacecraft::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "class_", make_descriptor(BoxAndSolarArraySpacecraft::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "wrapfn_", make_descriptor(t_BoxAndSolarArraySpacecraft::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 1)))
          return NULL;
        return t_BoxAndSolarArraySpacecraft::wrap_Object(BoxAndSolarArraySpacecraft(((t_BoxAndSolarArraySpacecraft *) arg)->object.this$));
      }
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
            jdouble a4;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildBox(a0, a1, a2, a3, a4, a5, a6));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildBox", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
        jdouble a4;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildPanels(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildPanels", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TidalDisplacement::class$ = NULL;
          jmethodID *TidalDisplacement::mids$ = NULL;
          bool TidalDisplacement::live$ = false;

          jclass TidalDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TidalDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9670f13f16a3e9aa] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/IERSConventions;Z)V");
              mids$[mid_displacement_729c7f08824f83c6] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TidalDisplacement::TidalDisplacement(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::PVCoordinatesProvider & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4, const ::org::orekit::utils::IERSConventions & a5, jboolean a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9670f13f16a3e9aa, a0, a1, a2, a3.this$, a4.this$, a5.this$, a6)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TidalDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_729c7f08824f83c6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args);

          static PyMethodDef t_TidalDisplacement__methods_[] = {
            DECLARE_METHOD(t_TidalDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TidalDisplacement)[] = {
            { Py_tp_methods, t_TidalDisplacement__methods_ },
            { Py_tp_init, (void *) t_TidalDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TidalDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TidalDisplacement, t_TidalDisplacement, TidalDisplacement);

          void t_TidalDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TidalDisplacement), &PY_TYPE_DEF(TidalDisplacement), module, "TidalDisplacement", 0);
          }

          void t_TidalDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "class_", make_descriptor(TidalDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "wrapfn_", make_descriptor(t_TidalDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TidalDisplacement::initializeClass, 1)))
              return NULL;
            return t_TidalDisplacement::wrap_Object(TidalDisplacement(((t_TidalDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TidalDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::PVCoordinatesProvider a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::utils::IERSConventions a5((jobject) NULL);
            PyTypeObject **p5;
            jboolean a6;
            TidalDisplacement object((jobject) NULL);

            if (!parseArgs(args, "DDDkkKZ", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
            {
              INT_CALL(object = TidalDisplacement(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args)
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
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStamped::class$ = NULL;
      jmethodID *TimeStamped::mids$ = NULL;
      bool TimeStamped::live$ = false;

      jclass TimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_f034f10a2568dfba] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/TimeStamped;)D");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeStamped::durationFrom(const TimeStamped & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_f034f10a2568dfba], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate TimeStamped::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
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
      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg);
      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self);
      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data);
      static PyGetSetDef t_TimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStamped, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStamped__methods_[] = {
        DECLARE_METHOD(t_TimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_TimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStamped)[] = {
        { Py_tp_methods, t_TimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStamped, t_TimeStamped, TimeStamped);

      void t_TimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStamped), &PY_TYPE_DEF(TimeStamped), module, "TimeStamped", 0);
      }

      void t_TimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "class_", make_descriptor(TimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "wrapfn_", make_descriptor(t_TimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStamped::initializeClass, 1)))
          return NULL;
        return t_TimeStamped::wrap_Object(TimeStamped(((t_TimeStamped *) arg)->object.this$));
      }
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg)
      {
        TimeStamped a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEIntegrator::class$ = NULL;
      jmethodID *ODEIntegrator::mids$ = NULL;
      bool ODEIntegrator::live$ = false;

      jclass ODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_b3037e2992b522fb] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_00cecfec8aa9403e] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_cd9b3224c18c683b] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_b74f83833fdad017] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_73a804ac72232dd7] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_8cb4bf2a0c64fd92] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_2710805e3cea778c] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_b3037e2992b522fb], a0.this$);
      }

      void ODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_00cecfec8aa9403e], a0.this$);
      }

      void ODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_cd9b3224c18c683b], a0.this$);
      }

      void ODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2]);
      }

      void ODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2]);
      }

      void ODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      jdouble ODEIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_b74f83833fdad017]);
      }

      jint ODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      ::java::util::List ODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_e62d3bb06d56d7e3]));
      }

      jint ODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
      }

      ::java::lang::String ODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::util::List ODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3]));
      }

      ::java::util::List ODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_73a804ac72232dd7]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_8cb4bf2a0c64fd92], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_2710805e3cea778c], a0.this$, a1.this$, a2));
      }

      void ODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_44ed599e93e8a30c], a0);
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
      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args);
      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data);
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data);
      static PyGetSetDef t_ODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_ODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_ODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_ODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, name),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_ODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_ODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEIntegrator)[] = {
        { Py_tp_methods, t_ODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEIntegrator, t_ODEIntegrator, ODEIntegrator);

      void t_ODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEIntegrator), &PY_TYPE_DEF(ODEIntegrator), module, "ODEIntegrator", 0);
      }

      void t_ODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "class_", make_descriptor(ODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "wrapfn_", make_descriptor(t_ODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_ODEIntegrator::wrap_Object(ODEIntegrator(((t_ODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg)
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

      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_467efe95b0345f4c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Metadata;Lorg/orekit/files/ccsds/section/Data;)V");
              mids$[mid_getData_208769533bf43f23] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/section/Data;");
              mids$[mid_getMetadata_2ae67c0a088683a6] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/section/Metadata;");
              mids$[mid_setMetadata_a3937873dbd84d3d] = env->getMethodID(cls, "setMetadata", "(Lorg/orekit/files/ccsds/section/Metadata;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::orekit::files::ccsds::section::Metadata & a0, const ::org::orekit::files::ccsds::section::Data & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_467efe95b0345f4c, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::section::Data Segment::getData() const
          {
            return ::org::orekit::files::ccsds::section::Data(env->callObjectMethod(this$, mids$[mid_getData_208769533bf43f23]));
          }

          ::org::orekit::files::ccsds::section::Metadata Segment::getMetadata() const
          {
            return ::org::orekit::files::ccsds::section::Metadata(env->callObjectMethod(this$, mids$[mid_getMetadata_2ae67c0a088683a6]));
          }

          void Segment::setMetadata(const ::org::orekit::files::ccsds::section::Metadata & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMetadata_a3937873dbd84d3d], a0.this$);
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getData(t_Segment *self);
          static PyObject *t_Segment_getMetadata(t_Segment *self);
          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_get__data(t_Segment *self, void *data);
          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data);
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data);
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, data),
            DECLARE_GETSET_FIELD(t_Segment, metadata),
            DECLARE_GET_FIELD(t_Segment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, of_, METH_VARARGS),
            DECLARE_METHOD(t_Segment, getData, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getMetadata, METH_NOARGS),
            DECLARE_METHOD(t_Segment, setMetadata, METH_O),
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
          PyObject *t_Segment::wrap_Object(const Segment& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Segment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

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

          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);
            ::org::orekit::files::ccsds::section::Data a1((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::section::Metadata::initializeClass, ::org::orekit::files::ccsds::section::Data::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Segment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getData(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Data result((jobject) NULL);
            OBJ_CALL(result = self->object.getData());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::files::ccsds::section::t_Data::wrap_Object(result);
          }

          static PyObject *t_Segment_getMetadata(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Metadata result((jobject) NULL);
            OBJ_CALL(result = self->object.getMetadata());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(result);
          }

          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setMetadata(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMetadata", arg);
            return NULL;
          }
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Segment_get__data(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Data value((jobject) NULL);
            OBJ_CALL(value = self->object.getData());
            return ::org::orekit::files::ccsds::section::t_Data::wrap_Object(value);
          }

          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
            OBJ_CALL(value = self->object.getMetadata());
            return ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(value);
          }
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &value))
              {
                INT_CALL(self->object.setMetadata(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "metadata", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory::mids$ = NULL;
        bool GeoMagneticFieldFactory::live$ = false;

        jclass GeoMagneticFieldFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_63411221dee4d2d9] = env->getStaticMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getGeoMagneticFields_d89697effe31d95a] = env->getStaticMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
            mids$[mid_getIGRF_0b71ae56f8fa5718] = env->getStaticMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_0b71ae56f8fa5718] = env->getStaticMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getField_63411221dee4d2d9], a0.this$, a1));
        }

        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields GeoMagneticFieldFactory::getGeoMagneticFields()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callStaticObjectMethod(cls, mids$[mid_getGeoMagneticFields_d89697effe31d95a]));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getIGRF(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getIGRF_0b71ae56f8fa5718], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getWMM(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getWMM_0b71ae56f8fa5718], a0));
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
        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory, geoMagneticFields),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getGeoMagneticFields, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getIGRF, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getWMM, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory, t_GeoMagneticFieldFactory, GeoMagneticFieldFactory);

        void t_GeoMagneticFieldFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory), &PY_TYPE_DEF(GeoMagneticFieldFactory), module, "GeoMagneticFieldFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "FieldModel", make_descriptor(&PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel)));
        }

        void t_GeoMagneticFieldFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "class_", make_descriptor(GeoMagneticFieldFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory::wrap_Object(GeoMagneticFieldFactory(((t_GeoMagneticFieldFactory *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWMM", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *Omm::class$ = NULL;
              jmethodID *Omm::mids$ = NULL;
              bool Omm::live$ = false;
              ::java::lang::String *Omm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Omm::ROOT = NULL;

              jclass Omm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/Omm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e9fd06990bf04fcd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_generateKeplerianOrbit_f50f1bbccaeb207e] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_9d155cc8314c99cf] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_generateTLE_1c01e307dcced049] = env->getMethodID(cls, "generateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
                  mids$[mid_getData_46cfa2da7d09d8dc] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmData;");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMetadata_85abb0ab995423bf] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Omm::Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_e9fd06990bf04fcd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::orbits::KeplerianOrbit Omm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_f50f1bbccaeb207e]));
              }

              ::org::orekit::propagation::SpacecraftState Omm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_9d155cc8314c99cf]));
              }

              ::org::orekit::propagation::analytical::tle::TLE Omm::generateTLE() const
              {
                return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generateTLE_1c01e307dcced049]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmData Omm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmData(env->callObjectMethod(this$, mids$[mid_getData_46cfa2da7d09d8dc]));
              }

              ::org::orekit::time::AbsoluteDate Omm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata Omm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_85abb0ab995423bf]));
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
              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args);
              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self);
              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self);
              static PyObject *t_Omm_generateTLE(t_Omm *self);
              static PyObject *t_Omm_getData(t_Omm *self);
              static PyObject *t_Omm_getDate(t_Omm *self);
              static PyObject *t_Omm_getMetadata(t_Omm *self);
              static PyObject *t_Omm_get__data(t_Omm *self, void *data);
              static PyObject *t_Omm_get__date(t_Omm *self, void *data);
              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data);
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data);
              static PyGetSetDef t_Omm__fields_[] = {
                DECLARE_GET_FIELD(t_Omm, data),
                DECLARE_GET_FIELD(t_Omm, date),
                DECLARE_GET_FIELD(t_Omm, metadata),
                DECLARE_GET_FIELD(t_Omm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Omm__methods_[] = {
                DECLARE_METHOD(t_Omm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Omm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateTLE, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Omm)[] = {
                { Py_tp_methods, t_Omm__methods_ },
                { Py_tp_init, (void *) t_Omm_init_ },
                { Py_tp_getset, t_Omm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Omm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Omm, t_Omm, Omm);
              PyObject *t_Omm::wrap_Object(const Omm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Omm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Omm::install(PyObject *module)
              {
                installType(&PY_TYPE(Omm), &PY_TYPE_DEF(Omm), module, "Omm", 0);
              }

              void t_Omm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "class_", make_descriptor(Omm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "wrapfn_", make_descriptor(t_Omm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Omm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Omm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "ROOT", make_descriptor(j2p(*Omm::ROOT)));
              }

              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Omm::initializeClass, 1)))
                  return NULL;
                return t_Omm::wrap_Object(Omm(((t_Omm *) arg)->object.this$));
              }
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Omm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Omm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Omm(a0, a1, a2, a3));
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

              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Omm_generateTLE(t_Omm *self)
              {
                ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
                OBJ_CALL(result = self->object.generateTLE());
                return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
              }

              static PyObject *t_Omm_getData(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(result);
              }

              static PyObject *t_Omm_getDate(t_Omm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Omm_getMetadata(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(result);
              }
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Omm_get__data(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(value);
              }

              static PyObject *t_Omm_get__date(t_Omm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(value);
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
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/String.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LagrangianPoints::class$ = NULL;
      jmethodID *LagrangianPoints::mids$ = NULL;
      bool LagrangianPoints::live$ = false;
      LagrangianPoints *LagrangianPoints::L1 = NULL;
      LagrangianPoints *LagrangianPoints::L2 = NULL;
      LagrangianPoints *LagrangianPoints::L3 = NULL;
      LagrangianPoints *LagrangianPoints::L4 = NULL;
      LagrangianPoints *LagrangianPoints::L5 = NULL;

      jclass LagrangianPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LagrangianPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_b924b625e37b1b42] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_values_a6ef3c7a1647cc39] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/LagrangianPoints;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          L1 = new LagrangianPoints(env->getStaticObjectField(cls, "L1", "Lorg/orekit/utils/LagrangianPoints;"));
          L2 = new LagrangianPoints(env->getStaticObjectField(cls, "L2", "Lorg/orekit/utils/LagrangianPoints;"));
          L3 = new LagrangianPoints(env->getStaticObjectField(cls, "L3", "Lorg/orekit/utils/LagrangianPoints;"));
          L4 = new LagrangianPoints(env->getStaticObjectField(cls, "L4", "Lorg/orekit/utils/LagrangianPoints;"));
          L5 = new LagrangianPoints(env->getStaticObjectField(cls, "L5", "Lorg/orekit/utils/LagrangianPoints;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LagrangianPoints LagrangianPoints::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LagrangianPoints(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b924b625e37b1b42], a0.this$));
      }

      JArray< LagrangianPoints > LagrangianPoints::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LagrangianPoints >(env->callStaticObjectMethod(cls, mids$[mid_values_a6ef3c7a1647cc39]));
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
      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args);
      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LagrangianPoints_values(PyTypeObject *type);
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data);
      static PyGetSetDef t_LagrangianPoints__fields_[] = {
        DECLARE_GET_FIELD(t_LagrangianPoints, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LagrangianPoints__methods_[] = {
        DECLARE_METHOD(t_LagrangianPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, of_, METH_VARARGS),
        DECLARE_METHOD(t_LagrangianPoints, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LagrangianPoints)[] = {
        { Py_tp_methods, t_LagrangianPoints__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LagrangianPoints__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LagrangianPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LagrangianPoints, t_LagrangianPoints, LagrangianPoints);
      PyObject *t_LagrangianPoints::wrap_Object(const LagrangianPoints& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LagrangianPoints::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LagrangianPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(LagrangianPoints), &PY_TYPE_DEF(LagrangianPoints), module, "LagrangianPoints", 0);
      }

      void t_LagrangianPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "class_", make_descriptor(LagrangianPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "wrapfn_", make_descriptor(t_LagrangianPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "boxfn_", make_descriptor(boxObject));
        env->getClass(LagrangianPoints::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L1", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L2", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L3", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L3)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L4", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L4)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L5", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L5)));
      }

      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LagrangianPoints::initializeClass, 1)))
          return NULL;
        return t_LagrangianPoints::wrap_Object(LagrangianPoints(((t_LagrangianPoints *) arg)->object.this$));
      }
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LagrangianPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LagrangianPoints result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::valueOf(a0));
          return t_LagrangianPoints::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LagrangianPoints_values(PyTypeObject *type)
      {
        JArray< LagrangianPoints > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::values());
        return JArray<jobject>(result.this$).wrap(t_LagrangianPoints::wrap_jobject);
      }
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldAbstractRuleFactory::class$ = NULL;
          jmethodID *FieldAbstractRuleFactory::mids$ = NULL;
          bool FieldAbstractRuleFactory::live$ = false;

          jclass FieldAbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
              mids$[mid_getRule_acde278e36767299] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_40599f7dd66087b8] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_enforceSymmetry_8b0f7facc8a6a46e] = env->getMethodID(cls, "enforceSymmetry", "([Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldAbstractRuleFactory::FieldAbstractRuleFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

          ::org::hipparchus::Field FieldAbstractRuleFactory::getField() const
          {
            return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
          }

          ::org::hipparchus::util::Pair FieldAbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_acde278e36767299], a0));
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
          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args);
          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self);
          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data);
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data);
          static PyGetSetDef t_FieldAbstractRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, field),
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldAbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldAbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getField, METH_NOARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldAbstractRuleFactory)[] = {
            { Py_tp_methods, t_FieldAbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldAbstractRuleFactory_init_ },
            { Py_tp_getset, t_FieldAbstractRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldAbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldAbstractRuleFactory, t_FieldAbstractRuleFactory, FieldAbstractRuleFactory);
          PyObject *t_FieldAbstractRuleFactory::wrap_Object(const FieldAbstractRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldAbstractRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldAbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldAbstractRuleFactory), &PY_TYPE_DEF(FieldAbstractRuleFactory), module, "FieldAbstractRuleFactory", 0);
          }

          void t_FieldAbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "class_", make_descriptor(FieldAbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "wrapfn_", make_descriptor(t_FieldAbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldAbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldAbstractRuleFactory::wrap_Object(FieldAbstractRuleFactory(((t_FieldAbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldAbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbstractRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbstractRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self)
          {
            ::org::hipparchus::Field result((jobject) NULL);
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data)
          {
            ::org::hipparchus::Field value((jobject) NULL);
            OBJ_CALL(value = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
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

              ::java::lang::Class *Rtcm1060::class$ = NULL;
              jmethodID *Rtcm1060::mids$ = NULL;
              bool Rtcm1060::live$ = false;

              jclass Rtcm1060::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1060::Rtcm1060(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args);
              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data);
              static PyGetSetDef t_Rtcm1060__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1060, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1060__methods_[] = {
                DECLARE_METHOD(t_Rtcm1060, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1060)[] = {
                { Py_tp_methods, t_Rtcm1060__methods_ },
                { Py_tp_init, (void *) t_Rtcm1060_init_ },
                { Py_tp_getset, t_Rtcm1060__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1060)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1060, t_Rtcm1060, Rtcm1060);
              PyObject *t_Rtcm1060::wrap_Object(const Rtcm1060& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1060::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1060::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1060), &PY_TYPE_DEF(Rtcm1060), module, "Rtcm1060", 0);
              }

              void t_Rtcm1060::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "class_", make_descriptor(Rtcm1060::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "wrapfn_", make_descriptor(t_Rtcm1060::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1060::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1060::wrap_Object(Rtcm1060(((t_Rtcm1060 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1060::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1060 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1060(a0, a1, a2));
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
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data)
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
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/distribution/RealDistribution.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
            mids$[mid_approximateP_3ea86aad626e7047] = env->getMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_bootstrap_7c3653754c574cea] = env->getMethodID(cls, "bootstrap", "([D[DI)D");
            mids$[mid_bootstrap_a99de3bb0d946e5b] = env->getMethodID(cls, "bootstrap", "([D[DIZ)D");
            mids$[mid_cdf_2eeda88661ae34d3] = env->getMethodID(cls, "cdf", "(DI)D");
            mids$[mid_cdf_89b1da4f594623f7] = env->getMethodID(cls, "cdf", "(DIZ)D");
            mids$[mid_cdfExact_2eeda88661ae34d3] = env->getMethodID(cls, "cdfExact", "(DI)D");
            mids$[mid_exactP_66797b2e6bbebeee] = env->getMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_27f681af35b4baa1] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_3207f9c2ae7271d9] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_27f681af35b4baa1] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_0c373dc781edcf2f] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_cc1786ac1add8fe8] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_208417a15884b969] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_ksSum_c35488bf93c357d0] = env->getMethodID(cls, "ksSum", "(DDI)D");
            mids$[mid_pelzGood_2eeda88661ae34d3] = env->getMethodID(cls, "pelzGood", "(DI)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KolmogorovSmirnovTest::KolmogorovSmirnovTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        KolmogorovSmirnovTest::KolmogorovSmirnovTest(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

        jdouble KolmogorovSmirnovTest::approximateP(jdouble a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_approximateP_3ea86aad626e7047], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_7c3653754c574cea], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_a99de3bb0d946e5b], a0.this$, a1.this$, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_2eeda88661ae34d3], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_89b1da4f594623f7], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::cdfExact(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdfExact_2eeda88661ae34d3], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::exactP(jdouble a0, jint a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_exactP_66797b2e6bbebeee], a0, a1, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_27f681af35b4baa1], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_27f681af35b4baa1], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_0c373dc781edcf2f], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_cc1786ac1add8fe8], a0.this$, a1.this$, a2);
        }

        jboolean KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_kolmogorovSmirnovTest_208417a15884b969], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::ksSum(jdouble a0, jdouble a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_ksSum_c35488bf93c357d0], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::pelzGood(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pelzGood_2eeda88661ae34d3], a0, a1);
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
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventEnablingPredicateFilter::class$ = NULL;
        jmethodID *EventEnablingPredicateFilter::mids$ = NULL;
        bool EventEnablingPredicateFilter::live$ = false;

        jclass EventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d6de5e0054391e3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/EnablingPredicate;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_73ec0c06cb6291a8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventEnablingPredicateFilter::EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::EnablingPredicate & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0d6de5e0054391e3, a0.this$, a1.this$)) {}

        jdouble EventEnablingPredicateFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9ada55f07f5a223c]));
        }

        void EventEnablingPredicateFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args);
        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self);
        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data);
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_EventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_EventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_EventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_EventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_EventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventEnablingPredicateFilter, t_EventEnablingPredicateFilter, EventEnablingPredicateFilter);
        PyObject *t_EventEnablingPredicateFilter::wrap_Object(const EventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventEnablingPredicateFilter), &PY_TYPE_DEF(EventEnablingPredicateFilter), module, "EventEnablingPredicateFilter", 0);
        }

        void t_EventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "class_", make_descriptor(EventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_EventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_EventEnablingPredicateFilter::wrap_Object(EventEnablingPredicateFilter(((t_EventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EnablingPredicate a1((jobject) NULL);
          EventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::EnablingPredicate::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EventEnablingPredicateFilter(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventEnablingPredicateFilter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseIonosphericDelayModifier::class$ = NULL;
          jmethodID *PhaseIonosphericDelayModifier::mids$ = NULL;
          bool PhaseIonosphericDelayModifier::live$ = false;

          jclass PhaseIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseIonosphericDelayModifier::PhaseIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          ::java::util::List PhaseIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void PhaseIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void PhaseIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self);
          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseIonosphericDelayModifier, t_PhaseIonosphericDelayModifier, PhaseIonosphericDelayModifier);

          void t_PhaseIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseIonosphericDelayModifier), &PY_TYPE_DEF(PhaseIonosphericDelayModifier), module, "PhaseIonosphericDelayModifier", 0);
          }

          void t_PhaseIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "class_", make_descriptor(PhaseIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseIonosphericDelayModifier::wrap_Object(PhaseIonosphericDelayModifier(((t_PhaseIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            PhaseIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnEvent::class$ = NULL;
          jmethodID *StopOnEvent::mids$ = NULL;
          bool StopOnEvent::live$ = false;

          jclass StopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnEvent::StopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action StopOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args);

          static PyMethodDef t_StopOnEvent__methods_[] = {
            DECLARE_METHOD(t_StopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnEvent)[] = {
            { Py_tp_methods, t_StopOnEvent__methods_ },
            { Py_tp_init, (void *) t_StopOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnEvent, t_StopOnEvent, StopOnEvent);

          void t_StopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnEvent), &PY_TYPE_DEF(StopOnEvent), module, "StopOnEvent", 0);
          }

          void t_StopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "class_", make_descriptor(StopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "wrapfn_", make_descriptor(t_StopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnEvent::initializeClass, 1)))
              return NULL;
            return t_StopOnEvent::wrap_Object(StopOnEvent(((t_StopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            StopOnEvent object((jobject) NULL);

            INT_CALL(object = StopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TDistribution::class$ = NULL;
        jmethodID *TDistribution::mids$ = NULL;
        bool TDistribution::live$ = false;

        jclass TDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_b74f83833fdad017] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
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

        TDistribution::TDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        TDistribution::TDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble TDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble TDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble TDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_b74f83833fdad017]);
        }

        jdouble TDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble TDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble TDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble TDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean TDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble TDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self);
        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data);
        static PyGetSetDef t_TDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_TDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDistribution__methods_[] = {
          DECLARE_METHOD(t_TDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDistribution)[] = {
          { Py_tp_methods, t_TDistribution__methods_ },
          { Py_tp_init, (void *) t_TDistribution_init_ },
          { Py_tp_getset, t_TDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TDistribution, t_TDistribution, TDistribution);

        void t_TDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TDistribution), &PY_TYPE_DEF(TDistribution), module, "TDistribution", 0);
        }

        void t_TDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "class_", make_descriptor(TDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "wrapfn_", make_descriptor(t_TDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDistribution::initializeClass, 1)))
            return NULL;
          return t_TDistribution::wrap_Object(TDistribution(((t_TDistribution *) arg)->object.this$));
        }
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = TDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = TDistribution(a0, a1));
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

        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
