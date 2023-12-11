#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *InterSatDirectViewDetector::class$ = NULL;
        jmethodID *InterSatDirectViewDetector::mids$ = NULL;
        bool InterSatDirectViewDetector::live$ = false;

        jclass InterSatDirectViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/InterSatDirectViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3ce4e2f1b1430b52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getCentralBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getCentralBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getSecondary_dec199e86bf037eb] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getSkimmingAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getSkimmingAltitude", "()D");
            mids$[mid_withSkimmingAltitude_d29130d5933edbf5] = env->getMethodID(cls, "withSkimmingAltitude", "(D)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");
            mids$[mid_create_1fdcc4c399e43d59] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatDirectViewDetector::InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3ce4e2f1b1430b52, a0.this$, a1.this$)) {}

        jdouble InterSatDirectViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid InterSatDirectViewDetector::getCentralBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getCentralBody_0c55bd1adf955c4c]));
        }

        ::org::orekit::utils::PVCoordinatesProvider InterSatDirectViewDetector::getSecondary() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondary_dec199e86bf037eb]));
        }

        jdouble InterSatDirectViewDetector::getSkimmingAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkimmingAltitude_557b8123390d8d0c]);
        }

        InterSatDirectViewDetector InterSatDirectViewDetector::withSkimmingAltitude(jdouble a0) const
        {
          return InterSatDirectViewDetector(env->callObjectMethod(this$, mids$[mid_withSkimmingAltitude_d29130d5933edbf5], a0));
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
        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args);
        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args);
        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data);
        static PyGetSetDef t_InterSatDirectViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, centralBody),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, secondary),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, skimmingAltitude),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatDirectViewDetector__methods_[] = {
          DECLARE_METHOD(t_InterSatDirectViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getCentralBody, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSecondary, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSkimmingAltitude, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, withSkimmingAltitude, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatDirectViewDetector)[] = {
          { Py_tp_methods, t_InterSatDirectViewDetector__methods_ },
          { Py_tp_init, (void *) t_InterSatDirectViewDetector_init_ },
          { Py_tp_getset, t_InterSatDirectViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatDirectViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(InterSatDirectViewDetector, t_InterSatDirectViewDetector, InterSatDirectViewDetector);
        PyObject *t_InterSatDirectViewDetector::wrap_Object(const InterSatDirectViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatDirectViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatDirectViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatDirectViewDetector), &PY_TYPE_DEF(InterSatDirectViewDetector), module, "InterSatDirectViewDetector", 0);
        }

        void t_InterSatDirectViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "class_", make_descriptor(InterSatDirectViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "wrapfn_", make_descriptor(t_InterSatDirectViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatDirectViewDetector::initializeClass, 1)))
            return NULL;
          return t_InterSatDirectViewDetector::wrap_Object(InterSatDirectViewDetector(((t_InterSatDirectViewDetector *) arg)->object.this$));
        }
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatDirectViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          InterSatDirectViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InterSatDirectViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(InterSatDirectViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(InterSatDirectViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg)
        {
          jdouble a0;
          InterSatDirectViewDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withSkimmingAltitude(a0));
            return t_InterSatDirectViewDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSkimmingAltitude", arg);
          return NULL;
        }
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/Month.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateComponents::class$ = NULL;
      jmethodID *DateComponents::mids$ = NULL;
      bool DateComponents::live$ = false;
      DateComponents *DateComponents::BEIDOU_EPOCH = NULL;
      DateComponents *DateComponents::CCSDS_EPOCH = NULL;
      DateComponents *DateComponents::FIFTIES_EPOCH = NULL;
      DateComponents *DateComponents::GALILEO_EPOCH = NULL;
      DateComponents *DateComponents::GLONASS_EPOCH = NULL;
      DateComponents *DateComponents::GPS_EPOCH = NULL;
      DateComponents *DateComponents::IRNSS_EPOCH = NULL;
      DateComponents *DateComponents::J2000_EPOCH = NULL;
      DateComponents *DateComponents::JAVA_EPOCH = NULL;
      DateComponents *DateComponents::JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::MAX_EPOCH = NULL;
      DateComponents *DateComponents::MIN_EPOCH = NULL;
      DateComponents *DateComponents::MODIFIED_JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::QZSS_EPOCH = NULL;

      jclass DateComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2cfd6eaa6758b3d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_c01975213386f6a3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_compareTo_5817c4aa2dc92c4a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateComponents;)I");
          mids$[mid_createFromWeekComponents_e03baeb1c97a53a6] = env->getStaticMethodID(cls, "createFromWeekComponents", "(III)Lorg/orekit/time/DateComponents;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCalendarWeek_412668abc8d889e9] = env->getMethodID(cls, "getCalendarWeek", "()I");
          mids$[mid_getDay_412668abc8d889e9] = env->getMethodID(cls, "getDay", "()I");
          mids$[mid_getDayOfWeek_412668abc8d889e9] = env->getMethodID(cls, "getDayOfWeek", "()I");
          mids$[mid_getDayOfYear_412668abc8d889e9] = env->getMethodID(cls, "getDayOfYear", "()I");
          mids$[mid_getJ2000Day_412668abc8d889e9] = env->getMethodID(cls, "getJ2000Day", "()I");
          mids$[mid_getMJD_412668abc8d889e9] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getMonth_412668abc8d889e9] = env->getMethodID(cls, "getMonth", "()I");
          mids$[mid_getMonthEnum_a41927702314cdb7] = env->getMethodID(cls, "getMonthEnum", "()Lorg/orekit/time/Month;");
          mids$[mid_getYear_412668abc8d889e9] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseDate_81fc007c2df84b76] = env->getStaticMethodID(cls, "parseDate", "(Ljava/lang/String;)Lorg/orekit/time/DateComponents;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU_EPOCH = new DateComponents(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/DateComponents;"));
          CCSDS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          FIFTIES_EPOCH = new DateComponents(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GALILEO_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GLONASS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GPS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          IRNSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          J2000_EPOCH = new DateComponents(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JAVA_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MAX_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MAX_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MIN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MIN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MODIFIED_JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          QZSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateComponents::DateComponents(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      DateComponents::DateComponents(const DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cfd6eaa6758b3d2, a0.this$, a1)) {}

      DateComponents::DateComponents(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      DateComponents::DateComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c01975213386f6a3, a0, a1.this$, a2)) {}

      DateComponents::DateComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

      jint DateComponents::compareTo(const DateComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_5817c4aa2dc92c4a], a0.this$);
      }

      DateComponents DateComponents::createFromWeekComponents(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_createFromWeekComponents_e03baeb1c97a53a6], a0, a1, a2));
      }

      jboolean DateComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint DateComponents::getCalendarWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getCalendarWeek_412668abc8d889e9]);
      }

      jint DateComponents::getDay() const
      {
        return env->callIntMethod(this$, mids$[mid_getDay_412668abc8d889e9]);
      }

      jint DateComponents::getDayOfWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfWeek_412668abc8d889e9]);
      }

      jint DateComponents::getDayOfYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfYear_412668abc8d889e9]);
      }

      jint DateComponents::getJ2000Day() const
      {
        return env->callIntMethod(this$, mids$[mid_getJ2000Day_412668abc8d889e9]);
      }

      jint DateComponents::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_412668abc8d889e9]);
      }

      jint DateComponents::getMonth() const
      {
        return env->callIntMethod(this$, mids$[mid_getMonth_412668abc8d889e9]);
      }

      ::org::orekit::time::Month DateComponents::getMonthEnum() const
      {
        return ::org::orekit::time::Month(env->callObjectMethod(this$, mids$[mid_getMonthEnum_a41927702314cdb7]));
      }

      jint DateComponents::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_412668abc8d889e9]);
      }

      jint DateComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      DateComponents DateComponents::parseDate(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDate_81fc007c2df84b76], a0.this$));
      }

      ::java::lang::String DateComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg);
      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args);
      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDay(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self);
      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self);
      static PyObject *t_DateComponents_getMJD(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonth(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self);
      static PyObject *t_DateComponents_getYear(t_DateComponents *self);
      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data);
      static PyGetSetDef t_DateComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateComponents, calendarWeek),
        DECLARE_GET_FIELD(t_DateComponents, day),
        DECLARE_GET_FIELD(t_DateComponents, dayOfWeek),
        DECLARE_GET_FIELD(t_DateComponents, dayOfYear),
        DECLARE_GET_FIELD(t_DateComponents, j2000Day),
        DECLARE_GET_FIELD(t_DateComponents, mJD),
        DECLARE_GET_FIELD(t_DateComponents, month),
        DECLARE_GET_FIELD(t_DateComponents, monthEnum),
        DECLARE_GET_FIELD(t_DateComponents, year),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateComponents__methods_[] = {
        DECLARE_METHOD(t_DateComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateComponents, createFromWeekComponents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, getCalendarWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDay, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getJ2000Day, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonth, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonthEnum, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, parseDate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateComponents)[] = {
        { Py_tp_methods, t_DateComponents__methods_ },
        { Py_tp_init, (void *) t_DateComponents_init_ },
        { Py_tp_getset, t_DateComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateComponents, t_DateComponents, DateComponents);

      void t_DateComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateComponents), &PY_TYPE_DEF(DateComponents), module, "DateComponents", 0);
      }

      void t_DateComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "class_", make_descriptor(DateComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "wrapfn_", make_descriptor(t_DateComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "BEIDOU_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "CCSDS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "FIFTIES_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GALILEO_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GLONASS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GPS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "IRNSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "J2000_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JAVA_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MAX_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MAX_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MIN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MIN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "QZSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::QZSS_EPOCH)));
      }

      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateComponents::initializeClass, 1)))
          return NULL;
        return t_DateComponents::wrap_Object(DateComponents(((t_DateComponents *) arg)->object.this$));
      }
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DateComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            DateComponents a0((jobject) NULL);
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "kI", DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
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

      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg)
      {
        DateComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        DateComponents result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::createFromWeekComponents(a0, a1, a2));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromWeekComponents", args);
        return NULL;
      }

      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCalendarWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDay(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDay());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getJ2000Day());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMJD(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonth(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMonth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self)
      {
        ::org::orekit::time::Month result((jobject) NULL);
        OBJ_CALL(result = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(result);
      }

      static PyObject *t_DateComponents_getYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::parseDate(a0));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDate", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCalendarWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDay());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfYear());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getJ2000Day());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMonth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data)
      {
        ::org::orekit::time::Month value((jobject) NULL);
        OBJ_CALL(value = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(value);
      }

      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateOptimizer::class$ = NULL;
        jmethodID *UnivariateOptimizer::mids$ = NULL;
        bool UnivariateOptimizer::live$ = false;

        jclass UnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getGoalType_bd7f7e2869c755fb] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_557b8123390d8d0c] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_optimize_749f41c4a1b59e75] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_computeObjectiveValue_7e960cd6eee376d8] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::scalar::GoalType UnivariateOptimizer::getGoalType() const
        {
          return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_bd7f7e2869c755fb]));
        }

        jdouble UnivariateOptimizer::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble UnivariateOptimizer::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jdouble UnivariateOptimizer::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_557b8123390d8d0c]);
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair UnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_749f41c4a1b59e75], a0.this$));
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
        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data);
        static PyGetSetDef t_UnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateOptimizer, goalType),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, max),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, min),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, startValue),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_UnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getGoalType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMax, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMin, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateOptimizer)[] = {
          { Py_tp_methods, t_UnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
          NULL
        };

        DEFINE_TYPE(UnivariateOptimizer, t_UnivariateOptimizer, UnivariateOptimizer);
        PyObject *t_UnivariateOptimizer::wrap_Object(const UnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateOptimizer), &PY_TYPE_DEF(UnivariateOptimizer), module, "UnivariateOptimizer", 0);
        }

        void t_UnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "class_", make_descriptor(UnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "wrapfn_", make_descriptor(t_UnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_UnivariateOptimizer::wrap_Object(UnivariateOptimizer(((t_UnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
          OBJ_CALL(result = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
        }

        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
          OBJ_CALL(value = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
        }

        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"
#include "org/orekit/time/UTCScale.h"
#include "java/util/Map.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFileParser::class$ = NULL;
        jmethodID *STKEphemerisFileParser::mids$ = NULL;
        bool STKEphemerisFileParser::live$ = false;

        jclass STKEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ea848212d28222cb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/time/UTCScale;Ljava/util/Map;)V");
            mids$[mid_parse_87004392b462a096] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/stk/STKEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFileParser::STKEphemerisFileParser(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::time::UTCScale & a2, const ::java::util::Map & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea848212d28222cb, a0.this$, a1, a2.this$, a3.this$)) {}

        ::org::orekit::files::stk::STKEphemerisFile STKEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::stk::STKEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_87004392b462a096], a0.this$));
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
      namespace stk {
        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg);

        static PyMethodDef t_STKEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFileParser)[] = {
          { Py_tp_methods, t_STKEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFileParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFileParser, t_STKEphemerisFileParser, STKEphemerisFileParser);

        void t_STKEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFileParser), &PY_TYPE_DEF(STKEphemerisFileParser), module, "STKEphemerisFileParser", 0);
        }

        void t_STKEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "class_", make_descriptor(STKEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "wrapfn_", make_descriptor(t_STKEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFileParser::wrap_Object(STKEphemerisFileParser(((t_STKEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::UTCScale a2((jobject) NULL);
          ::java::util::Map a3((jobject) NULL);
          PyTypeObject **p3;
          STKEphemerisFileParser object((jobject) NULL);

          if (!parseArgs(args, "sDkK", ::org::orekit::time::UTCScale::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = STKEphemerisFileParser(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::stk::t_STKEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectOutput.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream::class$ = NULL;
    jmethodID *ObjectOutputStream::mids$ = NULL;
    bool ObjectOutputStream::live$ = false;

    jclass ObjectOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a093374b16e6c27d] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultWriteObject_0640e6acf969ed28] = env->getMethodID(cls, "defaultWriteObject", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_putFields_6d0fa0c03e43522c] = env->getMethodID(cls, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
        mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_useProtocolVersion_a3da1a935cb37f7b] = env->getMethodID(cls, "useProtocolVersion", "(I)V");
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_ed2afdb8506b9742] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_a3da1a935cb37f7b] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_f5ffdf29129ef90a] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_a3da1a935cb37f7b] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_f5ffdf29129ef90a] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_10f281d777284cea] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFields_0640e6acf969ed28] = env->getMethodID(cls, "writeFields", "()V");
        mids$[mid_writeFloat_3ac7cc3def9efaa9] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_a3da1a935cb37f7b] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_3cd6a6b354c6aa22] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeObject_009757f2c0fd9090] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");
        mids$[mid_writeShort_a3da1a935cb37f7b] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_f5ffdf29129ef90a] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");
        mids$[mid_writeUnshared_009757f2c0fd9090] = env->getMethodID(cls, "writeUnshared", "(Ljava/lang/Object;)V");
        mids$[mid_writeStreamHeader_0640e6acf969ed28] = env->getMethodID(cls, "writeStreamHeader", "()V");
        mids$[mid_writeObjectOverride_009757f2c0fd9090] = env->getMethodID(cls, "writeObjectOverride", "(Ljava/lang/Object;)V");
        mids$[mid_annotateClass_80b724d415998d9f] = env->getMethodID(cls, "annotateClass", "(Ljava/lang/Class;)V");
        mids$[mid_annotateProxyClass_80b724d415998d9f] = env->getMethodID(cls, "annotateProxyClass", "(Ljava/lang/Class;)V");
        mids$[mid_replaceObject_65d69db95c5eb156] = env->getMethodID(cls, "replaceObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableReplaceObject_bc7235a51f399397] = env->getMethodID(cls, "enableReplaceObject", "(Z)Z");
        mids$[mid_writeClassDescriptor_372f23a0ca31862c] = env->getMethodID(cls, "writeClassDescriptor", "(Ljava/io/ObjectStreamClass;)V");
        mids$[mid_drain_0640e6acf969ed28] = env->getMethodID(cls, "drain", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_a093374b16e6c27d, a0.this$)) {}

    void ObjectOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void ObjectOutputStream::defaultWriteObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultWriteObject_0640e6acf969ed28]);
    }

    void ObjectOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    ::java::io::ObjectOutputStream$PutField ObjectOutputStream::putFields() const
    {
      return ::java::io::ObjectOutputStream$PutField(env->callObjectMethod(this$, mids$[mid_putFields_6d0fa0c03e43522c]));
    }

    void ObjectOutputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
    }

    void ObjectOutputStream::useProtocolVersion(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_useProtocolVersion_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void ObjectOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }

    void ObjectOutputStream::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_ed2afdb8506b9742], a0);
    }

    void ObjectOutputStream::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_f5ffdf29129ef90a], a0.this$);
    }

    void ObjectOutputStream::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_f5ffdf29129ef90a], a0.this$);
    }

    void ObjectOutputStream::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_10f281d777284cea], a0);
    }

    void ObjectOutputStream::writeFields() const
    {
      env->callVoidMethod(this$, mids$[mid_writeFields_0640e6acf969ed28]);
    }

    void ObjectOutputStream::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_3ac7cc3def9efaa9], a0);
    }

    void ObjectOutputStream::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_3cd6a6b354c6aa22], a0);
    }

    void ObjectOutputStream::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_009757f2c0fd9090], a0.this$);
    }

    void ObjectOutputStream::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_a3da1a935cb37f7b], a0);
    }

    void ObjectOutputStream::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_f5ffdf29129ef90a], a0.this$);
    }

    void ObjectOutputStream::writeUnshared(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUnshared_009757f2c0fd9090], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, defaultWriteObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, putFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, useProtocolVersion, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeBoolean, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeByte, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeBytes, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChar, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChars, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeDouble, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeFloat, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeInt, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeLong, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeObject, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeShort, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUTF, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUnshared, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream)[] = {
      { Py_tp_methods, t_ObjectOutputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream, t_ObjectOutputStream, ObjectOutputStream);

    void t_ObjectOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream), &PY_TYPE_DEF(ObjectOutputStream), module, "ObjectOutputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "PutField", make_descriptor(&PY_TYPE_DEF(ObjectOutputStream$PutField)));
    }

    void t_ObjectOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "class_", make_descriptor(ObjectOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "wrapfn_", make_descriptor(t_ObjectOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream::wrap_Object(ObjectOutputStream(((t_ObjectOutputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ObjectOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.defaultWriteObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self)
    {
      ::java::io::ObjectOutputStream$PutField result((jobject) NULL);
      OBJ_CALL(result = self->object.putFields());
      return ::java::io::t_ObjectOutputStream$PutField::wrap_Object(result);
    }

    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.useProtocolVersion(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "useProtocolVersion", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.writeFields());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeUnshared(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUnshared", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *AuxiliaryElements::class$ = NULL;
            jmethodID *AuxiliaryElements::mids$ = NULL;
            bool AuxiliaryElements::live$ = false;

            jclass AuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_62651a2d74687d26] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;I)V");
                mids$[mid_getAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getB_557b8123390d8d0c] = env->getMethodID(cls, "getB", "()D");
                mids$[mid_getBeta_557b8123390d8d0c] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getC_557b8123390d8d0c] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEcc_557b8123390d8d0c] = env->getMethodID(cls, "getEcc", "()D");
                mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_557b8123390d8d0c] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getH_557b8123390d8d0c] = env->getMethodID(cls, "getH", "()D");
                mids$[mid_getK_557b8123390d8d0c] = env->getMethodID(cls, "getK", "()D");
                mids$[mid_getKeplerianPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
                mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
                mids$[mid_getLf_557b8123390d8d0c] = env->getMethodID(cls, "getLf", "()D");
                mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getOrbit_71f9c54b5f482a59] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
                mids$[mid_getP_557b8123390d8d0c] = env->getMethodID(cls, "getP", "()D");
                mids$[mid_getQ_557b8123390d8d0c] = env->getMethodID(cls, "getQ", "()D");
                mids$[mid_getRetrogradeFactor_412668abc8d889e9] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_557b8123390d8d0c] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getVectorF_f88961cca75a2c0a] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorG_f88961cca75a2c0a] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorW_f88961cca75a2c0a] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AuxiliaryElements::AuxiliaryElements(const ::org::orekit::orbits::Orbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62651a2d74687d26, a0.this$, a1)) {}

            jdouble AuxiliaryElements::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getB_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate AuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jdouble AuxiliaryElements::getEcc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEcc_557b8123390d8d0c]);
            }

            ::org::orekit::frames::Frame AuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
            }

            jdouble AuxiliaryElements::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getH() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getH_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getKeplerianPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getLM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getLf() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLf_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getLv() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            ::org::orekit::orbits::Orbit AuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_71f9c54b5f482a59]));
            }

            jdouble AuxiliaryElements::getP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getP_557b8123390d8d0c]);
            }

            jdouble AuxiliaryElements::getQ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getQ_557b8123390d8d0c]);
            }

            jint AuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_412668abc8d889e9]);
            }

            jdouble AuxiliaryElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_557b8123390d8d0c]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_f88961cca75a2c0a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_f88961cca75a2c0a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_f88961cca75a2c0a]));
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
            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data);
            static PyGetSetDef t_AuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_AuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_AuxiliaryElements, b),
              DECLARE_GET_FIELD(t_AuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_AuxiliaryElements, c),
              DECLARE_GET_FIELD(t_AuxiliaryElements, date),
              DECLARE_GET_FIELD(t_AuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_AuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_AuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, h),
              DECLARE_GET_FIELD(t_AuxiliaryElements, k),
              DECLARE_GET_FIELD(t_AuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lf),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_AuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_AuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_AuxiliaryElements, p),
              DECLARE_GET_FIELD(t_AuxiliaryElements, q),
              DECLARE_GET_FIELD(t_AuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_AuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorW),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_AuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLf, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorW, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AuxiliaryElements)[] = {
              { Py_tp_methods, t_AuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_AuxiliaryElements_init_ },
              { Py_tp_getset, t_AuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AuxiliaryElements, t_AuxiliaryElements, AuxiliaryElements);

            void t_AuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(AuxiliaryElements), &PY_TYPE_DEF(AuxiliaryElements), module, "AuxiliaryElements", 0);
            }

            void t_AuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "class_", make_descriptor(AuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "wrapfn_", make_descriptor(t_AuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_AuxiliaryElements::wrap_Object(AuxiliaryElements(((t_AuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jint a1;
              AuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEcc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getH());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLf());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLv());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self)
            {
              ::org::orekit::orbits::Orbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getQ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEcc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getH());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLM());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLf());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLv());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::Orbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getP());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getQ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHmsjPolynomials::class$ = NULL;
            jmethodID *FieldGHmsjPolynomials::mids$ = NULL;
            bool FieldGHmsjPolynomials::live$ = false;

            jclass FieldGHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0b5445c0e116773e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getGmsj_1e72c6fa8f42834d] = env->getMethodID(cls, "getGmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHmsj_1e72c6fa8f42834d] = env->getMethodID(cls, "getHmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdAlpha_1e72c6fa8f42834d] = env->getMethodID(cls, "getdGmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdBeta_1e72c6fa8f42834d] = env->getMethodID(cls, "getdGmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdh_1e72c6fa8f42834d] = env->getMethodID(cls, "getdGmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdk_1e72c6fa8f42834d] = env->getMethodID(cls, "getdGmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdAlpha_1e72c6fa8f42834d] = env->getMethodID(cls, "getdHmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdBeta_1e72c6fa8f42834d] = env->getMethodID(cls, "getdHmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdh_1e72c6fa8f42834d] = env->getMethodID(cls, "getdHmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdk_1e72c6fa8f42834d] = env->getMethodID(cls, "getdHmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHmsjPolynomials::FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b5445c0e116773e, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGmsj_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHmsj_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdAlpha_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdBeta_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdh_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdk_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdAlpha_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdBeta_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdh_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdk_1e72c6fa8f42834d], a0, a1, a2));
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
            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args);
            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHmsjPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHmsjPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHmsjPolynomials)[] = {
              { Py_tp_methods, t_FieldGHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHmsjPolynomials_init_ },
              { Py_tp_getset, t_FieldGHmsjPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHmsjPolynomials, t_FieldGHmsjPolynomials, FieldGHmsjPolynomials);
            PyObject *t_FieldGHmsjPolynomials::wrap_Object(const FieldGHmsjPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHmsjPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHmsjPolynomials), &PY_TYPE_DEF(FieldGHmsjPolynomials), module, "FieldGHmsjPolynomials", 0);
            }

            void t_FieldGHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "class_", make_descriptor(FieldGHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "wrapfn_", make_descriptor(t_FieldGHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHmsjPolynomials::wrap_Object(FieldGHmsjPolynomials(((t_FieldGHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGHmsjPolynomials(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data)
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
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEStepEndHandler::class$ = NULL;
        jmethodID *ODEStepEndHandler::mids$ = NULL;
        bool ODEStepEndHandler::live$ = false;

        jclass ODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_resetState_ad153cb0ea98acb9] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");
            mids$[mid_stepEndOccurred_6fbb0d671e7076e8] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepEndHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }

        ::org::hipparchus::ode::ODEState ODEStepEndHandler::resetState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_ad153cb0ea98acb9], a0.this$));
        }

        ::org::hipparchus::ode::events::Action ODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_6fbb0d671e7076e8], a0.this$, a1));
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
        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args);
        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_ODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepEndHandler)[] = {
          { Py_tp_methods, t_ODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepEndHandler, t_ODEStepEndHandler, ODEStepEndHandler);

        void t_ODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepEndHandler), &PY_TYPE_DEF(ODEStepEndHandler), module, "ODEStepEndHandler", 0);
        }

        void t_ODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "class_", make_descriptor(ODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "wrapfn_", make_descriptor(t_ODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepEndHandler::wrap_Object(ODEStepEndHandler(((t_ODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args)
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

        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolator::class$ = NULL;
        jmethodID *TricubicInterpolator::mids$ = NULL;
        bool TricubicInterpolator::live$ = false;

        jclass TricubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_b444de5d8cc8c2e0] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/interpolation/TricubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolator::TricubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction TricubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_b444de5d8cc8c2e0], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolator)[] = {
          { Py_tp_methods, t_TricubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolator, t_TricubicInterpolator, TricubicInterpolator);

        void t_TricubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolator), &PY_TYPE_DEF(TricubicInterpolator), module, "TricubicInterpolator", 0);
        }

        void t_TricubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "class_", make_descriptor(TricubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "wrapfn_", make_descriptor(t_TricubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolator::wrap_Object(TricubicInterpolator(((t_TricubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          TricubicInterpolator object((jobject) NULL);

          INT_CALL(object = TricubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::interpolation::t_TricubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/util/Set.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration::mids$ = NULL;
        bool CRDConfiguration::live$ = false;

        jclass CRDConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addConfigurationRecord_3e4532687383a122] = env->getMethodID(cls, "addConfigurationRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;)V");
            mids$[mid_getCalibrationTargetRecord_896194a39e47435a] = env->getMethodID(cls, "getCalibrationTargetRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getCalibrationTargetRecord_788d7a129602bdef] = env->getMethodID(cls, "getCalibrationTargetRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getConfigurationRecord_b9f8b56930f02022] = env->getMethodID(cls, "getConfigurationRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;");
            mids$[mid_getConfigurationRecordMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getConfigurationRecordMap", "()Ljava/util/Map;");
            mids$[mid_getDetectorRecord_11032c9641e921e3] = env->getMethodID(cls, "getDetectorRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getDetectorRecord_bd201d3a9d72147f] = env->getMethodID(cls, "getDetectorRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getLaserRecord_276b68d6d0f7069c] = env->getMethodID(cls, "getLaserRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLaserRecord_ff2241ad652ca0a4] = env->getMethodID(cls, "getLaserRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLastSystemRecord_12dde8b8ed260082] = env->getMethodID(cls, "getLastSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getMeteorologicalRecord_1c3d837ba88d7a54] = env->getMethodID(cls, "getMeteorologicalRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getMeteorologicalRecord_04c83f934ea83bb1] = env->getMethodID(cls, "getMeteorologicalRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getSoftwareRecord_7336e30d965e56ed] = env->getMethodID(cls, "getSoftwareRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSoftwareRecord_6d7ff85ecb398c09] = env->getMethodID(cls, "getSoftwareRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSystemConfigurationIds_2dfcbd371d62f4e1] = env->getMethodID(cls, "getSystemConfigurationIds", "()Ljava/util/Set;");
            mids$[mid_getSystemConfigurationRecords_0d9551367f7ecdef] = env->getMethodID(cls, "getSystemConfigurationRecords", "()Ljava/util/List;");
            mids$[mid_getSystemRecord_12dde8b8ed260082] = env->getMethodID(cls, "getSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getSystemRecord_c06a99220828a904] = env->getMethodID(cls, "getSystemRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getTimingRecord_4ef9bf3ffda3d23f] = env->getMethodID(cls, "getTimingRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTimingRecord_fb54cf7f9a5b05bd] = env->getMethodID(cls, "getTimingRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTransponderRecord_e037088387a2faa4] = env->getMethodID(cls, "getTransponderRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");
            mids$[mid_getTransponderRecord_21789e5cbcd52c6a] = env->getMethodID(cls, "getTransponderRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration::CRDConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void CRDConfiguration::addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addConfigurationRecord_3e4532687383a122], a0.this$);
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_896194a39e47435a]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_788d7a129602bdef], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration CRDConfiguration::getConfigurationRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecord_b9f8b56930f02022], a0.this$));
        }

        ::java::util::Map CRDConfiguration::getConfigurationRecordMap() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getConfigurationRecordMap_1e62c2f73fbdd1c4]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_11032c9641e921e3]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_bd201d3a9d72147f], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_276b68d6d0f7069c]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_ff2241ad652ca0a4], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getLastSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getLastSystemRecord_12dde8b8ed260082]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_1c3d837ba88d7a54]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_04c83f934ea83bb1], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_7336e30d965e56ed]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_6d7ff85ecb398c09], a0.this$));
        }

        ::java::util::Set CRDConfiguration::getSystemConfigurationIds() const
        {
          return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationIds_2dfcbd371d62f4e1]));
        }

        ::java::util::List CRDConfiguration::getSystemConfigurationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationRecords_0d9551367f7ecdef]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_12dde8b8ed260082]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_c06a99220828a904], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_4ef9bf3ffda3d23f]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_fb54cf7f9a5b05bd], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_e037088387a2faa4]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_21789e5cbcd52c6a], a0.this$));
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
        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data);
        static PyGetSetDef t_CRDConfiguration__fields_[] = {
          DECLARE_GET_FIELD(t_CRDConfiguration, calibrationTargetRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, configurationRecordMap),
          DECLARE_GET_FIELD(t_CRDConfiguration, detectorRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, laserRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, lastSystemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, meteorologicalRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, softwareRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationIds),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationRecords),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, timingRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, transponderRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, addConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getCalibrationTargetRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecordMap, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getDetectorRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLaserRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLastSystemRecord, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getMeteorologicalRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSoftwareRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationIds, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTimingRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTransponderRecord, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration, t_CRDConfiguration, CRDConfiguration);

        void t_CRDConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration), &PY_TYPE_DEF(CRDConfiguration), module, "CRDConfiguration", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "LaserConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$LaserConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "DetectorConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TimingSystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TransponderConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SoftwareConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "MeteorologicalConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "BaseConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$BaseConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "CalibrationTargetConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration)));
        }

        void t_CRDConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "class_", make_descriptor(CRDConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration::wrap_Object(CRDConfiguration(((t_CRDConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addConfigurationRecord(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationTargetRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationTargetRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationTargetRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getConfigurationRecord(a0));
            return ::org::orekit::files::ilrs::t_CRDConfiguration$BaseConfiguration::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$BaseConfiguration));
        }

        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getDetectorRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDetectorRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDetectorRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaserRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLaserRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLaserRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeteorologicalRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeteorologicalRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteorologicalRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSoftwareRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getSoftwareRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSoftwareRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self)
        {
          ::java::util::Set result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$SystemConfiguration));
        }

        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSystemRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSystemRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSystemRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimingRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTimingRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTimingRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransponderRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransponderRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransponderRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationTargetRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Set value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimingRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Range::class$ = NULL;
        jmethodID *Range::mids$ = NULL;
        bool Range::live$ = false;
        ::java::lang::String *Range::MEASUREMENT_TYPE = NULL;

        jclass Range::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Range");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0c97652d522ed1b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Range::Range(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0c97652d522ed1b8, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_of_(t_Range *self, PyObject *args);
        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data);
        static PyGetSetDef t_Range__fields_[] = {
          DECLARE_GET_FIELD(t_Range, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Range__methods_[] = {
          DECLARE_METHOD(t_Range, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Range)[] = {
          { Py_tp_methods, t_Range__methods_ },
          { Py_tp_init, (void *) t_Range_init_ },
          { Py_tp_getset, t_Range__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Range)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(Range, t_Range, Range);
        PyObject *t_Range::wrap_Object(const Range& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Range::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Range::install(PyObject *module)
        {
          installType(&PY_TYPE(Range), &PY_TYPE_DEF(Range), module, "Range", 0);
        }

        void t_Range::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "class_", make_descriptor(Range::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "wrapfn_", make_descriptor(t_Range::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "boxfn_", make_descriptor(boxObject));
          env->getClass(Range::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "MEASUREMENT_TYPE", make_descriptor(j2p(*Range::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Range::initializeClass, 1)))
            return NULL;
          return t_Range::wrap_Object(Range(((t_Range *) arg)->object.this$));
        }
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Range::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Range_of_(t_Range *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          Range object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Range(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Side::class$ = NULL;
        jmethodID *Side::mids$ = NULL;
        bool Side::live$ = false;
        Side *Side::BOTH = NULL;
        Side *Side::HYPER = NULL;
        Side *Side::MINUS = NULL;
        Side *Side::PLUS = NULL;

        jclass Side::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Side");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d19b5a5f8c112d36] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Side;");
            mids$[mid_values_1468d4d7056992c9] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new Side(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/geometry/partitioning/Side;"));
            HYPER = new Side(env->getStaticObjectField(cls, "HYPER", "Lorg/hipparchus/geometry/partitioning/Side;"));
            MINUS = new Side(env->getStaticObjectField(cls, "MINUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            PLUS = new Side(env->getStaticObjectField(cls, "PLUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Side Side::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Side(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d19b5a5f8c112d36], a0.this$));
        }

        JArray< Side > Side::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Side >(env->callStaticObjectMethod(cls, mids$[mid_values_1468d4d7056992c9]));
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
        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_of_(t_Side *self, PyObject *args);
        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Side_values(PyTypeObject *type);
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data);
        static PyGetSetDef t_Side__fields_[] = {
          DECLARE_GET_FIELD(t_Side, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Side__methods_[] = {
          DECLARE_METHOD(t_Side, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, of_, METH_VARARGS),
          DECLARE_METHOD(t_Side, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Side, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Side)[] = {
          { Py_tp_methods, t_Side__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Side__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Side)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Side, t_Side, Side);
        PyObject *t_Side::wrap_Object(const Side& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Side::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Side::install(PyObject *module)
        {
          installType(&PY_TYPE(Side), &PY_TYPE_DEF(Side), module, "Side", 0);
        }

        void t_Side::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "class_", make_descriptor(Side::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "wrapfn_", make_descriptor(t_Side::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "boxfn_", make_descriptor(boxObject));
          env->getClass(Side::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "BOTH", make_descriptor(t_Side::wrap_Object(*Side::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "HYPER", make_descriptor(t_Side::wrap_Object(*Side::HYPER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "MINUS", make_descriptor(t_Side::wrap_Object(*Side::MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "PLUS", make_descriptor(t_Side::wrap_Object(*Side::PLUS)));
        }

        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Side::initializeClass, 1)))
            return NULL;
          return t_Side::wrap_Object(Side(((t_Side *) arg)->object.this$));
        }
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Side::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Side_of_(t_Side *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Side result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::valueOf(a0));
            return t_Side::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Side_values(PyTypeObject *type)
        {
          JArray< Side > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::values());
          return JArray<jobject>(result.this$).wrap(t_Side::wrap_jobject);
        }
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics$StreamingStatisticsBuilder::class$ = NULL;
        jmethodID *StreamingStatistics$StreamingStatisticsBuilder::mids$ = NULL;
        bool StreamingStatistics$StreamingStatisticsBuilder::live$ = false;

        jclass StreamingStatistics$StreamingStatisticsBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_build_adcadc851bf4f5fa] = env->getMethodID(cls, "build", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_extrema_c20f52f3b8f532b9] = env->getMethodID(cls, "extrema", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_moments_c20f52f3b8f532b9] = env->getMethodID(cls, "moments", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_percentiles_1009910c81635064] = env->getMethodID(cls, "percentiles", "(DLorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfLogs_c20f52f3b8f532b9] = env->getMethodID(cls, "sumOfLogs", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfSquares_c20f52f3b8f532b9] = env->getMethodID(cls, "sumOfSquares", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics$StreamingStatisticsBuilder::StreamingStatistics$StreamingStatisticsBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::stat::descriptive::StreamingStatistics StreamingStatistics$StreamingStatisticsBuilder::build() const
        {
          return ::org::hipparchus::stat::descriptive::StreamingStatistics(env->callObjectMethod(this$, mids$[mid_build_adcadc851bf4f5fa]));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::extrema(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_extrema_c20f52f3b8f532b9], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::moments(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_moments_c20f52f3b8f532b9], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::percentiles(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_percentiles_1009910c81635064], a0, a1.this$));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfLogs(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfLogs_c20f52f3b8f532b9], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfSquares(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfSquares_c20f52f3b8f532b9], a0));
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
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);

        static PyMethodDef t_StreamingStatistics$StreamingStatisticsBuilder__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, extrema, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, moments, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, percentiles, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfLogs, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfSquares, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          { Py_tp_methods, t_StreamingStatistics$StreamingStatisticsBuilder__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics$StreamingStatisticsBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics$StreamingStatisticsBuilder, t_StreamingStatistics$StreamingStatisticsBuilder, StreamingStatistics$StreamingStatisticsBuilder);

        void t_StreamingStatistics$StreamingStatisticsBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), &PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder), module, "StreamingStatistics$StreamingStatisticsBuilder", 0);
        }

        void t_StreamingStatistics$StreamingStatisticsBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "class_", make_descriptor(StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "wrapfn_", make_descriptor(t_StreamingStatistics$StreamingStatisticsBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(StreamingStatistics$StreamingStatisticsBuilder(((t_StreamingStatistics$StreamingStatisticsBuilder *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds)
        {
          StreamingStatistics$StreamingStatisticsBuilder object((jobject) NULL);

          INT_CALL(object = StreamingStatistics$StreamingStatisticsBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.extrema(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "extrema", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.moments(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "moments", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.percentiles(a0, a1));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "percentiles", args);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfLogs(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfLogs", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfSquares(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfSquares", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherData::class$ = NULL;
            jmethodID *CssiSpaceWeatherData::mids$ = NULL;
            bool CssiSpaceWeatherData::live$ = false;
            ::java::lang::String *CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass CssiSpaceWeatherData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                mids$[mid_init$_562a84d0b1d0d772] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_91b8fb16a2e11747] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_d9583ee7d0032c60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_d8fcbe65f280bc96] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_93ac7533027960c3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_d0c6f8bbb58807dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_init$_812a3752cbeebcf7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_get24HoursKp_b0b988f941da47d8] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_89e8b78e4211e023] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_b0b988f941da47d8] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_b0b988f941da47d8] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_b0b988f941da47d8] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_b0b988f941da47d8] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_b0b988f941da47d8] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_562a84d0b1d0d772, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_91b8fb16a2e11747, a0.this$, a1.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d9583ee7d0032c60, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d8fcbe65f280bc96, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_93ac7533027960c3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d0c6f8bbb58807dc, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_812a3752cbeebcf7, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

            jdouble CssiSpaceWeatherData::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_b0b988f941da47d8], a0.this$);
            }

            JArray< jdouble > CssiSpaceWeatherData::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_89e8b78e4211e023], a0.this$));
            }

            jdouble CssiSpaceWeatherData::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_b0b988f941da47d8], a0.this$);
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
            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args);
            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherData__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherData__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherData)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherData__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherData_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherData, t_CssiSpaceWeatherData, CssiSpaceWeatherData);
            PyObject *t_CssiSpaceWeatherData::wrap_Object(const CssiSpaceWeatherData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CssiSpaceWeatherData::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherData), &PY_TYPE_DEF(CssiSpaceWeatherData), module, "CssiSpaceWeatherData", 0);
            }

            void t_CssiSpaceWeatherData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "class_", make_descriptor(CssiSpaceWeatherData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "wrapfn_", make_descriptor(t_CssiSpaceWeatherData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "boxfn_", make_descriptor(boxObject));
              env->getClass(CssiSpaceWeatherData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherData::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherData::wrap_Object(CssiSpaceWeatherData(((t_CssiSpaceWeatherData *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::java::lang::String a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "s", &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDD", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
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

            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data)
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
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *DenseOutputModel::class$ = NULL;
      jmethodID *DenseOutputModel::mids$ = NULL;
      bool DenseOutputModel::live$ = false;

      jclass DenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/DenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_52c12c88abdf5d69] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/DenseOutputModel;)V");
          mids$[mid_finish_b79fdee299d79fcc] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_557b8123390d8d0c] = env->getMethodID(cls, "getFinalTime", "()D");
          mids$[mid_getInitialTime_557b8123390d8d0c] = env->getMethodID(cls, "getInitialTime", "()D");
          mids$[mid_getInterpolatedState_0a47e68426cfc9cf] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_handleStep_b272ebb5ead79c81] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
          mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DenseOutputModel::DenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void DenseOutputModel::append(const DenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_52c12c88abdf5d69], a0.this$);
      }

      void DenseOutputModel::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_b79fdee299d79fcc], a0.this$);
      }

      jdouble DenseOutputModel::getFinalTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFinalTime_557b8123390d8d0c]);
      }

      jdouble DenseOutputModel::getInitialTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInitialTime_557b8123390d8d0c]);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative DenseOutputModel::getInterpolatedState(jdouble a0) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_0a47e68426cfc9cf], a0));
      }

      void DenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_b272ebb5ead79c81], a0.this$);
      }

      void DenseOutputModel::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
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
      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args);
      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data);
      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data);
      static PyGetSetDef t_DenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_DenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_DenseOutputModel, initialTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_DenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DenseOutputModel)[] = {
        { Py_tp_methods, t_DenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_DenseOutputModel_init_ },
        { Py_tp_getset, t_DenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DenseOutputModel, t_DenseOutputModel, DenseOutputModel);

      void t_DenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(DenseOutputModel), &PY_TYPE_DEF(DenseOutputModel), module, "DenseOutputModel", 0);
      }

      void t_DenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "class_", make_descriptor(DenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "wrapfn_", make_descriptor(t_DenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_DenseOutputModel::wrap_Object(DenseOutputModel(((t_DenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        DenseOutputModel object((jobject) NULL);

        INT_CALL(object = DenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg)
      {
        DenseOutputModel a0((jobject) NULL);

        if (!parseArg(arg, "k", DenseOutputModel::initializeClass, &a0))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg)
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

      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFinalTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInitialTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg)
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

      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args)
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

      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFinalTime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInitialTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader::mids$ = NULL;
      bool UTCTAIOffsetsLoader::live$ = false;

      jclass UTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_0d9551367f7ecdef]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self);

      static PyMethodDef t_UTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader, t_UTCTAIOffsetsLoader, UTCTAIOffsetsLoader);

      void t_UTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader), &PY_TYPE_DEF(UTCTAIOffsetsLoader), module, "UTCTAIOffsetsLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser)));
      }

      void t_UTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "class_", make_descriptor(UTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader::wrap_Object(UTCTAIOffsetsLoader(((t_UTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
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
            mids$[mid_init$_2a2776403255b5f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_getModel_e31bcbfb9203b3a6] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_88ca328d89915cf7] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencePropagatorConverter::FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_2a2776403255b5f4, a0.this$, a1, a2)) {}
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
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldGeodeticPoint::class$ = NULL;
      jmethodID *FieldGeodeticPoint::mids$ = NULL;
      bool FieldGeodeticPoint::live$ = false;

      jclass FieldGeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldGeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0f27b0249abd6c51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_613c8f46c659f636] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEast_2d64addf4c3391d9] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getLatitude_613c8f46c659f636] = env->getMethodID(cls, "getLatitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLongitude_613c8f46c659f636] = env->getMethodID(cls, "getLongitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_2d64addf4c3391d9] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNorth_2d64addf4c3391d9] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSouth_2d64addf4c3391d9] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getWest_2d64addf4c3391d9] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZenith_2d64addf4c3391d9] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldGeodeticPoint::FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f27b0249abd6c51, a0.this$, a1.this$, a2.this$)) {}

      jboolean FieldGeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getAltitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_613c8f46c659f636]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getEast_2d64addf4c3391d9]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLatitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLatitude_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLongitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLongitude_613c8f46c659f636]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNadir_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNorth_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSouth_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getWest_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getZenith_2d64addf4c3391d9]));
      }

      jint FieldGeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::java::lang::String FieldGeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args);
      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data);
      static PyGetSetDef t_FieldGeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, east),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, north),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, south),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, west),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, zenith),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldGeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_FieldGeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldGeodeticPoint)[] = {
        { Py_tp_methods, t_FieldGeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_FieldGeodeticPoint_init_ },
        { Py_tp_getset, t_FieldGeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldGeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldGeodeticPoint, t_FieldGeodeticPoint, FieldGeodeticPoint);
      PyObject *t_FieldGeodeticPoint::wrap_Object(const FieldGeodeticPoint& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldGeodeticPoint::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldGeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldGeodeticPoint), &PY_TYPE_DEF(FieldGeodeticPoint), module, "FieldGeodeticPoint", 0);
      }

      void t_FieldGeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "class_", make_descriptor(FieldGeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "wrapfn_", make_descriptor(t_FieldGeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldGeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_FieldGeodeticPoint::wrap_Object(FieldGeodeticPoint(((t_FieldGeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldGeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldGeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldGeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAltitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLongitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAltitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLongitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Enum.h"
#include "java/io/Serializable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Enum::class$ = NULL;
    jmethodID *Enum::mids$ = NULL;
    bool Enum::live$ = false;

    jclass Enum::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Enum");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_53d8254923182755] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Enum;)I");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDeclaringClass_d4b191ff8147475d] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_name_3cffd47377eca18a] = env->getMethodID(cls, "name", "()Ljava/lang/String;");
        mids$[mid_ordinal_412668abc8d889e9] = env->getMethodID(cls, "ordinal", "()I");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_valueOf_4a7cfd0912abeab0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
        mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Enum::compareTo(const Enum & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_53d8254923182755], a0.this$);
    }

    jboolean Enum::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Class Enum::getDeclaringClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_d4b191ff8147475d]));
    }

    jint Enum::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    ::java::lang::String Enum::name() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_name_3cffd47377eca18a]));
    }

    jint Enum::ordinal() const
    {
      return env->callIntMethod(this$, mids$[mid_ordinal_412668abc8d889e9]);
    }

    ::java::lang::String Enum::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    Enum Enum::valueOf(const ::java::lang::Class & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Enum(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a7cfd0912abeab0], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg);
    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_getDeclaringClass(t_Enum *self);
    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_name(t_Enum *self);
    static PyObject *t_Enum_ordinal(t_Enum *self);
    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data);
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data);
    static PyGetSetDef t_Enum__fields_[] = {
      DECLARE_GET_FIELD(t_Enum, declaringClass),
      DECLARE_GET_FIELD(t_Enum, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enum__methods_[] = {
      DECLARE_METHOD(t_Enum, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enum, compareTo, METH_O),
      DECLARE_METHOD(t_Enum, equals, METH_VARARGS),
      DECLARE_METHOD(t_Enum, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Enum, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Enum, name, METH_NOARGS),
      DECLARE_METHOD(t_Enum, ordinal, METH_NOARGS),
      DECLARE_METHOD(t_Enum, toString, METH_VARARGS),
      DECLARE_METHOD(t_Enum, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enum)[] = {
      { Py_tp_methods, t_Enum__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enum__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enum)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enum, t_Enum, Enum);
    PyObject *t_Enum::wrap_Object(const Enum& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enum::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enum::install(PyObject *module)
    {
      installType(&PY_TYPE(Enum), &PY_TYPE_DEF(Enum), module, "Enum", 0);
    }

    void t_Enum::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "class_", make_descriptor(Enum::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "wrapfn_", make_descriptor(t_Enum::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enum::initializeClass, 1)))
        return NULL;
      return t_Enum::wrap_Object(Enum(((t_Enum *) arg)->object.this$));
    }
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enum::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg)
    {
      Enum a0((jobject) NULL);
      PyTypeObject **p0;
      jint result;

      if (!parseArg(arg, "K", Enum::initializeClass, &a0, &p0, t_Enum::parameters_))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Enum_getDeclaringClass(t_Enum *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Enum_name(t_Enum *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.name());
      return j2p(result);
    }

    static PyObject *t_Enum_ordinal(t_Enum *self)
    {
      jint result;
      OBJ_CALL(result = self->object.ordinal());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::String a1((jobject) NULL);
      Enum result((jobject) NULL);

      if (!parseArgs(args, "Ks", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::lang::Enum::valueOf(a0, a1));
        return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : t_Enum::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedStringConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedStringConsumer::mids$ = NULL;
            bool ParseToken$IndexedStringConsumer::live$ = false;

            jclass ParseToken$IndexedStringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_da9d52f3cfda13c8] = env->getMethodID(cls, "accept", "(ILjava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedStringConsumer::accept(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_da9d52f3cfda13c8], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedStringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedStringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedStringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedStringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedStringConsumer, t_ParseToken$IndexedStringConsumer, ParseToken$IndexedStringConsumer);

            void t_ParseToken$IndexedStringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedStringConsumer), &PY_TYPE_DEF(ParseToken$IndexedStringConsumer), module, "ParseToken$IndexedStringConsumer", 0);
            }

            void t_ParseToken$IndexedStringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "class_", make_descriptor(ParseToken$IndexedStringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedStringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedStringConsumer::wrap_Object(ParseToken$IndexedStringConsumer(((t_ParseToken$IndexedStringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
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
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$FrRangeMeasurement::class$ = NULL;
        jmethodID *CRD$FrRangeMeasurement::mids$ = NULL;
        bool CRD$FrRangeMeasurement::live$ = false;

        jclass CRD$FrRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$FrRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7f9a0ec64fb18faf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DILjava/lang/String;IIIII)V");
            mids$[mid_getDetectorChannel_412668abc8d889e9] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getFilterFlag_412668abc8d889e9] = env->getMethodID(cls, "getFilterFlag", "()I");
            mids$[mid_getReceiveAmplitude_412668abc8d889e9] = env->getMethodID(cls, "getReceiveAmplitude", "()I");
            mids$[mid_getStopNumber_412668abc8d889e9] = env->getMethodID(cls, "getStopNumber", "()I");
            mids$[mid_getTransmitAmplitude_412668abc8d889e9] = env->getMethodID(cls, "getTransmitAmplitude", "()I");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$FrRangeMeasurement::CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, const ::java::lang::String & a3, jint a4, jint a5, jint a6, jint a7, jint a8) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_7f9a0ec64fb18faf, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        jint CRD$FrRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_412668abc8d889e9]);
        }

        jint CRD$FrRangeMeasurement::getFilterFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getFilterFlag_412668abc8d889e9]);
        }

        jint CRD$FrRangeMeasurement::getReceiveAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getReceiveAmplitude_412668abc8d889e9]);
        }

        jint CRD$FrRangeMeasurement::getStopNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getStopNumber_412668abc8d889e9]);
        }

        jint CRD$FrRangeMeasurement::getTransmitAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getTransmitAmplitude_412668abc8d889e9]);
        }

        ::java::lang::String CRD$FrRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$FrRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$FrRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, filterFlag),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, receiveAmplitude),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, stopNumber),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, transmitAmplitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$FrRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getFilterFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getReceiveAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getStopNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getTransmitAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$FrRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$FrRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$FrRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$FrRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$FrRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$FrRangeMeasurement, t_CRD$FrRangeMeasurement, CRD$FrRangeMeasurement);

        void t_CRD$FrRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$FrRangeMeasurement), &PY_TYPE_DEF(CRD$FrRangeMeasurement), module, "CRD$FrRangeMeasurement", 0);
        }

        void t_CRD$FrRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "class_", make_descriptor(CRD$FrRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$FrRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$FrRangeMeasurement::wrap_Object(CRD$FrRangeMeasurement(((t_CRD$FrRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          jint a4;
          jint a5;
          jint a6;
          jint a7;
          jint a8;
          CRD$FrRangeMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDIsIIIII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            INT_CALL(object = CRD$FrRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFilterFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStopNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFilterFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStopNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SynchronizedRandomGenerator::class$ = NULL;
      jmethodID *SynchronizedRandomGenerator::mids$ = NULL;
      bool SynchronizedRandomGenerator::live$ = false;

      jclass SynchronizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SynchronizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_ac782c7077255dd3] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_f4ad805a81234b49] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SynchronizedRandomGenerator::SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

      jboolean SynchronizedRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_ac782c7077255dd3], a0.this$, a1, a2);
      }

      jdouble SynchronizedRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat SynchronizedRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jdouble SynchronizedRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint SynchronizedRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jint SynchronizedRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong SynchronizedRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
      }

      jlong SynchronizedRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_f4ad805a81234b49], a0);
      }

      void SynchronizedRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void SynchronizedRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void SynchronizedRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args);
      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_SynchronizedRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_SynchronizedRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SynchronizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_SynchronizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SynchronizedRandomGenerator)[] = {
        { Py_tp_methods, t_SynchronizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_SynchronizedRandomGenerator_init_ },
        { Py_tp_getset, t_SynchronizedRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SynchronizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SynchronizedRandomGenerator, t_SynchronizedRandomGenerator, SynchronizedRandomGenerator);

      void t_SynchronizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SynchronizedRandomGenerator), &PY_TYPE_DEF(SynchronizedRandomGenerator), module, "SynchronizedRandomGenerator", 0);
      }

      void t_SynchronizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "class_", make_descriptor(SynchronizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "wrapfn_", make_descriptor(t_SynchronizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SynchronizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_SynchronizedRandomGenerator::wrap_Object(SynchronizedRandomGenerator(((t_SynchronizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SynchronizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        SynchronizedRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = SynchronizedRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmMessage::class$ = NULL;
              jmethodID *SsrIgmMessage::mids$ = NULL;
              bool SsrIgmMessage::live$ = false;

              jclass SsrIgmMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8f8b8c5c70a833b4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader;Ljava/util/List;)V");
                  mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmMessage::SsrIgmMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_8f8b8c5c70a833b4, a0, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::gnss::SatelliteSystem SsrIgmMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
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
              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args);
              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self);
              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data);
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data);
              static PyGetSetDef t_SsrIgmMessage__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgmMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_SsrIgmMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmMessage__methods_[] = {
                DECLARE_METHOD(t_SsrIgmMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgmMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmMessage)[] = {
                { Py_tp_methods, t_SsrIgmMessage__methods_ },
                { Py_tp_init, (void *) t_SsrIgmMessage_init_ },
                { Py_tp_getset, t_SsrIgmMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgmMessage, t_SsrIgmMessage, SsrIgmMessage);
              PyObject *t_SsrIgmMessage::wrap_Object(const SsrIgmMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgmMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmMessage), &PY_TYPE_DEF(SsrIgmMessage), module, "SsrIgmMessage", 0);
              }

              void t_SsrIgmMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "class_", make_descriptor(SsrIgmMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "wrapfn_", make_descriptor(t_SsrIgmMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmMessage::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmMessage::wrap_Object(SsrIgmMessage(((t_SsrIgmMessage *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgmMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgmMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConfigurableLowThrustManeuver::class$ = NULL;
        jmethodID *ConfigurableLowThrustManeuver::mids$ = NULL;
        bool ConfigurableLowThrustManeuver::live$ = false;

        jclass ConfigurableLowThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9f07a3a6f29a7aff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;DD)V");
            mids$[mid_getIsp_557b8123390d8d0c] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_b0b988f941da47d8] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustDirectionProvider_8d737b557fa9f336] = env->getMethodID(cls, "getThrustDirectionProvider", "()Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
            mids$[mid_getThrustMagnitude_557b8123390d8d0c] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_b0b988f941da47d8] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfigurableLowThrustManeuver::ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, jdouble a2, jdouble a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_9f07a3a6f29a7aff, a0.this$, a1.this$, a2, a3)) {}

        jdouble ConfigurableLowThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_557b8123390d8d0c]);
        }

        jdouble ConfigurableLowThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_b0b988f941da47d8], a0.this$);
        }

        ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider ConfigurableLowThrustManeuver::getThrustDirectionProvider() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getThrustDirectionProvider_8d737b557fa9f336]));
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_557b8123390d8d0c]);
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b0b988f941da47d8], a0.this$);
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
        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyGetSetDef t_ConfigurableLowThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustDirectionProvider),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustMagnitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfigurableLowThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustDirectionProvider, METH_NOARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustMagnitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfigurableLowThrustManeuver)[] = {
          { Py_tp_methods, t_ConfigurableLowThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConfigurableLowThrustManeuver_init_ },
          { Py_tp_getset, t_ConfigurableLowThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfigurableLowThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConfigurableLowThrustManeuver, t_ConfigurableLowThrustManeuver, ConfigurableLowThrustManeuver);

        void t_ConfigurableLowThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfigurableLowThrustManeuver), &PY_TYPE_DEF(ConfigurableLowThrustManeuver), module, "ConfigurableLowThrustManeuver", 0);
        }

        void t_ConfigurableLowThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "class_", make_descriptor(ConfigurableLowThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "wrapfn_", make_descriptor(t_ConfigurableLowThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConfigurableLowThrustManeuver::wrap_Object(ConfigurableLowThrustManeuver(((t_ConfigurableLowThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          ConfigurableLowThrustManeuver object((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = ConfigurableLowThrustManeuver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ScaleFactorCorrection::class$ = NULL;
          jmethodID *ScaleFactorCorrection::mids$ = NULL;
          bool ScaleFactorCorrection::live$ = false;

          jclass ScaleFactorCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ScaleFactorCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb8694b66894545d] = env->getMethodID(cls, "<init>", "(DLjava/util/List;)V");
              mids$[mid_getCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getTypesObsScaled_0d9551367f7ecdef] = env->getMethodID(cls, "getTypesObsScaled", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaleFactorCorrection::ScaleFactorCorrection(jdouble a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb8694b66894545d, a0, a1.this$)) {}

          jdouble ScaleFactorCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_557b8123390d8d0c]);
          }

          ::java::util::List ScaleFactorCorrection::getTypesObsScaled() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTypesObsScaled_0d9551367f7ecdef]));
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
        namespace observation {
          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data);
          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data);
          static PyGetSetDef t_ScaleFactorCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, correction),
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, typesObsScaled),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaleFactorCorrection__methods_[] = {
            DECLARE_METHOD(t_ScaleFactorCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getTypesObsScaled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaleFactorCorrection)[] = {
            { Py_tp_methods, t_ScaleFactorCorrection__methods_ },
            { Py_tp_init, (void *) t_ScaleFactorCorrection_init_ },
            { Py_tp_getset, t_ScaleFactorCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaleFactorCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ScaleFactorCorrection, t_ScaleFactorCorrection, ScaleFactorCorrection);

          void t_ScaleFactorCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaleFactorCorrection), &PY_TYPE_DEF(ScaleFactorCorrection), module, "ScaleFactorCorrection", 0);
          }

          void t_ScaleFactorCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "class_", make_descriptor(ScaleFactorCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "wrapfn_", make_descriptor(t_ScaleFactorCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaleFactorCorrection::initializeClass, 1)))
              return NULL;
            return t_ScaleFactorCorrection::wrap_Object(ScaleFactorCorrection(((t_ScaleFactorCorrection *) arg)->object.this$));
          }
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaleFactorCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ScaleFactorCorrection object((jobject) NULL);

            if (!parseArgs(args, "DK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ScaleFactorCorrection(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType));
          }

          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrHeader::class$ = NULL;
            jmethodID *SsrHeader::mids$ = NULL;
            bool SsrHeader::live$ = false;

            jclass SsrHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIodSsr_412668abc8d889e9] = env->getMethodID(cls, "getIodSsr", "()I");
                mids$[mid_getSsrEpoch1s_557b8123390d8d0c] = env->getMethodID(cls, "getSsrEpoch1s", "()D");
                mids$[mid_getSsrMultipleMessageIndicator_412668abc8d889e9] = env->getMethodID(cls, "getSsrMultipleMessageIndicator", "()I");
                mids$[mid_getSsrProviderId_412668abc8d889e9] = env->getMethodID(cls, "getSsrProviderId", "()I");
                mids$[mid_getSsrSolutionId_412668abc8d889e9] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                mids$[mid_getSsrUpdateInterval_412668abc8d889e9] = env->getMethodID(cls, "getSsrUpdateInterval", "()I");
                mids$[mid_setIodSsr_a3da1a935cb37f7b] = env->getMethodID(cls, "setIodSsr", "(I)V");
                mids$[mid_setSsrEpoch1s_10f281d777284cea] = env->getMethodID(cls, "setSsrEpoch1s", "(D)V");
                mids$[mid_setSsrMultipleMessageIndicator_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrMultipleMessageIndicator", "(I)V");
                mids$[mid_setSsrProviderId_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                mids$[mid_setSsrSolutionId_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                mids$[mid_setSsrUpdateInterval_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrUpdateInterval", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrHeader::SsrHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint SsrHeader::getIodSsr() const
            {
              return env->callIntMethod(this$, mids$[mid_getIodSsr_412668abc8d889e9]);
            }

            jdouble SsrHeader::getSsrEpoch1s() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSsrEpoch1s_557b8123390d8d0c]);
            }

            jint SsrHeader::getSsrMultipleMessageIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrMultipleMessageIndicator_412668abc8d889e9]);
            }

            jint SsrHeader::getSsrProviderId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrProviderId_412668abc8d889e9]);
            }

            jint SsrHeader::getSsrSolutionId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_412668abc8d889e9]);
            }

            jint SsrHeader::getSsrUpdateInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrUpdateInterval_412668abc8d889e9]);
            }

            void SsrHeader::setIodSsr(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIodSsr_a3da1a935cb37f7b], a0);
            }

            void SsrHeader::setSsrEpoch1s(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrEpoch1s_10f281d777284cea], a0);
            }

            void SsrHeader::setSsrMultipleMessageIndicator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrMultipleMessageIndicator_a3da1a935cb37f7b], a0);
            }

            void SsrHeader::setSsrProviderId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrProviderId_a3da1a935cb37f7b], a0);
            }

            void SsrHeader::setSsrSolutionId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_a3da1a935cb37f7b], a0);
            }

            void SsrHeader::setSsrUpdateInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_a3da1a935cb37f7b], a0);
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
            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self);
            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_SsrHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_SsrHeader, iodSsr),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrEpoch1s),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrMultipleMessageIndicator),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrProviderId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrSolutionId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrUpdateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrHeader__methods_[] = {
              DECLARE_METHOD(t_SsrHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, getIodSsr, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrEpoch1s, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrMultipleMessageIndicator, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrProviderId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrSolutionId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrUpdateInterval, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, setIodSsr, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrEpoch1s, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrMultipleMessageIndicator, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrProviderId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrSolutionId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrUpdateInterval, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrHeader)[] = {
              { Py_tp_methods, t_SsrHeader__methods_ },
              { Py_tp_init, (void *) t_SsrHeader_init_ },
              { Py_tp_getset, t_SsrHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrHeader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrHeader, t_SsrHeader, SsrHeader);

            void t_SsrHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrHeader), &PY_TYPE_DEF(SsrHeader), module, "SsrHeader", 0);
            }

            void t_SsrHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "class_", make_descriptor(SsrHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "wrapfn_", make_descriptor(t_SsrHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrHeader::initializeClass, 1)))
                return NULL;
              return t_SsrHeader::wrap_Object(SsrHeader(((t_SsrHeader *) arg)->object.this$));
            }
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds)
            {
              SsrHeader object((jobject) NULL);

              INT_CALL(object = SsrHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIodSsr());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrProviderId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIodSsr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSsrEpoch1s(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrEpoch1s", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrMultipleMessageIndicator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrMultipleMessageIndicator", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrProviderId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrSolutionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIodSsr());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIodSsr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSsrEpoch1s(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrEpoch1s", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrMultipleMessageIndicator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrMultipleMessageIndicator", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrProviderId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrProviderId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrSolutionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrUpdateInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Derivative::class$ = NULL;
        jmethodID *Derivative::mids$ = NULL;
        bool Derivative::live$ = false;

        jclass Derivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Derivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compose_c2a9122c04338397] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_75914fee15aa69bc] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Derivative::compose(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_compose_c2a9122c04338397], a0.this$));
        }

        jint Derivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jint Derivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        jdouble Derivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_75914fee15aa69bc], a0.this$);
        }

        jdouble Derivative::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
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
        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args);
        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self);
        static PyObject *t_Derivative_getOrder(t_Derivative *self);
        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getValue(t_Derivative *self);
        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data);
        static PyGetSetDef t_Derivative__fields_[] = {
          DECLARE_GET_FIELD(t_Derivative, freeParameters),
          DECLARE_GET_FIELD(t_Derivative, order),
          DECLARE_GET_FIELD(t_Derivative, value),
          DECLARE_GET_FIELD(t_Derivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Derivative__methods_[] = {
          DECLARE_METHOD(t_Derivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_Derivative, compose, METH_O),
          DECLARE_METHOD(t_Derivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_Derivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Derivative)[] = {
          { Py_tp_methods, t_Derivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Derivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Derivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(Derivative, t_Derivative, Derivative);
        PyObject *t_Derivative::wrap_Object(const Derivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Derivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Derivative::install(PyObject *module)
        {
          installType(&PY_TYPE(Derivative), &PY_TYPE_DEF(Derivative), module, "Derivative", 0);
        }

        void t_Derivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "class_", make_descriptor(Derivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "wrapfn_", make_descriptor(t_Derivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Derivative::initializeClass, 1)))
            return NULL;
          return t_Derivative::wrap_Object(Derivative(((t_Derivative *) arg)->object.this$));
        }
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Derivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getOrder(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getValue(t_Derivative *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodyLoader::class$ = NULL;
      jmethodID *PythonCelestialBodyLoader::mids$ = NULL;
      bool PythonCelestialBodyLoader::live$ = false;

      jclass PythonCelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadCelestialBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodyLoader::PythonCelestialBodyLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonCelestialBodyLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonCelestialBodyLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonCelestialBodyLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self);
      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data);
      static PyGetSetDef t_PythonCelestialBodyLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodyLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodyLoader)[] = {
        { Py_tp_methods, t_PythonCelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodyLoader_init_ },
        { Py_tp_getset, t_PythonCelestialBodyLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodyLoader, t_PythonCelestialBodyLoader, PythonCelestialBodyLoader);

      void t_PythonCelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodyLoader), &PY_TYPE_DEF(PythonCelestialBodyLoader), module, "PythonCelestialBodyLoader", 1);
      }

      void t_PythonCelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "class_", make_descriptor(PythonCelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "wrapfn_", make_descriptor(t_PythonCelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodyLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodyLoader_loadCelestialBody0 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodyLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodyLoader::wrap_Object(PythonCelestialBodyLoader(((t_PythonCelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodyLoader object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodyLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadCelestialBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("loadCelestialBody", result);
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

      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data)
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
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerIntegratorBuilder::class$ = NULL;
        jmethodID *EulerIntegratorBuilder::mids$ = NULL;
        bool EulerIntegratorBuilder::live$ = false;

        jclass EulerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegratorBuilder::EulerIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator EulerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_EulerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EulerIntegratorBuilder, t_EulerIntegratorBuilder, EulerIntegratorBuilder);

        void t_EulerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegratorBuilder), &PY_TYPE_DEF(EulerIntegratorBuilder), module, "EulerIntegratorBuilder", 0);
        }

        void t_EulerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "class_", make_descriptor(EulerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerIntegratorBuilder::wrap_Object(EulerIntegratorBuilder(((t_EulerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Class.h"
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
            mids$[mid_evaluationPerformed_9ef1e6c96a3a3980] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanObserver::evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_9ef1e6c96a3a3980], a0.this$);
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
