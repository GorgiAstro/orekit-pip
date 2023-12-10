#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder::class$ = NULL;
      jmethodID *WaypointPVBuilder::mids$ = NULL;
      bool WaypointPVBuilder::live$ = false;

      jclass WaypointPVBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_72a7d1b6cac17025] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/WaypointPVBuilder$InterpolationFactory;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_addWaypoint_98c7b225ff22cf1e] = env->getMethodID(cls, "addWaypoint", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_build_903aca6bb4523e29] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_cartesianBuilder_ffde877dfa1e2dd2] = env->getStaticMethodID(cls, "cartesianBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantAfter_a5badd7a0674683f] = env->getMethodID(cls, "constantAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantBefore_a5badd7a0674683f] = env->getMethodID(cls, "constantBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_greatCircleBuilder_ffde877dfa1e2dd2] = env->getStaticMethodID(cls, "greatCircleBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidAfter_a5badd7a0674683f] = env->getMethodID(cls, "invalidAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidBefore_a5badd7a0674683f] = env->getMethodID(cls, "invalidBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_loxodromeBuilder_ffde877dfa1e2dd2] = env->getStaticMethodID(cls, "loxodromeBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_createInitial_f9ed9bcb9bfb760e] = env->getMethodID(cls, "createInitial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_createFinal_f9ed9bcb9bfb760e] = env->getMethodID(cls, "createFinal", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WaypointPVBuilder::WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72a7d1b6cac17025, a0.this$, a1.this$)) {}

      WaypointPVBuilder WaypointPVBuilder::addWaypoint(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_addWaypoint_98c7b225ff22cf1e], a0.this$, a1.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder::build() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_903aca6bb4523e29]));
      }

      WaypointPVBuilder WaypointPVBuilder::cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_cartesianBuilder_ffde877dfa1e2dd2], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::constantAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantAfter_a5badd7a0674683f]));
      }

      WaypointPVBuilder WaypointPVBuilder::constantBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantBefore_a5badd7a0674683f]));
      }

      WaypointPVBuilder WaypointPVBuilder::greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_greatCircleBuilder_ffde877dfa1e2dd2], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidAfter_a5badd7a0674683f]));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidBefore_a5badd7a0674683f]));
      }

      WaypointPVBuilder WaypointPVBuilder::loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_loxodromeBuilder_ffde877dfa1e2dd2], a0.this$));
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
      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args);
      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_WaypointPVBuilder__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, addWaypoint, METH_VARARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, build, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, cartesianBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, greatCircleBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, loxodromeBuilder, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder)[] = {
        { Py_tp_methods, t_WaypointPVBuilder__methods_ },
        { Py_tp_init, (void *) t_WaypointPVBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder, t_WaypointPVBuilder, WaypointPVBuilder);

      void t_WaypointPVBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder), &PY_TYPE_DEF(WaypointPVBuilder), module, "WaypointPVBuilder", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "InterpolationFactory", make_descriptor(&PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory)));
      }

      void t_WaypointPVBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "class_", make_descriptor(WaypointPVBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "wrapfn_", make_descriptor(t_WaypointPVBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder::wrap_Object(WaypointPVBuilder(((t_WaypointPVBuilder *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory a0((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
        WaypointPVBuilder object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = WaypointPVBuilder(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.addWaypoint(a0, a1));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addWaypoint", args);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::cartesianBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cartesianBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::greatCircleBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "greatCircleBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::loxodromeBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "loxodromeBuilder", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *TrapezoidIntegrator::class$ = NULL;
        jmethodID *TrapezoidIntegrator::mids$ = NULL;
        bool TrapezoidIntegrator::live$ = false;
        jint TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass TrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/TrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_1b5e9254fb70ca20] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TrapezoidIntegrator::TrapezoidIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1b5e9254fb70ca20, a0, a1, a2, a3)) {}
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
        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_TrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_TrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrapezoidIntegrator)[] = {
          { Py_tp_methods, t_TrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_TrapezoidIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(TrapezoidIntegrator, t_TrapezoidIntegrator, TrapezoidIntegrator);

        void t_TrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrapezoidIntegrator), &PY_TYPE_DEF(TrapezoidIntegrator), module, "TrapezoidIntegrator", 0);
        }

        void t_TrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "class_", make_descriptor(TrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "wrapfn_", make_descriptor(t_TrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(TrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_TrapezoidIntegrator::wrap_Object(TrapezoidIntegrator(((t_TrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              TrapezoidIntegrator object((jobject) NULL);

              INT_CALL(object = TrapezoidIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger::class$ = NULL;
        jmethodID *EventsLogger::mids$ = NULL;
        bool EventsLogger::live$ = false;

        jclass EventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_0fa09c18fee449d5] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_2afa36052df4765d] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");
            mids$[mid_monitorDetector_ef9e19d11ee60215] = env->getMethodID(cls, "monitorDetector", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/EventDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventsLogger::EventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void EventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_0fa09c18fee449d5]);
        }

        ::java::util::List EventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_2afa36052df4765d]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger::monitorDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_monitorDetector_ef9e19d11ee60215], a0.this$));
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
        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg);
        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data);
        static PyGetSetDef t_EventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger, loggedEvents),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger__methods_[] = {
          DECLARE_METHOD(t_EventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, getLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, monitorDetector, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger)[] = {
          { Py_tp_methods, t_EventsLogger__methods_ },
          { Py_tp_init, (void *) t_EventsLogger_init_ },
          { Py_tp_getset, t_EventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger, t_EventsLogger, EventsLogger);

        void t_EventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger), &PY_TYPE_DEF(EventsLogger), module, "EventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "LoggedEvent", make_descriptor(&PY_TYPE_DEF(EventsLogger$LoggedEvent)));
        }

        void t_EventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "class_", make_descriptor(EventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "wrapfn_", make_descriptor(t_EventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger::initializeClass, 1)))
            return NULL;
          return t_EventsLogger::wrap_Object(EventsLogger(((t_EventsLogger *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds)
        {
          EventsLogger object((jobject) NULL);

          INT_CALL(object = EventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventsLogger$LoggedEvent));
        }

        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.monitorDetector(a0));
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "monitorDetector", arg);
          return NULL;
        }

        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data)
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
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventDetector::class$ = NULL;
        jmethodID *ODEEventDetector::mids$ = NULL;
        bool ODEEventDetector::live$ = false;

        jclass ODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_021b54f582f9e537] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_7247a44d56e4e7e1] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_9a5537b770a5986b] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_4150c30eabb0f330] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble ODEEventDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_021b54f582f9e537], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler ODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_7247a44d56e4e7e1]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval ODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_9a5537b770a5986b]));
        }

        jint ODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver ODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_4150c30eabb0f330]));
        }

        void ODEEventDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
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
      namespace events {
        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg);
        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args);
        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data);
        static PyGetSetDef t_ODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ODEEventDetector, handler),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_ODEEventDetector, solver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_ODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_ODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventDetector)[] = {
          { Py_tp_methods, t_ODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventDetector, t_ODEEventDetector, ODEEventDetector);

        void t_ODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventDetector), &PY_TYPE_DEF(ODEEventDetector), module, "ODEEventDetector", 0);
        }

        void t_ODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "class_", make_descriptor(ODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "wrapfn_", make_descriptor(t_ODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_ODEEventDetector::wrap_Object(ODEEventDetector(((t_ODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args)
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

        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericMappingFunction::class$ = NULL;
          jmethodID *PythonIonosphericMappingFunction::mids$ = NULL;
          bool PythonIonosphericMappingFunction::live$ = false;

          jclass PythonIonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactor_dcbc7ce2902fa136] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a4b1871f4d29e58b] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactor_T_a4b1871f4d29e58b] = env->getMethodID(cls, "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericMappingFunction::PythonIonosphericMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonIonosphericMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonIonosphericMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonIonosphericMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace ionosphere {
          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self);
          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args);
          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data);
          static PyGetSetDef t_PythonIonosphericMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericMappingFunction)[] = {
            { Py_tp_methods, t_PythonIonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericMappingFunction_init_ },
            { Py_tp_getset, t_PythonIonosphericMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericMappingFunction, t_PythonIonosphericMappingFunction, PythonIonosphericMappingFunction);

          void t_PythonIonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericMappingFunction), &PY_TYPE_DEF(PythonIonosphericMappingFunction), module, "PythonIonosphericMappingFunction", 1);
          }

          void t_PythonIonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "class_", make_descriptor(PythonIonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "wrapfn_", make_descriptor(t_PythonIonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactor", "(D)D", (void *) t_PythonIonosphericMappingFunction_mappingFactor0 },
              { "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor1 },
              { "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor_T2 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericMappingFunction_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericMappingFunction::wrap_Object(PythonIonosphericMappingFunction(((t_PythonIonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonIonosphericMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args)
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

          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "d", (double) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("mappingFactor", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor", result);
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

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor_T", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor_T", result);
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

          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data)
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
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *NonNegativeConstraint::class$ = NULL;
        jmethodID *NonNegativeConstraint::mids$ = NULL;
        bool NonNegativeConstraint::live$ = false;

        jclass NonNegativeConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/NonNegativeConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_isRestrictedToNonNegative_b108b35ef48e27bd] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NonNegativeConstraint::NonNegativeConstraint(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

        jboolean NonNegativeConstraint::isRestrictedToNonNegative() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRestrictedToNonNegative_b108b35ef48e27bd]);
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
      namespace linear {
        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self);
        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data);
        static PyGetSetDef t_NonNegativeConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_NonNegativeConstraint, restrictedToNonNegative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NonNegativeConstraint__methods_[] = {
          DECLARE_METHOD(t_NonNegativeConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, isRestrictedToNonNegative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NonNegativeConstraint)[] = {
          { Py_tp_methods, t_NonNegativeConstraint__methods_ },
          { Py_tp_init, (void *) t_NonNegativeConstraint_init_ },
          { Py_tp_getset, t_NonNegativeConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NonNegativeConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NonNegativeConstraint, t_NonNegativeConstraint, NonNegativeConstraint);

        void t_NonNegativeConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(NonNegativeConstraint), &PY_TYPE_DEF(NonNegativeConstraint), module, "NonNegativeConstraint", 0);
        }

        void t_NonNegativeConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "class_", make_descriptor(NonNegativeConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "wrapfn_", make_descriptor(t_NonNegativeConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NonNegativeConstraint::initializeClass, 1)))
            return NULL;
          return t_NonNegativeConstraint::wrap_Object(NonNegativeConstraint(((t_NonNegativeConstraint *) arg)->object.this$));
        }
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NonNegativeConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds)
        {
          jboolean a0;
          NonNegativeConstraint object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = NonNegativeConstraint(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersPhaseModifier::class$ = NULL;
          jmethodID *PhaseCentersPhaseModifier::mids$ = NULL;
          bool PhaseCentersPhaseModifier::live$ = false;

          jclass PhaseCentersPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2ed374ecf8bf34a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersPhaseModifier::PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2ed374ecf8bf34a, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void PhaseCentersPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self);
          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersPhaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersPhaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersPhaseModifier, t_PhaseCentersPhaseModifier, PhaseCentersPhaseModifier);

          void t_PhaseCentersPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersPhaseModifier), &PY_TYPE_DEF(PhaseCentersPhaseModifier), module, "PhaseCentersPhaseModifier", 0);
          }

          void t_PhaseCentersPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "class_", make_descriptor(PhaseCentersPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersPhaseModifier::wrap_Object(PhaseCentersPhaseModifier(((t_PhaseCentersPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricGaussIntegrator::mids$ = NULL;
          bool SymmetricGaussIntegrator::live$ = false;

          jclass SymmetricGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3fca46bb93fd3e69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_integrate_c2aa72fb3bbda68c] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3fca46bb93fd3e69, a0.this$)) {}

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

          jdouble SymmetricGaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_c2aa72fb3bbda68c], a0.this$);
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
          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args);

          static PyMethodDef t_SymmetricGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricGaussIntegrator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::GaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricGaussIntegrator, t_SymmetricGaussIntegrator, SymmetricGaussIntegrator);

          void t_SymmetricGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricGaussIntegrator), &PY_TYPE_DEF(SymmetricGaussIntegrator), module, "SymmetricGaussIntegrator", 0);
          }

          void t_SymmetricGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "class_", make_descriptor(SymmetricGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricGaussIntegrator::wrap_Object(SymmetricGaussIntegrator(((t_SymmetricGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SymmetricGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *SpearmansCorrelation::class$ = NULL;
        jmethodID *SpearmansCorrelation::mids$ = NULL;
        bool SpearmansCorrelation::live$ = false;

        jclass SpearmansCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/SpearmansCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_3f343f3417b14a65] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_init$_6d13e5c4d7288b49] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e9b72403ad502221] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b561c6892e9976f8] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_688b496048ff947b] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getRankCorrelation_e3135829282064ef] = env->getMethodID(cls, "getRankCorrelation", "()Lorg/hipparchus/stat/correlation/PearsonsCorrelation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpearmansCorrelation::SpearmansCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f343f3417b14a65, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::stat::ranking::RankingAlgorithm & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d13e5c4d7288b49, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e9b72403ad502221], a0.this$));
        }

        jdouble SpearmansCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b561c6892e9976f8], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::stat::correlation::PearsonsCorrelation SpearmansCorrelation::getRankCorrelation() const
        {
          return ::org::hipparchus::stat::correlation::PearsonsCorrelation(env->callObjectMethod(this$, mids$[mid_getRankCorrelation_e3135829282064ef]));
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
        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data);
        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data);
        static PyGetSetDef t_SpearmansCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_SpearmansCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_SpearmansCorrelation, rankCorrelation),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpearmansCorrelation__methods_[] = {
          DECLARE_METHOD(t_SpearmansCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getRankCorrelation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpearmansCorrelation)[] = {
          { Py_tp_methods, t_SpearmansCorrelation__methods_ },
          { Py_tp_init, (void *) t_SpearmansCorrelation_init_ },
          { Py_tp_getset, t_SpearmansCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpearmansCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpearmansCorrelation, t_SpearmansCorrelation, SpearmansCorrelation);

        void t_SpearmansCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(SpearmansCorrelation), &PY_TYPE_DEF(SpearmansCorrelation), module, "SpearmansCorrelation", 0);
        }

        void t_SpearmansCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "class_", make_descriptor(SpearmansCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "wrapfn_", make_descriptor(t_SpearmansCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpearmansCorrelation::initializeClass, 1)))
            return NULL;
          return t_SpearmansCorrelation::wrap_Object(SpearmansCorrelation(((t_SpearmansCorrelation *) arg)->object.this$));
        }
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpearmansCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SpearmansCorrelation object((jobject) NULL);

              INT_CALL(object = SpearmansCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::RankingAlgorithm a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::stat::ranking::RankingAlgorithm a1((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SpearmansCorrelation(a0, a1));
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

        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation result((jobject) NULL);
          OBJ_CALL(result = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation value((jobject) NULL);
          OBJ_CALL(value = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFCoordinate::class$ = NULL;
        jmethodID *CPF$CPFCoordinate::mids$ = NULL;
        bool CPF$CPFCoordinate::live$ = false;

        jclass CPF$CPFCoordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFCoordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_58c0d6ad5aca569e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_init$_b1253fc8f46fe144] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_getLeap_570ce0828f81a2c1] = env->getMethodID(cls, "getLeap", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_58c0d6ad5aca569e, a0.this$, a1.this$, a2)) {}

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b1253fc8f46fe144, a0.this$, a1.this$, a2.this$, a3)) {}

        jint CPF$CPFCoordinate::getLeap() const
        {
          return env->callIntMethod(this$, mids$[mid_getLeap_570ce0828f81a2c1]);
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
        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self);
        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data);
        static PyGetSetDef t_CPF$CPFCoordinate__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFCoordinate, leap),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFCoordinate__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFCoordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, getLeap, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFCoordinate)[] = {
          { Py_tp_methods, t_CPF$CPFCoordinate__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFCoordinate_init_ },
          { Py_tp_getset, t_CPF$CPFCoordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFCoordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(CPF$CPFCoordinate, t_CPF$CPFCoordinate, CPF$CPFCoordinate);

        void t_CPF$CPFCoordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFCoordinate), &PY_TYPE_DEF(CPF$CPFCoordinate), module, "CPF$CPFCoordinate", 0);
        }

        void t_CPF$CPFCoordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "class_", make_descriptor(CPF$CPFCoordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "wrapfn_", make_descriptor(t_CPF$CPFCoordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFCoordinate::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFCoordinate::wrap_Object(CPF$CPFCoordinate(((t_CPF$CPFCoordinate *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFCoordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jint a2;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jint a3;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2, a3));
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

        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLeap());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLeap());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethodType::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethodType::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethodType::live$ = false;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFANO_2005 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::CHAN_1997 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::LAAS_2015 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::PATERA_2005 = NULL;

              jclass ShortTermEncounter2DPOCMethodType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getCCSDSType_7f289a825954eeb4] = env->getMethodID(cls, "getCCSDSType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
                  mids$[mid_getMethod_ad865ccede75f81e] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod;");
                  mids$[mid_valueOf_460ca79a6aaacb7b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_values_196f9fc2d202565f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALFANO_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999_MAX = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999_MAX", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  CHAN_1997 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  LAAS_2015 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "LAAS_2015", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  PATERA_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::definitions::PocMethodType ShortTermEncounter2DPOCMethodType::getCCSDSType() const
              {
                return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getCCSDSType_7f289a825954eeb4]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod ShortTermEncounter2DPOCMethodType::getMethod() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod(env->callObjectMethod(this$, mids$[mid_getMethod_ad865ccede75f81e]));
              }

              ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethodType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShortTermEncounter2DPOCMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_460ca79a6aaacb7b], a0.this$));
              }

              JArray< ShortTermEncounter2DPOCMethodType > ShortTermEncounter2DPOCMethodType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShortTermEncounter2DPOCMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_196f9fc2d202565f]));
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
              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethodType__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, cCSDSType),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, method),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethodType__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getCCSDSType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethodType)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethodType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethodType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethodType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethodType, t_ShortTermEncounter2DPOCMethodType, ShortTermEncounter2DPOCMethodType);
              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_Object(const ShortTermEncounter2DPOCMethodType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShortTermEncounter2DPOCMethodType::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethodType), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethodType), module, "ShortTermEncounter2DPOCMethodType", 0);
              }

              void t_ShortTermEncounter2DPOCMethodType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "class_", make_descriptor(ShortTermEncounter2DPOCMethodType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethodType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFANO_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFANO_2005)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999_MAX", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "CHAN_1997", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::CHAN_1997)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "LAAS_2015", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::LAAS_2015)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "PATERA_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::PATERA_2005)));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethodType::wrap_Object(ShortTermEncounter2DPOCMethodType(((t_ShortTermEncounter2DPOCMethodType *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::valueOf(a0));
                  return t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type)
              {
                JArray< ShortTermEncounter2DPOCMethodType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::values());
                return JArray<jobject>(result.this$).wrap(t_ShortTermEncounter2DPOCMethodType::wrap_jobject);
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *RateElementsType::class$ = NULL;
              jmethodID *RateElementsType::mids$ = NULL;
              bool RateElementsType::live$ = false;
              RateElementsType *RateElementsType::ANGVEL = NULL;
              RateElementsType *RateElementsType::EULER_RATE = NULL;
              RateElementsType *RateElementsType::GYRO_BIAS = NULL;
              RateElementsType *RateElementsType::NONE = NULL;
              RateElementsType *RateElementsType::Q_DOT = NULL;

              jclass RateElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/RateElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_2afa36052df4765d] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toAngular_d7352954ca2ee5a0] = env->getMethodID(cls, "toAngular", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/Rotation;I[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                  mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_c1643f89878104a0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_values_35785bce553ea733] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL = new RateElementsType(env->getStaticObjectField(cls, "ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  EULER_RATE = new RateElementsType(env->getStaticObjectField(cls, "EULER_RATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  GYRO_BIAS = new RateElementsType(env->getStaticObjectField(cls, "GYRO_BIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  NONE = new RateElementsType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  Q_DOT = new RateElementsType(env->getStaticObjectField(cls, "Q_DOT", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List RateElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_2afa36052df4765d]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates RateElementsType::toAngular(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, jint a3, const JArray< jdouble > & a4) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_d7352954ca2ee5a0], a0.this$, a1.this$, a2.this$, a3, a4.this$));
              }

              ::java::lang::String RateElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
              }

              RateElementsType RateElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return RateElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c1643f89878104a0], a0.this$));
              }

              JArray< RateElementsType > RateElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< RateElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_35785bce553ea733]));
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
              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self);
              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_RateElementsType_values(PyTypeObject *type);
              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data);
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data);
              static PyGetSetDef t_RateElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_RateElementsType, units),
                DECLARE_GET_FIELD(t_RateElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RateElementsType__methods_[] = {
                DECLARE_METHOD(t_RateElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_RateElementsType, toAngular, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RateElementsType)[] = {
                { Py_tp_methods, t_RateElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_RateElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RateElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(RateElementsType, t_RateElementsType, RateElementsType);
              PyObject *t_RateElementsType::wrap_Object(const RateElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RateElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RateElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(RateElementsType), &PY_TYPE_DEF(RateElementsType), module, "RateElementsType", 0);
              }

              void t_RateElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "class_", make_descriptor(RateElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "wrapfn_", make_descriptor(t_RateElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(RateElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "ANGVEL", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "EULER_RATE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::EULER_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "GYRO_BIAS", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::GYRO_BIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "NONE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::NONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "Q_DOT", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::Q_DOT)));
              }

              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RateElementsType::initializeClass, 1)))
                  return NULL;
                return t_RateElementsType::wrap_Object(RateElementsType(((t_RateElementsType *) arg)->object.this$));
              }
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RateElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
                jint a3;
                JArray< jdouble > a4((jobject) NULL);
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kKkI[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.toAngular(a0, a1, a2, a3, a4));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", args);
                return NULL;
              }

              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(RateElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                RateElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::valueOf(a0));
                  return t_RateElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_RateElementsType_values(PyTypeObject *type)
              {
                JArray< RateElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_RateElementsType::wrap_jobject);
              }
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_filter_ba898b75be14e8ca] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ResidualFilter::ResidualFilter(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          void ResidualFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_ba898b75be14e8ca], a0.this$, a1.this$);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityData::class$ = NULL;
            jmethodID *AbstractSolarActivityData::mids$ = NULL;
            bool AbstractSolarActivityData::live$ = false;

            jclass AbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_95385b40b770812b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_getCache_222ebc0312d0c79f] = env->getMethodID(cls, "getCache", "()Lorg/orekit/utils/GenericTimeStampedCache;");
                mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
                mids$[mid_getUTC_c39031284193adbe] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_getLinearInterpolation_2bcc607c23873da3] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/function/Function;)D");
                mids$[mid_getLinearInterpolation_9828589d31627fd3] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityData$LocalSolarActivity;Ljava/util/function/Function;)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractSolarActivityData::AbstractSolarActivityData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95385b40b770812b, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            ::org::orekit::utils::GenericTimeStampedCache AbstractSolarActivityData::getCache() const
            {
              return ::org::orekit::utils::GenericTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCache_222ebc0312d0c79f]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
            }

            ::java::lang::String AbstractSolarActivityData::getSupportedNames() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityData::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_c39031284193adbe]));
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
            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args);
            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, cache),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, maxDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, supportedNames),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getCache, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getSupportedNames, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getUTC, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityData)[] = {
              { Py_tp_methods, t_AbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_AbstractSolarActivityData_init_ },
              { Py_tp_getset, t_AbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityData, t_AbstractSolarActivityData, AbstractSolarActivityData);
            PyObject *t_AbstractSolarActivityData::wrap_Object(const AbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityData), &PY_TYPE_DEF(AbstractSolarActivityData), module, "AbstractSolarActivityData", 0);
            }

            void t_AbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "class_", make_descriptor(AbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "wrapfn_", make_descriptor(t_AbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityData::wrap_Object(AbstractSolarActivityData(((t_AbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::utils::GenericTimeStampedCache result((jobject) NULL);
              OBJ_CALL(result = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSupportedNames());
              return j2p(result);
            }

            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::utils::GenericTimeStampedCache value((jobject) NULL);
              OBJ_CALL(value = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSupportedNames());
              return j2p(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Point::class$ = NULL;
      jmethodID *Point::mids$ = NULL;
      bool Point::live$ = false;

      jclass Point::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Point");

          mids$ = new jmethodID[max_mid];
          mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
          mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Point::distance(const Point & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
      }

      ::org::hipparchus::geometry::Space Point::getSpace() const
      {
        return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
      }

      jboolean Point::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
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
      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_of_(t_Point *self, PyObject *args);
      static PyObject *t_Point_distance(t_Point *self, PyObject *arg);
      static PyObject *t_Point_getSpace(t_Point *self);
      static PyObject *t_Point_isNaN(t_Point *self);
      static PyObject *t_Point_get__naN(t_Point *self, void *data);
      static PyObject *t_Point_get__space(t_Point *self, void *data);
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data);
      static PyGetSetDef t_Point__fields_[] = {
        DECLARE_GET_FIELD(t_Point, naN),
        DECLARE_GET_FIELD(t_Point, space),
        DECLARE_GET_FIELD(t_Point, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Point__methods_[] = {
        DECLARE_METHOD(t_Point, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, of_, METH_VARARGS),
        DECLARE_METHOD(t_Point, distance, METH_O),
        DECLARE_METHOD(t_Point, getSpace, METH_NOARGS),
        DECLARE_METHOD(t_Point, isNaN, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Point)[] = {
        { Py_tp_methods, t_Point__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Point__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Point)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Point, t_Point, Point);
      PyObject *t_Point::wrap_Object(const Point& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Point::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Point::install(PyObject *module)
      {
        installType(&PY_TYPE(Point), &PY_TYPE_DEF(Point), module, "Point", 0);
      }

      void t_Point::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "class_", make_descriptor(Point::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "wrapfn_", make_descriptor(t_Point::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Point::initializeClass, 1)))
          return NULL;
        return t_Point::wrap_Object(Point(((t_Point *) arg)->object.this$));
      }
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Point::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Point_of_(t_Point *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Point_distance(t_Point *self, PyObject *arg)
      {
        Point a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Point::initializeClass, &a0, &p0, t_Point::parameters_))
        {
          OBJ_CALL(result = self->object.distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance", arg);
        return NULL;
      }

      static PyObject *t_Point_getSpace(t_Point *self)
      {
        ::org::hipparchus::geometry::Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
      }

      static PyObject *t_Point_isNaN(t_Point *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Point_get__naN(t_Point *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Point_get__space(t_Point *self, void *data)
      {
        ::org::hipparchus::geometry::Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnivariateProcessNoise::class$ = NULL;
        jmethodID *UnivariateProcessNoise::mids$ = NULL;
        bool UnivariateProcessNoise::live$ = false;

        jclass UnivariateProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnivariateProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_57fb9f2a151d8eec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_init$_41e7b061c0c712fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getLofCartesianOrbitalParametersEvolution_8524cef336b5710b] = env->getMethodID(cls, "getLofCartesianOrbitalParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getLofType_91870b5ccc8bfe11] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
            mids$[mid_getMeasurementsParametersEvolution_8524cef336b5710b] = env->getMethodID(cls, "getMeasurementsParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagationParametersEvolution_8524cef336b5710b] = env->getMethodID(cls, "getPropagationParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_57fb9f2a151d8eec, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a5) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_41e7b061c0c712fb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getLofCartesianOrbitalParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getLofCartesianOrbitalParametersEvolution_8524cef336b5710b]));
        }

        ::org::orekit::frames::LOFType UnivariateProcessNoise::getLofType() const
        {
          return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_91870b5ccc8bfe11]));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getMeasurementsParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersEvolution_8524cef336b5710b]));
        }

        ::org::orekit::orbits::PositionAngleType UnivariateProcessNoise::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        ::org::hipparchus::linear::RealMatrix UnivariateProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getPropagationParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getPropagationParametersEvolution_8524cef336b5710b]));
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
        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args);
        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyGetSetDef t_UnivariateProcessNoise__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofCartesianOrbitalParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, measurementsParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, positionAngleType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, propagationParametersEvolution),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateProcessNoise__methods_[] = {
          DECLARE_METHOD(t_UnivariateProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofCartesianOrbitalParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getMeasurementsParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPropagationParametersEvolution, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateProcessNoise)[] = {
          { Py_tp_methods, t_UnivariateProcessNoise__methods_ },
          { Py_tp_init, (void *) t_UnivariateProcessNoise_init_ },
          { Py_tp_getset, t_UnivariateProcessNoise__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(UnivariateProcessNoise, t_UnivariateProcessNoise, UnivariateProcessNoise);

        void t_UnivariateProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateProcessNoise), &PY_TYPE_DEF(UnivariateProcessNoise), module, "UnivariateProcessNoise", 0);
        }

        void t_UnivariateProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "class_", make_descriptor(UnivariateProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "wrapfn_", make_descriptor(t_UnivariateProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateProcessNoise::initializeClass, 1)))
            return NULL;
          return t_UnivariateProcessNoise::wrap_Object(UnivariateProcessNoise(((t_UnivariateProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a5((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::frames::LOFType result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }

        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::frames::LOFType value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParameterConfiguration::class$ = NULL;
      jmethodID *ParameterConfiguration::mids$ = NULL;
      bool ParameterConfiguration::live$ = false;

      jclass ParameterConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParameterConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getHP_dff5885c2c873297] = env->getMethodID(cls, "getHP", "()D");
          mids$[mid_getParameterName_11b109bd155ca898] = env->getMethodID(cls, "getParameterName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterConfiguration::getHP() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHP_dff5885c2c873297]);
      }

      ::java::lang::String ParameterConfiguration::getParameterName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParameterName_11b109bd155ca898]));
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
      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data);
      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data);
      static PyGetSetDef t_ParameterConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterConfiguration, hP),
        DECLARE_GET_FIELD(t_ParameterConfiguration, parameterName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterConfiguration__methods_[] = {
        DECLARE_METHOD(t_ParameterConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, getHP, METH_NOARGS),
        DECLARE_METHOD(t_ParameterConfiguration, getParameterName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterConfiguration)[] = {
        { Py_tp_methods, t_ParameterConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterConfiguration, t_ParameterConfiguration, ParameterConfiguration);

      void t_ParameterConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterConfiguration), &PY_TYPE_DEF(ParameterConfiguration), module, "ParameterConfiguration", 0);
      }

      void t_ParameterConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "class_", make_descriptor(ParameterConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "wrapfn_", make_descriptor(t_ParameterConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterConfiguration::initializeClass, 1)))
          return NULL;
        return t_ParameterConfiguration::wrap_Object(ParameterConfiguration(((t_ParameterConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHP());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getParameterName());
        return j2p(result);
      }

      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHP());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameterName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_bb79ca80d85d0a66] = env->getMethodID(cls, "accept", "(ID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleConsumer::accept(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_bb79ca80d85d0a66], a0, a1);
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
            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleConsumer, t_ParseToken$IndexedDoubleConsumer, ParseToken$IndexedDoubleConsumer);

            void t_ParseToken$IndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer), module, "ParseToken$IndexedDoubleConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleConsumer::wrap_Object(ParseToken$IndexedDoubleConsumer(((t_ParseToken$IndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter::mids$ = NULL;
              bool StreamingOcmWriter::live$ = false;

              jclass StreamingOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8e97470ee4b40e88] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)V");
                  mids$[mid_init$_824428e8b1c4caea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Z)V");
                  mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newBlock_0b234cb422df0ede] = env->getMethodID(cls, "newBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e97470ee4b40e88, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_824428e8b1c4caea, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              void StreamingOcmWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter StreamingOcmWriter::newBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter(env->callObjectMethod(this$, mids$[mid_newBlock_0b234cb422df0ede]));
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
              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self);
              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self);

              static PyMethodDef t_StreamingOcmWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOcmWriter, newBlock, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter, t_StreamingOcmWriter, StreamingOcmWriter);

              void t_StreamingOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter), &PY_TYPE_DEF(StreamingOcmWriter), module, "StreamingOcmWriter", 0);
              }

              void t_StreamingOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "class_", make_descriptor(StreamingOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter::wrap_Object(StreamingOcmWriter(((t_StreamingOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    jboolean a5;
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_StreamingOcmWriter$BlockWriter::wrap_Object(result);
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
#include "org/orekit/gnss/DOP.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOP::class$ = NULL;
      jmethodID *DOP::mids$ = NULL;
      bool DOP::live$ = false;

      jclass DOP::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOP");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5e983cb1d6a8b6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;IDDDDD)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGdop_dff5885c2c873297] = env->getMethodID(cls, "getGdop", "()D");
          mids$[mid_getGnssNb_570ce0828f81a2c1] = env->getMethodID(cls, "getGnssNb", "()I");
          mids$[mid_getHdop_dff5885c2c873297] = env->getMethodID(cls, "getHdop", "()D");
          mids$[mid_getLocation_82d0a9bcd06489bb] = env->getMethodID(cls, "getLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPdop_dff5885c2c873297] = env->getMethodID(cls, "getPdop", "()D");
          mids$[mid_getTdop_dff5885c2c873297] = env->getMethodID(cls, "getTdop", "()D");
          mids$[mid_getVdop_dff5885c2c873297] = env->getMethodID(cls, "getVdop", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DOP::DOP(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5e983cb1d6a8b6c, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

      ::org::orekit::time::AbsoluteDate DOP::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble DOP::getGdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGdop_dff5885c2c873297]);
      }

      jint DOP::getGnssNb() const
      {
        return env->callIntMethod(this$, mids$[mid_getGnssNb_570ce0828f81a2c1]);
      }

      jdouble DOP::getHdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHdop_dff5885c2c873297]);
      }

      ::org::orekit::bodies::GeodeticPoint DOP::getLocation() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getLocation_82d0a9bcd06489bb]));
      }

      jdouble DOP::getPdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPdop_dff5885c2c873297]);
      }

      jdouble DOP::getTdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdop_dff5885c2c873297]);
      }

      jdouble DOP::getVdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdop_dff5885c2c873297]);
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
      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DOP_getDate(t_DOP *self);
      static PyObject *t_DOP_getGdop(t_DOP *self);
      static PyObject *t_DOP_getGnssNb(t_DOP *self);
      static PyObject *t_DOP_getHdop(t_DOP *self);
      static PyObject *t_DOP_getLocation(t_DOP *self);
      static PyObject *t_DOP_getPdop(t_DOP *self);
      static PyObject *t_DOP_getTdop(t_DOP *self);
      static PyObject *t_DOP_getVdop(t_DOP *self);
      static PyObject *t_DOP_get__date(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data);
      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__location(t_DOP *self, void *data);
      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data);
      static PyGetSetDef t_DOP__fields_[] = {
        DECLARE_GET_FIELD(t_DOP, date),
        DECLARE_GET_FIELD(t_DOP, gdop),
        DECLARE_GET_FIELD(t_DOP, gnssNb),
        DECLARE_GET_FIELD(t_DOP, hdop),
        DECLARE_GET_FIELD(t_DOP, location),
        DECLARE_GET_FIELD(t_DOP, pdop),
        DECLARE_GET_FIELD(t_DOP, tdop),
        DECLARE_GET_FIELD(t_DOP, vdop),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOP__methods_[] = {
        DECLARE_METHOD(t_DOP, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGnssNb, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getHdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getLocation, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getPdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getTdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getVdop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOP)[] = {
        { Py_tp_methods, t_DOP__methods_ },
        { Py_tp_init, (void *) t_DOP_init_ },
        { Py_tp_getset, t_DOP__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOP)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOP, t_DOP, DOP);

      void t_DOP::install(PyObject *module)
      {
        installType(&PY_TYPE(DOP), &PY_TYPE_DEF(DOP), module, "DOP", 0);
      }

      void t_DOP::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "class_", make_descriptor(DOP::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "wrapfn_", make_descriptor(t_DOP::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOP::initializeClass, 1)))
          return NULL;
        return t_DOP::wrap_Object(DOP(((t_DOP *) arg)->object.this$));
      }
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOP::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        DOP object((jobject) NULL);

        if (!parseArgs(args, "kkIDDDDD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = DOP(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DOP_getDate(t_DOP *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DOP_getGdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getGnssNb(t_DOP *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGnssNb());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DOP_getHdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getLocation(t_DOP *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_DOP_getPdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getTdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getVdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_get__date(t_DOP *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGnssNb());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__location(t_DOP *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdop());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnits::class$ = NULL;
            jmethodID *RangeUnits::mids$ = NULL;
            bool RangeUnits::live$ = false;
            RangeUnits *RangeUnits::RU = NULL;
            RangeUnits *RangeUnits::km = NULL;
            RangeUnits *RangeUnits::s = NULL;

            jclass RangeUnits::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnits");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_2a634a8ba66e51d3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_values_d863b9b9ef88708a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RU = new RangeUnits(env->getStaticObjectField(cls, "RU", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                km = new RangeUnits(env->getStaticObjectField(cls, "km", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                s = new RangeUnits(env->getStaticObjectField(cls, "s", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeUnits RangeUnits::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeUnits(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2a634a8ba66e51d3], a0.this$));
            }

            JArray< RangeUnits > RangeUnits::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeUnits >(env->callStaticObjectMethod(cls, mids$[mid_values_d863b9b9ef88708a]));
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
            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args);
            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeUnits_values(PyTypeObject *type);
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data);
            static PyGetSetDef t_RangeUnits__fields_[] = {
              DECLARE_GET_FIELD(t_RangeUnits, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeUnits__methods_[] = {
              DECLARE_METHOD(t_RangeUnits, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnits, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnits)[] = {
              { Py_tp_methods, t_RangeUnits__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeUnits__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnits)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeUnits, t_RangeUnits, RangeUnits);
            PyObject *t_RangeUnits::wrap_Object(const RangeUnits& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeUnits::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeUnits::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnits), &PY_TYPE_DEF(RangeUnits), module, "RangeUnits", 0);
            }

            void t_RangeUnits::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "class_", make_descriptor(RangeUnits::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "wrapfn_", make_descriptor(t_RangeUnits::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeUnits::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "RU", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::RU)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "km", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::km)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "s", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::s)));
            }

            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnits::initializeClass, 1)))
                return NULL;
              return t_RangeUnits::wrap_Object(RangeUnits(((t_RangeUnits *) arg)->object.this$));
            }
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnits::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeUnits result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::valueOf(a0));
                return t_RangeUnits::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeUnits_values(PyTypeObject *type)
            {
              JArray< RangeUnits > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::values());
              return JArray<jobject>(result.this$).wrap(t_RangeUnits::wrap_jobject);
            }
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data)
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
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedDCBS::class$ = NULL;
        jmethodID *AppliedDCBS::mids$ = NULL;
        bool AppliedDCBS::live$ = false;

        jclass AppliedDCBS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedDCBS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dcd2b12d07487aeb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgDCBS_11b109bd155ca898] = env->getMethodID(cls, "getProgDCBS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourceDCBS_11b109bd155ca898] = env->getMethodID(cls, "getSourceDCBS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedDCBS::AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcd2b12d07487aeb, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedDCBS::getProgDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgDCBS_11b109bd155ca898]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedDCBS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
        }

        ::java::lang::String AppliedDCBS::getSourceDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceDCBS_11b109bd155ca898]));
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
        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data);
        static PyGetSetDef t_AppliedDCBS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedDCBS, progDCBS),
          DECLARE_GET_FIELD(t_AppliedDCBS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedDCBS, sourceDCBS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedDCBS__methods_[] = {
          DECLARE_METHOD(t_AppliedDCBS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, getProgDCBS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSourceDCBS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedDCBS)[] = {
          { Py_tp_methods, t_AppliedDCBS__methods_ },
          { Py_tp_init, (void *) t_AppliedDCBS_init_ },
          { Py_tp_getset, t_AppliedDCBS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedDCBS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedDCBS, t_AppliedDCBS, AppliedDCBS);

        void t_AppliedDCBS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedDCBS), &PY_TYPE_DEF(AppliedDCBS), module, "AppliedDCBS", 0);
        }

        void t_AppliedDCBS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "class_", make_descriptor(AppliedDCBS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "wrapfn_", make_descriptor(t_AppliedDCBS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedDCBS::initializeClass, 1)))
            return NULL;
          return t_AppliedDCBS::wrap_Object(AppliedDCBS(((t_AppliedDCBS *) arg)->object.this$));
        }
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedDCBS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedDCBS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedDCBS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgDCBS());
          return j2p(value);
        }

        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceDCBS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataFormat::class$ = NULL;
          jmethodID *DataFormat::mids$ = NULL;
          bool DataFormat::live$ = false;
          DataFormat *DataFormat::BINEX = NULL;
          DataFormat *DataFormat::CMR = NULL;
          DataFormat *DataFormat::CMR_PLUS = NULL;
          DataFormat *DataFormat::RAW = NULL;
          DataFormat *DataFormat::RINEX = NULL;
          DataFormat *DataFormat::RTCA = NULL;
          DataFormat *DataFormat::RTCM_2 = NULL;
          DataFormat *DataFormat::RTCM_3 = NULL;
          DataFormat *DataFormat::RTCM_SAPOS = NULL;
          DataFormat *DataFormat::SAPOS_ADV = NULL;
          DataFormat *DataFormat::SP3 = NULL;

          jclass DataFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataFormat_ef2f6c4761c1f455] = env->getStaticMethodID(cls, "getDataFormat", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_valueOf_ef2f6c4761c1f455] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_values_e26a7c71339c0a47] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/DataFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BINEX = new DataFormat(env->getStaticObjectField(cls, "BINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR = new DataFormat(env->getStaticObjectField(cls, "CMR", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR_PLUS = new DataFormat(env->getStaticObjectField(cls, "CMR_PLUS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RAW = new DataFormat(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RINEX = new DataFormat(env->getStaticObjectField(cls, "RINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCA = new DataFormat(env->getStaticObjectField(cls, "RTCA", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_2 = new DataFormat(env->getStaticObjectField(cls, "RTCM_2", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_3 = new DataFormat(env->getStaticObjectField(cls, "RTCM_3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_SAPOS = new DataFormat(env->getStaticObjectField(cls, "RTCM_SAPOS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SAPOS_ADV = new DataFormat(env->getStaticObjectField(cls, "SAPOS_ADV", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SP3 = new DataFormat(env->getStaticObjectField(cls, "SP3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataFormat DataFormat::getDataFormat(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_getDataFormat_ef2f6c4761c1f455], a0.this$));
          }

          DataFormat DataFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ef2f6c4761c1f455], a0.this$));
          }

          JArray< DataFormat > DataFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_e26a7c71339c0a47]));
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
          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args);
          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataFormat_values(PyTypeObject *type);
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data);
          static PyGetSetDef t_DataFormat__fields_[] = {
            DECLARE_GET_FIELD(t_DataFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataFormat__methods_[] = {
            DECLARE_METHOD(t_DataFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataFormat, getDataFormat, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataFormat)[] = {
            { Py_tp_methods, t_DataFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataFormat, t_DataFormat, DataFormat);
          PyObject *t_DataFormat::wrap_Object(const DataFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(DataFormat), &PY_TYPE_DEF(DataFormat), module, "DataFormat", 0);
          }

          void t_DataFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "class_", make_descriptor(DataFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "wrapfn_", make_descriptor(t_DataFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "BINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::BINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR_PLUS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR_PLUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RAW", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RAW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCA", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_2", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_SAPOS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_SAPOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SAPOS_ADV", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SAPOS_ADV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SP3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SP3)));
          }

          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataFormat::initializeClass, 1)))
              return NULL;
            return t_DataFormat::wrap_Object(DataFormat(((t_DataFormat *) arg)->object.this$));
          }
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::getDataFormat(a0));
              return t_DataFormat::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDataFormat", arg);
            return NULL;
          }

          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::valueOf(a0));
              return t_DataFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataFormat_values(PyTypeObject *type)
          {
            JArray< DataFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::values());
            return JArray<jobject>(result.this$).wrap(t_DataFormat::wrap_jobject);
          }
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data)
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
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureKey::class$ = NULL;
          jmethodID *KvnStructureKey::mids$ = NULL;
          bool KvnStructureKey::live$ = false;
          KvnStructureKey *KvnStructureKey::DATA = NULL;
          KvnStructureKey *KvnStructureKey::META = NULL;

          jclass KvnStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_f1d9f5026ab4c64c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_a5aab8ea9cfbd5b8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/KvnStructureKey;");
              mids$[mid_values_7bce4aca2e21099b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/KvnStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATA = new KvnStructureKey(env->getStaticObjectField(cls, "DATA", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              META = new KvnStructureKey(env->getStaticObjectField(cls, "META", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean KvnStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_f1d9f5026ab4c64c], a0.this$, a1.this$);
          }

          KvnStructureKey KvnStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return KvnStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a5aab8ea9cfbd5b8], a0.this$));
          }

          JArray< KvnStructureKey > KvnStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< KvnStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7bce4aca2e21099b]));
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
          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_KvnStructureKey_values(PyTypeObject *type);
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data);
          static PyGetSetDef t_KvnStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_KvnStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KvnStructureKey__methods_[] = {
            DECLARE_METHOD(t_KvnStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureKey)[] = {
            { Py_tp_methods, t_KvnStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_KvnStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(KvnStructureKey, t_KvnStructureKey, KvnStructureKey);
          PyObject *t_KvnStructureKey::wrap_Object(const KvnStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_KvnStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_KvnStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureKey), &PY_TYPE_DEF(KvnStructureKey), module, "KvnStructureKey", 0);
          }

          void t_KvnStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "class_", make_descriptor(KvnStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "wrapfn_", make_descriptor(t_KvnStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(KvnStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "DATA", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::DATA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "META", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::META)));
          }

          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureKey::initializeClass, 1)))
              return NULL;
            return t_KvnStructureKey::wrap_Object(KvnStructureKey(((t_KvnStructureKey *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            KvnStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::valueOf(a0));
              return t_KvnStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_KvnStructureKey_values(PyTypeObject *type)
          {
            JArray< KvnStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_KvnStructureKey::wrap_jobject);
          }
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data)
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
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldEllipse::class$ = NULL;
      jmethodID *FieldEllipse::mids$ = NULL;
      bool FieldEllipse::live$ = false;

      jclass FieldEllipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldEllipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a80d078788493a03] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_eba8e72a22c984ac] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCenter_716f50c86ffc8da7] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCenterOfCurvature_516439063b85838d] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_716f50c86ffc8da7] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getV_716f50c86ffc8da7] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointAt_e0e563985265c470] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_projectToEllipse_2c604bfeb0a28a2f] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_projectToEllipse_516439063b85838d] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toPlane_92f5981810110281] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toSpace_cd76bd749d804094] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEllipse::FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a80d078788493a03, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getB() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_eba8e72a22c984ac]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCenter_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_516439063b85838d], a0.this$));
      }

      ::org::orekit::frames::Frame FieldEllipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getU_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getV_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_e0e563985265c470], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldEllipse::projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_2c604bfeb0a28a2f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_516439063b85838d], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_toPlane_92f5981810110281], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toSpace_cd76bd749d804094], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args);
      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args);
      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data);
      static PyGetSetDef t_FieldEllipse__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEllipse, a),
        DECLARE_GET_FIELD(t_FieldEllipse, b),
        DECLARE_GET_FIELD(t_FieldEllipse, center),
        DECLARE_GET_FIELD(t_FieldEllipse, frame),
        DECLARE_GET_FIELD(t_FieldEllipse, u),
        DECLARE_GET_FIELD(t_FieldEllipse, v),
        DECLARE_GET_FIELD(t_FieldEllipse, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEllipse__methods_[] = {
        DECLARE_METHOD(t_FieldEllipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_FieldEllipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, pointAt, METH_O),
        DECLARE_METHOD(t_FieldEllipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, toPlane, METH_O),
        DECLARE_METHOD(t_FieldEllipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEllipse)[] = {
        { Py_tp_methods, t_FieldEllipse__methods_ },
        { Py_tp_init, (void *) t_FieldEllipse_init_ },
        { Py_tp_getset, t_FieldEllipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEllipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEllipse, t_FieldEllipse, FieldEllipse);
      PyObject *t_FieldEllipse::wrap_Object(const FieldEllipse& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEllipse::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEllipse::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEllipse), &PY_TYPE_DEF(FieldEllipse), module, "FieldEllipse", 0);
      }

      void t_FieldEllipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "class_", make_descriptor(FieldEllipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "wrapfn_", make_descriptor(t_FieldEllipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEllipse::initializeClass, 1)))
          return NULL;
        return t_FieldEllipse::wrap_Object(FieldEllipse(((t_FieldEllipse *) arg)->object.this$));
      }
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEllipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        FieldEllipse object((jobject) NULL);

        if (!parseArgs(args, "KKKKKk", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
        {
          INT_CALL(object = FieldEllipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getB());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getB());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *OutlineExtractor::class$ = NULL;
          jmethodID *OutlineExtractor::mids$ = NULL;
          bool OutlineExtractor::live$ = false;

          jclass OutlineExtractor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/OutlineExtractor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f7d2a24ef2ff591] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getOutline_2bc7c758fa46bc49] = env->getMethodID(cls, "getOutline", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;)[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlineExtractor::OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f7d2a24ef2ff591, a0.this$, a1.this$)) {}

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > OutlineExtractor::getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet & a0) const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getOutline_2bc7c758fa46bc49], a0.this$));
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
          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg);

          static PyMethodDef t_OutlineExtractor__methods_[] = {
            DECLARE_METHOD(t_OutlineExtractor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, getOutline, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlineExtractor)[] = {
            { Py_tp_methods, t_OutlineExtractor__methods_ },
            { Py_tp_init, (void *) t_OutlineExtractor_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlineExtractor)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlineExtractor, t_OutlineExtractor, OutlineExtractor);

          void t_OutlineExtractor::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlineExtractor), &PY_TYPE_DEF(OutlineExtractor), module, "OutlineExtractor", 0);
          }

          void t_OutlineExtractor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "class_", make_descriptor(OutlineExtractor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "wrapfn_", make_descriptor(t_OutlineExtractor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlineExtractor::initializeClass, 1)))
              return NULL;
            return t_OutlineExtractor::wrap_Object(OutlineExtractor(((t_OutlineExtractor *) arg)->object.this$));
          }
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlineExtractor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OutlineExtractor object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OutlineExtractor(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::parameters_))
            {
              OBJ_CALL(result = self->object.getOutline(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "getOutline", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic$Parametric::class$ = NULL;
        jmethodID *Logistic$Parametric::mids$ = NULL;
        bool Logistic$Parametric::live$ = false;

        jclass Logistic$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic$Parametric::Logistic$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > Logistic$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble Logistic$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args);
        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args);

        static PyMethodDef t_Logistic$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logistic$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logistic$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic$Parametric)[] = {
          { Py_tp_methods, t_Logistic$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logistic$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic$Parametric, t_Logistic$Parametric, Logistic$Parametric);

        void t_Logistic$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic$Parametric), &PY_TYPE_DEF(Logistic$Parametric), module, "Logistic$Parametric", 0);
        }

        void t_Logistic$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "class_", make_descriptor(Logistic$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "wrapfn_", make_descriptor(t_Logistic$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logistic$Parametric::wrap_Object(Logistic$Parametric(((t_Logistic$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logistic$Parametric object((jobject) NULL);

          INT_CALL(object = Logistic$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args)
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

        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *EquinoctialOrbit::class$ = NULL;
      jmethodID *EquinoctialOrbit::mids$ = NULL;
      bool EquinoctialOrbit::live$ = false;

      jclass EquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/EquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7753eee512deef45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_17efd10b0f16bc37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_e66c4b38c78e70c5] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6d75b48985bb90e6] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_8c19bdea212fe058] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_8c19bdea212fe058] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_dff5885c2c873297] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_dff5885c2c873297] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getL_2152aeb78bde0282] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLDot_2152aeb78bde0282] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_dff5885c2c873297] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_dff5885c2c873297] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8c19bdea212fe058] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_28c4204b9c4d2027] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_shiftedBy_447d49588af14029] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8c19bdea212fe058] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_d52645e0d4c07563] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7753eee512deef45, a0.this$, a1.this$, a2)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17efd10b0f16bc37, a0.this$, a1.this$, a2.this$, a3)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e66c4b38c78e70c5, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6d75b48985bb90e6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void EquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2365c7dd61a1cda], a0.this$, a1, a2.this$);
      }

      jdouble EquinoctialOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_8c19bdea212fe058], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_8c19bdea212fe058], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::PositionAngleType EquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      jdouble EquinoctialOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_2152aeb78bde0282], a0.this$);
      }

      jdouble EquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_2152aeb78bde0282], a0.this$);
      }

      jdouble EquinoctialOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble EquinoctialOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::OrbitType EquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean EquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      jdouble EquinoctialOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_8c19bdea212fe058], a0, a1, a2);
      }

      EquinoctialOrbit EquinoctialOrbit::removeRates() const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_28c4204b9c4d2027]));
      }

      EquinoctialOrbit EquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_447d49588af14029], a0));
      }

      ::java::lang::String EquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      jdouble EquinoctialOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_8c19bdea212fe058], a0, a1, a2);
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
      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data);
      static PyGetSetDef t_EquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_EquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_EquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquinoctialOrbit)[] = {
        { Py_tp_methods, t_EquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_EquinoctialOrbit_init_ },
        { Py_tp_getset, t_EquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(EquinoctialOrbit, t_EquinoctialOrbit, EquinoctialOrbit);

      void t_EquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(EquinoctialOrbit), &PY_TYPE_DEF(EquinoctialOrbit), module, "EquinoctialOrbit", 0);
      }

      void t_EquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "class_", make_descriptor(EquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "wrapfn_", make_descriptor(t_EquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_EquinoctialOrbit::wrap_Object(EquinoctialOrbit(((t_EquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = EquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3));
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
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self)
      {
        EquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_EquinoctialOrbit::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble a0;
        EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_58c777cdeb3bd479] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics NormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_58c777cdeb3bd479], a0.this$));
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider, t_NormalizedSphericalHarmonicsProvider, NormalizedSphericalHarmonicsProvider);

          void t_NormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider), module, "NormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "NormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)));
          }

          void t_NormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider::wrap_Object(NormalizedSphericalHarmonicsProvider(((t_NormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg)
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
        }
      }
    }
  }
}
