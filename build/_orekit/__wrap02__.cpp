#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedPair::class$ = NULL;
      jmethodID *TimeStampedPair::mids$ = NULL;
      bool TimeStampedPair::live$ = false;
      jdouble TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass TimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e96c367b6a05c39f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)V");
          mids$[mid_init$_cd71586d78d36778] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;D)V");
          mids$[mid_checkDatesConsistency_dff5f80cc61c17ba] = env->getStaticMethodID(cls, "checkDatesConsistency", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFirst_b6273cee359d7146] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getSecond_b6273cee359d7146] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e96c367b6a05c39f, a0.this$, a1.this$)) {}

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd71586d78d36778, a0.this$, a1.this$, a2)) {}

      void TimeStampedPair::checkDatesConsistency(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDatesConsistency_dff5f80cc61c17ba], a0.this$, a1.this$, a2);
      }

      ::org::orekit::time::AbsoluteDate TimeStampedPair::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_b6273cee359d7146]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_b6273cee359d7146]));
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
      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args);
      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data);
      static PyGetSetDef t_TimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPair, date),
        DECLARE_GET_FIELD(t_TimeStampedPair, first),
        DECLARE_GET_FIELD(t_TimeStampedPair, second),
        DECLARE_GET_FIELD(t_TimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPair, checkDatesConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPair)[] = {
        { Py_tp_methods, t_TimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPair_init_ },
        { Py_tp_getset, t_TimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedPair, t_TimeStampedPair, TimeStampedPair);
      PyObject *t_TimeStampedPair::wrap_Object(const TimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_TimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_TimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPair), &PY_TYPE_DEF(TimeStampedPair), module, "TimeStampedPair", 0);
      }

      void t_TimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "class_", make_descriptor(TimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "wrapfn_", make_descriptor(t_TimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPair::wrap_Object(TimeStampedPair(((t_TimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            jdouble a2;
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPair(a0, a1, a2));
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

      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::time::TimeStampedPair::checkDatesConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDatesConsistency", args);
        return NULL;
      }

      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Unit::class$ = NULL;
        jmethodID *Unit::mids$ = NULL;
        bool Unit::live$ = false;
        Unit *Unit::AMPERE = NULL;
        Unit *Unit::ARC_MINUTE = NULL;
        Unit *Unit::ARC_SECOND = NULL;
        Unit *Unit::BAR = NULL;
        Unit *Unit::COULOMB = NULL;
        Unit *Unit::DAY = NULL;
        Unit *Unit::DEGREE = NULL;
        Unit *Unit::EARTH_RADII = NULL;
        Unit *Unit::GRAM = NULL;
        Unit *Unit::HERTZ = NULL;
        Unit *Unit::HOUR = NULL;
        Unit *Unit::JOULE = NULL;
        Unit *Unit::KILOGRAM = NULL;
        Unit *Unit::KILOMETRE = NULL;
        Unit *Unit::METRE = NULL;
        Unit *Unit::MINUTE = NULL;
        Unit *Unit::NEWTON = NULL;
        Unit *Unit::NONE = NULL;
        Unit *Unit::OHM = NULL;
        Unit *Unit::ONE = NULL;
        Unit *Unit::PASCAL = NULL;
        Unit *Unit::PERCENT = NULL;
        Unit *Unit::RADIAN = NULL;
        Unit *Unit::REVOLUTION = NULL;
        Unit *Unit::SECOND = NULL;
        Unit *Unit::SOLAR_FLUX_UNIT = NULL;
        Unit *Unit::TESLA = NULL;
        Unit *Unit::TOTAL_ELECTRON_CONTENT_UNIT = NULL;
        Unit *Unit::VOLT = NULL;
        Unit *Unit::WATT = NULL;
        Unit *Unit::YEAR = NULL;

        jclass Unit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Unit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_97dbf822f7252b42] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;)V");
            mids$[mid_alias_6650924024ae0f55] = env->getMethodID(cls, "alias", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_divide_d8fc6054bd0fbc8b] = env->getMethodID(cls, "divide", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_ensureCompatible_ddf63e191200a7a3] = env->getStaticMethodID(cls, "ensureCompatible", "(Ljava/lang/String;Ljava/util/List;ZLjava/util/List;)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_fromSI_cd4b8534889fa81f] = env->getMethodID(cls, "fromSI", "(Ljava/lang/Double;)D");
            mids$[mid_fromSI_0ba5fed9597b693e] = env->getMethodID(cls, "fromSI", "(D)D");
            mids$[mid_getAngle_7847eacc50504e7f] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getCurrent_7847eacc50504e7f] = env->getMethodID(cls, "getCurrent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getLength_7847eacc50504e7f] = env->getMethodID(cls, "getLength", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getMass_7847eacc50504e7f] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getTime_7847eacc50504e7f] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_multiply_d8fc6054bd0fbc8b] = env->getMethodID(cls, "multiply", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_parse_6650924024ae0f55] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_power_58cde49db0c58922] = env->getMethodID(cls, "power", "(Ljava/lang/String;Lorg/hipparchus/fraction/Fraction;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sameDimension_f6642efa67a69233] = env->getMethodID(cls, "sameDimension", "(Lorg/orekit/utils/units/Unit;)Z");
            mids$[mid_sameDimensionSI_196b004fd4585106] = env->getMethodID(cls, "sameDimensionSI", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_scale_33d5a55b3852688e] = env->getMethodID(cls, "scale", "(Ljava/lang/String;D)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sqrt_6650924024ae0f55] = env->getMethodID(cls, "sqrt", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_toSI_cd4b8534889fa81f] = env->getMethodID(cls, "toSI", "(Ljava/lang/Double;)D");
            mids$[mid_toSI_0ba5fed9597b693e] = env->getMethodID(cls, "toSI", "(D)D");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AMPERE = new Unit(env->getStaticObjectField(cls, "AMPERE", "Lorg/orekit/utils/units/Unit;"));
            ARC_MINUTE = new Unit(env->getStaticObjectField(cls, "ARC_MINUTE", "Lorg/orekit/utils/units/Unit;"));
            ARC_SECOND = new Unit(env->getStaticObjectField(cls, "ARC_SECOND", "Lorg/orekit/utils/units/Unit;"));
            BAR = new Unit(env->getStaticObjectField(cls, "BAR", "Lorg/orekit/utils/units/Unit;"));
            COULOMB = new Unit(env->getStaticObjectField(cls, "COULOMB", "Lorg/orekit/utils/units/Unit;"));
            DAY = new Unit(env->getStaticObjectField(cls, "DAY", "Lorg/orekit/utils/units/Unit;"));
            DEGREE = new Unit(env->getStaticObjectField(cls, "DEGREE", "Lorg/orekit/utils/units/Unit;"));
            EARTH_RADII = new Unit(env->getStaticObjectField(cls, "EARTH_RADII", "Lorg/orekit/utils/units/Unit;"));
            GRAM = new Unit(env->getStaticObjectField(cls, "GRAM", "Lorg/orekit/utils/units/Unit;"));
            HERTZ = new Unit(env->getStaticObjectField(cls, "HERTZ", "Lorg/orekit/utils/units/Unit;"));
            HOUR = new Unit(env->getStaticObjectField(cls, "HOUR", "Lorg/orekit/utils/units/Unit;"));
            JOULE = new Unit(env->getStaticObjectField(cls, "JOULE", "Lorg/orekit/utils/units/Unit;"));
            KILOGRAM = new Unit(env->getStaticObjectField(cls, "KILOGRAM", "Lorg/orekit/utils/units/Unit;"));
            KILOMETRE = new Unit(env->getStaticObjectField(cls, "KILOMETRE", "Lorg/orekit/utils/units/Unit;"));
            METRE = new Unit(env->getStaticObjectField(cls, "METRE", "Lorg/orekit/utils/units/Unit;"));
            MINUTE = new Unit(env->getStaticObjectField(cls, "MINUTE", "Lorg/orekit/utils/units/Unit;"));
            NEWTON = new Unit(env->getStaticObjectField(cls, "NEWTON", "Lorg/orekit/utils/units/Unit;"));
            NONE = new Unit(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/utils/units/Unit;"));
            OHM = new Unit(env->getStaticObjectField(cls, "OHM", "Lorg/orekit/utils/units/Unit;"));
            ONE = new Unit(env->getStaticObjectField(cls, "ONE", "Lorg/orekit/utils/units/Unit;"));
            PASCAL = new Unit(env->getStaticObjectField(cls, "PASCAL", "Lorg/orekit/utils/units/Unit;"));
            PERCENT = new Unit(env->getStaticObjectField(cls, "PERCENT", "Lorg/orekit/utils/units/Unit;"));
            RADIAN = new Unit(env->getStaticObjectField(cls, "RADIAN", "Lorg/orekit/utils/units/Unit;"));
            REVOLUTION = new Unit(env->getStaticObjectField(cls, "REVOLUTION", "Lorg/orekit/utils/units/Unit;"));
            SECOND = new Unit(env->getStaticObjectField(cls, "SECOND", "Lorg/orekit/utils/units/Unit;"));
            SOLAR_FLUX_UNIT = new Unit(env->getStaticObjectField(cls, "SOLAR_FLUX_UNIT", "Lorg/orekit/utils/units/Unit;"));
            TESLA = new Unit(env->getStaticObjectField(cls, "TESLA", "Lorg/orekit/utils/units/Unit;"));
            TOTAL_ELECTRON_CONTENT_UNIT = new Unit(env->getStaticObjectField(cls, "TOTAL_ELECTRON_CONTENT_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VOLT = new Unit(env->getStaticObjectField(cls, "VOLT", "Lorg/orekit/utils/units/Unit;"));
            WATT = new Unit(env->getStaticObjectField(cls, "WATT", "Lorg/orekit/utils/units/Unit;"));
            YEAR = new Unit(env->getStaticObjectField(cls, "YEAR", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Unit::Unit(const ::java::lang::String & a0, jdouble a1, const ::org::hipparchus::fraction::Fraction & a2, const ::org::hipparchus::fraction::Fraction & a3, const ::org::hipparchus::fraction::Fraction & a4, const ::org::hipparchus::fraction::Fraction & a5, const ::org::hipparchus::fraction::Fraction & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_97dbf822f7252b42, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        Unit Unit::alias(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_alias_6650924024ae0f55], a0.this$));
        }

        Unit Unit::divide(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_divide_d8fc6054bd0fbc8b], a0.this$, a1.this$));
        }

        void Unit::ensureCompatible(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2, const ::java::util::List & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_ensureCompatible_ddf63e191200a7a3], a0.this$, a1.this$, a2, a3.this$);
        }

        jboolean Unit::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        jdouble Unit::fromSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_cd4b8534889fa81f], a0.this$);
        }

        jdouble Unit::fromSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::fraction::Fraction Unit::getAngle() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getAngle_7847eacc50504e7f]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getCurrent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getCurrent_7847eacc50504e7f]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getLength() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getLength_7847eacc50504e7f]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getMass() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getMass_7847eacc50504e7f]));
        }

        ::java::lang::String Unit::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        jdouble Unit::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::fraction::Fraction Unit::getTime() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getTime_7847eacc50504e7f]));
        }

        jint Unit::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        Unit Unit::multiply(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_multiply_d8fc6054bd0fbc8b], a0.this$, a1.this$));
        }

        Unit Unit::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Unit(env->callStaticObjectMethod(cls, mids$[mid_parse_6650924024ae0f55], a0.this$));
        }

        Unit Unit::power(const ::java::lang::String & a0, const ::org::hipparchus::fraction::Fraction & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_power_58cde49db0c58922], a0.this$, a1.this$));
        }

        jboolean Unit::sameDimension(const Unit & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameDimension_f6642efa67a69233], a0.this$);
        }

        Unit Unit::sameDimensionSI() const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sameDimensionSI_196b004fd4585106]));
        }

        Unit Unit::scale(const ::java::lang::String & a0, jdouble a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_scale_33d5a55b3852688e], a0.this$, a1));
        }

        Unit Unit::sqrt(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sqrt_6650924024ae0f55], a0.this$));
        }

        jdouble Unit::toSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_cd4b8534889fa81f], a0.this$);
        }

        jdouble Unit::toSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_0ba5fed9597b693e], a0);
        }

        ::java::lang::String Unit::toString() const
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
  namespace orekit {
    namespace utils {
      namespace units {
        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args);
        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_getAngle(t_Unit *self);
        static PyObject *t_Unit_getCurrent(t_Unit *self);
        static PyObject *t_Unit_getLength(t_Unit *self);
        static PyObject *t_Unit_getMass(t_Unit *self);
        static PyObject *t_Unit_getName(t_Unit *self);
        static PyObject *t_Unit_getScale(t_Unit *self);
        static PyObject *t_Unit_getTime(t_Unit *self);
        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_power(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_sameDimensionSI(t_Unit *self);
        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_get__angle(t_Unit *self, void *data);
        static PyObject *t_Unit_get__current(t_Unit *self, void *data);
        static PyObject *t_Unit_get__length(t_Unit *self, void *data);
        static PyObject *t_Unit_get__mass(t_Unit *self, void *data);
        static PyObject *t_Unit_get__name(t_Unit *self, void *data);
        static PyObject *t_Unit_get__time(t_Unit *self, void *data);
        static PyGetSetDef t_Unit__fields_[] = {
          DECLARE_GET_FIELD(t_Unit, angle),
          DECLARE_GET_FIELD(t_Unit, current),
          DECLARE_GET_FIELD(t_Unit, length),
          DECLARE_GET_FIELD(t_Unit, mass),
          DECLARE_GET_FIELD(t_Unit, name),
          DECLARE_GET_FIELD(t_Unit, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Unit__methods_[] = {
          DECLARE_METHOD(t_Unit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, alias, METH_O),
          DECLARE_METHOD(t_Unit, divide, METH_VARARGS),
          DECLARE_METHOD(t_Unit, ensureCompatible, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Unit, equals, METH_VARARGS),
          DECLARE_METHOD(t_Unit, fromSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getCurrent, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getLength, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getMass, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getName, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getScale, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Unit, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Unit, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Unit, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, power, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sameDimension, METH_O),
          DECLARE_METHOD(t_Unit, sameDimensionSI, METH_NOARGS),
          DECLARE_METHOD(t_Unit, scale, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sqrt, METH_O),
          DECLARE_METHOD(t_Unit, toSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Unit)[] = {
          { Py_tp_methods, t_Unit__methods_ },
          { Py_tp_init, (void *) t_Unit_init_ },
          { Py_tp_getset, t_Unit__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Unit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Unit, t_Unit, Unit);

        void t_Unit::install(PyObject *module)
        {
          installType(&PY_TYPE(Unit), &PY_TYPE_DEF(Unit), module, "Unit", 0);
        }

        void t_Unit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "class_", make_descriptor(Unit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "wrapfn_", make_descriptor(t_Unit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "boxfn_", make_descriptor(boxObject));
          env->getClass(Unit::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "AMPERE", make_descriptor(t_Unit::wrap_Object(*Unit::AMPERE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "BAR", make_descriptor(t_Unit::wrap_Object(*Unit::BAR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "COULOMB", make_descriptor(t_Unit::wrap_Object(*Unit::COULOMB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DAY", make_descriptor(t_Unit::wrap_Object(*Unit::DAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DEGREE", make_descriptor(t_Unit::wrap_Object(*Unit::DEGREE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "EARTH_RADII", make_descriptor(t_Unit::wrap_Object(*Unit::EARTH_RADII)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "GRAM", make_descriptor(t_Unit::wrap_Object(*Unit::GRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HERTZ", make_descriptor(t_Unit::wrap_Object(*Unit::HERTZ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HOUR", make_descriptor(t_Unit::wrap_Object(*Unit::HOUR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "JOULE", make_descriptor(t_Unit::wrap_Object(*Unit::JOULE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOGRAM", make_descriptor(t_Unit::wrap_Object(*Unit::KILOGRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOMETRE", make_descriptor(t_Unit::wrap_Object(*Unit::KILOMETRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "METRE", make_descriptor(t_Unit::wrap_Object(*Unit::METRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NEWTON", make_descriptor(t_Unit::wrap_Object(*Unit::NEWTON)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NONE", make_descriptor(t_Unit::wrap_Object(*Unit::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "OHM", make_descriptor(t_Unit::wrap_Object(*Unit::OHM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ONE", make_descriptor(t_Unit::wrap_Object(*Unit::ONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PASCAL", make_descriptor(t_Unit::wrap_Object(*Unit::PASCAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PERCENT", make_descriptor(t_Unit::wrap_Object(*Unit::PERCENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "RADIAN", make_descriptor(t_Unit::wrap_Object(*Unit::RADIAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "REVOLUTION", make_descriptor(t_Unit::wrap_Object(*Unit::REVOLUTION)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SOLAR_FLUX_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::SOLAR_FLUX_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TESLA", make_descriptor(t_Unit::wrap_Object(*Unit::TESLA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TOTAL_ELECTRON_CONTENT_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::TOTAL_ELECTRON_CONTENT_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "VOLT", make_descriptor(t_Unit::wrap_Object(*Unit::VOLT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "WATT", make_descriptor(t_Unit::wrap_Object(*Unit::WATT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "YEAR", make_descriptor(t_Unit::wrap_Object(*Unit::YEAR)));
        }

        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Unit::initializeClass, 1)))
            return NULL;
          return t_Unit::wrap_Object(Unit(((t_Unit *) arg)->object.this$));
        }
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Unit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::fraction::Fraction a2((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a3((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a4((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a5((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a6((jobject) NULL);
          Unit object((jobject) NULL);

          if (!parseArgs(args, "sDkkkkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Unit(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.alias(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "alias", arg);
          return NULL;
        }

        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.divide(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::java::util::List a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "sKZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::utils::units::Unit::ensureCompatible(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "ensureCompatible", args);
          return NULL;
        }

        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fromSI", args);
          return NULL;
        }

        static PyObject *t_Unit_getAngle(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getCurrent(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getLength(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getMass(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getName(t_Unit *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Unit_getScale(t_Unit *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Unit_getTime(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.multiply(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Unit::parse(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_Unit_power(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.power(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "power", args);
          return NULL;
        }

        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg)
        {
          Unit a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", Unit::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.sameDimension(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameDimension", arg);
          return NULL;
        }

        static PyObject *t_Unit_sameDimensionSI(t_Unit *self)
        {
          Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.sameDimensionSI());
          return t_Unit::wrap_Object(result);
        }

        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.scale(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scale", args);
          return NULL;
        }

        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.sqrt(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", arg);
          return NULL;
        }

        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "toSI", args);
          return NULL;
        }

        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Unit_get__angle(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__current(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__length(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__mass(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__name(t_Unit *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Unit_get__time(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixDecomposer::class$ = NULL;
      jmethodID *MatrixDecomposer::mids$ = NULL;
      bool MatrixDecomposer::live$ = false;

      jclass MatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_4196bcb69ccaa8a4] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::DecompositionSolver MatrixDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_4196bcb69ccaa8a4], a0.this$));
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
      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg);

      static PyMethodDef t_MatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_MatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixDecomposer)[] = {
        { Py_tp_methods, t_MatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixDecomposer, t_MatrixDecomposer, MatrixDecomposer);

      void t_MatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixDecomposer), &PY_TYPE_DEF(MatrixDecomposer), module, "MatrixDecomposer", 0);
      }

      void t_MatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "class_", make_descriptor(MatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "wrapfn_", make_descriptor(t_MatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_MatrixDecomposer::wrap_Object(MatrixDecomposer(((t_MatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawCompensation::class$ = NULL;
      jmethodID *YawCompensation::mids$ = NULL;
      bool YawCompensation::live$ = false;

      jclass YawCompensation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawCompensation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ec530ce6ad455cf6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_5341a8481841f90c] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_455b5c75f9292826] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getYawAngle_0492697497604d82] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYawAngle_a6803988872a6135] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawCompensation::YawCompensation(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_ec530ce6ad455cf6, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawCompensation::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba]));
      }

      ::org::hipparchus::CalculusFieldElement YawCompensation::getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYawAngle_0492697497604d82], a0.this$, a1.this$, a2.this$));
      }

      jdouble YawCompensation::getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYawAngle_a6803988872a6135], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self);
      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data);
      static PyGetSetDef t_YawCompensation__fields_[] = {
        DECLARE_GET_FIELD(t_YawCompensation, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawCompensation__methods_[] = {
        DECLARE_METHOD(t_YawCompensation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getUnderlyingAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_YawCompensation, getYawAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawCompensation)[] = {
        { Py_tp_methods, t_YawCompensation__methods_ },
        { Py_tp_init, (void *) t_YawCompensation_init_ },
        { Py_tp_getset, t_YawCompensation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawCompensation)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawCompensation, t_YawCompensation, YawCompensation);

      void t_YawCompensation::install(PyObject *module)
      {
        installType(&PY_TYPE(YawCompensation), &PY_TYPE_DEF(YawCompensation), module, "YawCompensation", 0);
      }

      void t_YawCompensation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "class_", make_descriptor(YawCompensation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "wrapfn_", make_descriptor(t_YawCompensation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawCompensation::initializeClass, 1)))
          return NULL;
        return t_YawCompensation::wrap_Object(YawCompensation(((t_YawCompensation *) arg)->object.this$));
      }
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawCompensation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        YawCompensation object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, &a0, &a1))
        {
          INT_CALL(object = YawCompensation(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawCompensation), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getYawAngle", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SignalInSpaceAccuracy::class$ = NULL;
            jmethodID *SignalInSpaceAccuracy::mids$ = NULL;
            bool SignalInSpaceAccuracy::live$ = false;

            jclass SignalInSpaceAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SignalInSpaceAccuracy::SignalInSpaceAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jdouble SignalInSpaceAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_456d9a2f64d6b28d]);
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
          namespace common {
            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self);
            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data);
            static PyGetSetDef t_SignalInSpaceAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_SignalInSpaceAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SignalInSpaceAccuracy__methods_[] = {
              DECLARE_METHOD(t_SignalInSpaceAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SignalInSpaceAccuracy)[] = {
              { Py_tp_methods, t_SignalInSpaceAccuracy__methods_ },
              { Py_tp_init, (void *) t_SignalInSpaceAccuracy_init_ },
              { Py_tp_getset, t_SignalInSpaceAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SignalInSpaceAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SignalInSpaceAccuracy, t_SignalInSpaceAccuracy, SignalInSpaceAccuracy);

            void t_SignalInSpaceAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(SignalInSpaceAccuracy), &PY_TYPE_DEF(SignalInSpaceAccuracy), module, "SignalInSpaceAccuracy", 0);
            }

            void t_SignalInSpaceAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "class_", make_descriptor(SignalInSpaceAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "wrapfn_", make_descriptor(t_SignalInSpaceAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SignalInSpaceAccuracy::initializeClass, 1)))
                return NULL;
              return t_SignalInSpaceAccuracy::wrap_Object(SignalInSpaceAccuracy(((t_SignalInSpaceAccuracy *) arg)->object.this$));
            }
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SignalInSpaceAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SignalInSpaceAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SignalInSpaceAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldKeplerianPropagator::class$ = NULL;
        jmethodID *FieldKeplerianPropagator::mids$ = NULL;
        bool FieldKeplerianPropagator::live$ = false;

        jclass FieldKeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldKeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_adb1719b0dda6ffc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_6f95e48bb8bb1403] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_bb11f4dbd2f8fb4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_d8969be32793f087] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_edf76d94987be4ff] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_adb1719b0dda6ffc, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6f95e48bb8bb1403, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_bb11f4dbd2f8fb4f, a0.this$, a1.this$, a2.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d8969be32793f087, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::List FieldKeplerianPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void FieldKeplerianPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
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
        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args);
        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data);
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data);
        static PyGetSetDef t_FieldKeplerianPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldKeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldKeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianPropagator)[] = {
          { Py_tp_methods, t_FieldKeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldKeplerianPropagator_init_ },
          { Py_tp_getset, t_FieldKeplerianPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldKeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldKeplerianPropagator, t_FieldKeplerianPropagator, FieldKeplerianPropagator);
        PyObject *t_FieldKeplerianPropagator::wrap_Object(const FieldKeplerianPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldKeplerianPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldKeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldKeplerianPropagator), &PY_TYPE_DEF(FieldKeplerianPropagator), module, "FieldKeplerianPropagator", 0);
        }

        void t_FieldKeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "class_", make_descriptor(FieldKeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "wrapfn_", make_descriptor(t_FieldKeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldKeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldKeplerianPropagator::wrap_Object(FieldKeplerianPropagator(((t_FieldKeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldKeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Object.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Object::class$ = NULL;
    jmethodID *Object::mids$ = NULL;
    bool Object::live$ = false;

    jclass Object::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Object");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClass_8f66acc08d2a174c] = env->getMethodID(cls, "getClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_notify_7ae3461a92a43152] = env->getMethodID(cls, "notify", "()V");
        mids$[mid_notifyAll_7ae3461a92a43152] = env->getMethodID(cls, "notifyAll", "()V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_wait_7ae3461a92a43152] = env->getMethodID(cls, "wait", "()V");
        mids$[mid_wait_fefb08975c10f0a1] = env->getMethodID(cls, "wait", "(J)V");
        mids$[mid_wait_7198f0f6eb202fc7] = env->getMethodID(cls, "wait", "(JI)V");
        mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Object::Object() : ::JObject(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    jboolean Object::equals(const Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Class Object::getClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getClass_8f66acc08d2a174c]));
    }

    jint Object::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    void Object::notify() const
    {
      env->callVoidMethod(this$, mids$[mid_notify_7ae3461a92a43152]);
    }

    void Object::notifyAll() const
    {
      env->callVoidMethod(this$, mids$[mid_notifyAll_7ae3461a92a43152]);
    }

    ::java::lang::String Object::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void Object::wait() const
    {
      env->callVoidMethod(this$, mids$[mid_wait_7ae3461a92a43152]);
    }

    void Object::wait(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_fefb08975c10f0a1], a0);
    }

    void Object::wait(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_7198f0f6eb202fc7], a0, a1);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Object_equals(t_Object *self, PyObject *arg);
    static PyObject *t_Object_getClass(t_Object *self);
    static PyObject *t_Object_hashCode(t_Object *self);
    static PyObject *t_Object_notify(t_Object *self);
    static PyObject *t_Object_notifyAll(t_Object *self);
    static PyObject *t_Object_toString(t_Object *self);
    static PyObject *t_Object_wait(t_Object *self, PyObject *args);
    static PyObject *t_Object_get__class(t_Object *self, void *data);
    static PyGetSetDef t_Object__fields_[] = {
      DECLARE_GET_FIELD(t_Object, class),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Object__methods_[] = {
      DECLARE_METHOD(t_Object, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, equals, METH_O),
      DECLARE_METHOD(t_Object, getClass, METH_NOARGS),
      DECLARE_METHOD(t_Object, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Object, notify, METH_NOARGS),
      DECLARE_METHOD(t_Object, notifyAll, METH_NOARGS),
      DECLARE_METHOD(t_Object, toString, METH_NOARGS),
      DECLARE_METHOD(t_Object, wait, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Object)[] = {
      { Py_tp_methods, t_Object__methods_ },
      { Py_tp_init, (void *) t_Object_init_ },
      { Py_tp_getset, t_Object__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Object)[] = {
      &PY_TYPE_DEF(JObject),
      NULL
    };

    DEFINE_TYPE(Object, t_Object, Object);

    void t_Object::install(PyObject *module)
    {
      installType(&PY_TYPE(Object), &PY_TYPE_DEF(Object), module, "Object", 0);
    }

    void t_Object::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "class_", make_descriptor(Object::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "wrapfn_", make_descriptor(t_Object::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Object::initializeClass, 1)))
        return NULL;
      return t_Object::wrap_Object(Object(((t_Object *) arg)->object.this$));
    }
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Object::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds)
    {
      Object object((jobject) NULL);

      INT_CALL(object = Object());
      self->object = object;

      return 0;
    }

    static PyObject *t_Object_equals(t_Object *self, PyObject *arg)
    {
      Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Object_getClass(t_Object *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_Object_hashCode(t_Object *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Object_notify(t_Object *self)
    {
      OBJ_CALL(self->object.notify());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_notifyAll(t_Object *self)
    {
      OBJ_CALL(self->object.notifyAll());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_toString(t_Object *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toString());
      return j2p(result);
    }

    static PyObject *t_Object_wait(t_Object *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.wait());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.wait(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(self->object.wait(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "wait", args);
      return NULL;
    }

    static PyObject *t_Object_get__class(t_Object *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParseException::class$ = NULL;
    jmethodID *ParseException::mids$ = NULL;
    bool ParseException::live$ = false;

    jclass ParseException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParseException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_cabf0c57aa55c764] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
        mids$[mid_getErrorOffset_f2f64475e4580546] = env->getMethodID(cls, "getErrorOffset", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParseException::ParseException(const ::java::lang::String & a0, jint a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_cabf0c57aa55c764, a0.this$, a1)) {}

    jint ParseException::getErrorOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorOffset_f2f64475e4580546]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self);
    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data);
    static PyGetSetDef t_ParseException__fields_[] = {
      DECLARE_GET_FIELD(t_ParseException, errorOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParseException__methods_[] = {
      DECLARE_METHOD(t_ParseException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, getErrorOffset, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParseException)[] = {
      { Py_tp_methods, t_ParseException__methods_ },
      { Py_tp_init, (void *) t_ParseException_init_ },
      { Py_tp_getset, t_ParseException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParseException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ParseException, t_ParseException, ParseException);

    void t_ParseException::install(PyObject *module)
    {
      installType(&PY_TYPE(ParseException), &PY_TYPE_DEF(ParseException), module, "ParseException", 0);
    }

    void t_ParseException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "class_", make_descriptor(ParseException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "wrapfn_", make_descriptor(t_ParseException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParseException::initializeClass, 1)))
        return NULL;
      return t_ParseException::wrap_Object(ParseException(((t_ParseException *) arg)->object.this$));
    }
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParseException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;
      ParseException object((jobject) NULL);

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        INT_CALL(object = ParseException(a0, a1));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorOffset());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BivariateGridInterpolator::class$ = NULL;
        jmethodID *BivariateGridInterpolator::mids$ = NULL;
        bool BivariateGridInterpolator::live$ = false;

        jclass BivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_3145d296e90f5aa3] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/BivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::BivariateFunction BivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::BivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3145d296e90f5aa3], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_BivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_BivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BivariateGridInterpolator)[] = {
          { Py_tp_methods, t_BivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BivariateGridInterpolator, t_BivariateGridInterpolator, BivariateGridInterpolator);

        void t_BivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BivariateGridInterpolator), &PY_TYPE_DEF(BivariateGridInterpolator), module, "BivariateGridInterpolator", 0);
        }

        void t_BivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "class_", make_descriptor(BivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "wrapfn_", make_descriptor(t_BivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_BivariateGridInterpolator::wrap_Object(BivariateGridInterpolator(((t_BivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::BivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::t_BivariateFunction::wrap_Object(result);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHmsjPolynomials::class$ = NULL;
            jmethodID *GHmsjPolynomials::mids$ = NULL;
            bool GHmsjPolynomials::live$ = false;

            jclass GHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c702d0586b66367f] = env->getMethodID(cls, "<init>", "(DDDDI)V");
                mids$[mid_getGmsj_17d75a1004cd0f67] = env->getMethodID(cls, "getGmsj", "(III)D");
                mids$[mid_getHmsj_17d75a1004cd0f67] = env->getMethodID(cls, "getHmsj", "(III)D");
                mids$[mid_getdGmsdAlpha_17d75a1004cd0f67] = env->getMethodID(cls, "getdGmsdAlpha", "(III)D");
                mids$[mid_getdGmsdBeta_17d75a1004cd0f67] = env->getMethodID(cls, "getdGmsdBeta", "(III)D");
                mids$[mid_getdGmsdh_17d75a1004cd0f67] = env->getMethodID(cls, "getdGmsdh", "(III)D");
                mids$[mid_getdGmsdk_17d75a1004cd0f67] = env->getMethodID(cls, "getdGmsdk", "(III)D");
                mids$[mid_getdHmsdAlpha_17d75a1004cd0f67] = env->getMethodID(cls, "getdHmsdAlpha", "(III)D");
                mids$[mid_getdHmsdBeta_17d75a1004cd0f67] = env->getMethodID(cls, "getdHmsdBeta", "(III)D");
                mids$[mid_getdHmsdh_17d75a1004cd0f67] = env->getMethodID(cls, "getdHmsdh", "(III)D");
                mids$[mid_getdHmsdk_17d75a1004cd0f67] = env->getMethodID(cls, "getdHmsdk", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHmsjPolynomials::GHmsjPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c702d0586b66367f, a0, a1, a2, a3, a4)) {}

            jdouble GHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGmsj_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHmsj_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdAlpha_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdBeta_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdh_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdk_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdAlpha_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdBeta_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdh_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdk_17d75a1004cd0f67], a0, a1, a2);
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
            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args);

            static PyMethodDef t_GHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHmsjPolynomials)[] = {
              { Py_tp_methods, t_GHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHmsjPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHmsjPolynomials, t_GHmsjPolynomials, GHmsjPolynomials);

            void t_GHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHmsjPolynomials), &PY_TYPE_DEF(GHmsjPolynomials), module, "GHmsjPolynomials", 0);
            }

            void t_GHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "class_", make_descriptor(GHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "wrapfn_", make_descriptor(t_GHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHmsjPolynomials::wrap_Object(GHmsjPolynomials(((t_GHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              GHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = GHmsjPolynomials(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
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
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/Map.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefined::class$ = NULL;
            jmethodID *UserDefined::mids$ = NULL;
            bool UserDefined::live$ = false;
            ::java::lang::String *UserDefined::USER_DEFINED_PREFIX = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_ATTRIBUTE = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_TAG = NULL;

            jclass UserDefined::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefined");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEntry_96073c87872b7a97] = env->getMethodID(cls, "addEntry", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_getParameters_d6753b7055940a54] = env->getMethodID(cls, "getParameters", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                USER_DEFINED_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_PREFIX", "Ljava/lang/String;"));
                USER_DEFINED_XML_ATTRIBUTE = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_ATTRIBUTE", "Ljava/lang/String;"));
                USER_DEFINED_XML_TAG = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_TAG", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefined::UserDefined() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void UserDefined::addEntry(const ::java::lang::String & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEntry_96073c87872b7a97], a0.this$, a1.this$);
            }

            ::java::util::Map UserDefined::getParameters() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParameters_d6753b7055940a54]));
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
            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args);
            static PyObject *t_UserDefined_getParameters(t_UserDefined *self);
            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data);
            static PyGetSetDef t_UserDefined__fields_[] = {
              DECLARE_GET_FIELD(t_UserDefined, parameters),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserDefined__methods_[] = {
              DECLARE_METHOD(t_UserDefined, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, addEntry, METH_VARARGS),
              DECLARE_METHOD(t_UserDefined, getParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefined)[] = {
              { Py_tp_methods, t_UserDefined__methods_ },
              { Py_tp_init, (void *) t_UserDefined_init_ },
              { Py_tp_getset, t_UserDefined__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefined)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(UserDefined, t_UserDefined, UserDefined);

            void t_UserDefined::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefined), &PY_TYPE_DEF(UserDefined), module, "UserDefined", 0);
            }

            void t_UserDefined::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "class_", make_descriptor(UserDefined::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "wrapfn_", make_descriptor(t_UserDefined::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "boxfn_", make_descriptor(boxObject));
              env->getClass(UserDefined::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_PREFIX", make_descriptor(j2p(*UserDefined::USER_DEFINED_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_ATTRIBUTE", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_ATTRIBUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_TAG", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_TAG)));
            }

            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefined::initializeClass, 1)))
                return NULL;
              return t_UserDefined::wrap_Object(UserDefined(((t_UserDefined *) arg)->object.this$));
            }
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefined::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds)
            {
              UserDefined object((jobject) NULL);

              INT_CALL(object = UserDefined());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(self->object.addEntry(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEntry", args);
              return NULL;
            }

            static PyObject *t_UserDefined_getParameters(t_UserDefined *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame::class$ = NULL;
          jmethodID *SubFrame::mids$ = NULL;
          bool SubFrame::live$ = false;
          jint SubFrame::PREAMBLE_VALUE = (jint) 0;

          jclass SubFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkParity_638a6e940edd0ad7] = env->getStaticMethodID(cls, "checkParity", "(II)Z");
              mids$[mid_getAlert_f2f64475e4580546] = env->getMethodID(cls, "getAlert", "()I");
              mids$[mid_getAntiSpoofing_f2f64475e4580546] = env->getMethodID(cls, "getAntiSpoofing", "()I");
              mids$[mid_getId_f2f64475e4580546] = env->getMethodID(cls, "getId", "()I");
              mids$[mid_getIntegrityStatus_f2f64475e4580546] = env->getMethodID(cls, "getIntegrityStatus", "()I");
              mids$[mid_getMessage_f2f64475e4580546] = env->getMethodID(cls, "getMessage", "()I");
              mids$[mid_getPreamble_f2f64475e4580546] = env->getMethodID(cls, "getPreamble", "()I");
              mids$[mid_getTow_f2f64475e4580546] = env->getMethodID(cls, "getTow", "()I");
              mids$[mid_hasParityErrors_e470b6d9e0d979db] = env->getMethodID(cls, "hasParityErrors", "()Z");
              mids$[mid_parse_c589a1a7b473dcad] = env->getStaticMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Lorg/orekit/gnss/rflink/gps/SubFrame;");
              mids$[mid_setField_5a426df612c6b819] = env->getMethodID(cls, "setField", "(IIII[I)V");
              mids$[mid_setField_5b489efbe310775a] = env->getMethodID(cls, "setField", "(IIIIIII[I)V");
              mids$[mid_getField_38565d58479aa24a] = env->getMethodID(cls, "getField", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREAMBLE_VALUE = env->getStaticIntField(cls, "PREAMBLE_VALUE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SubFrame::checkParity(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_checkParity_638a6e940edd0ad7], a0, a1);
          }

          jint SubFrame::getAlert() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlert_f2f64475e4580546]);
          }

          jint SubFrame::getAntiSpoofing() const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_f2f64475e4580546]);
          }

          jint SubFrame::getId() const
          {
            return env->callIntMethod(this$, mids$[mid_getId_f2f64475e4580546]);
          }

          jint SubFrame::getIntegrityStatus() const
          {
            return env->callIntMethod(this$, mids$[mid_getIntegrityStatus_f2f64475e4580546]);
          }

          jint SubFrame::getMessage() const
          {
            return env->callIntMethod(this$, mids$[mid_getMessage_f2f64475e4580546]);
          }

          jint SubFrame::getPreamble() const
          {
            return env->callIntMethod(this$, mids$[mid_getPreamble_f2f64475e4580546]);
          }

          jint SubFrame::getTow() const
          {
            return env->callIntMethod(this$, mids$[mid_getTow_f2f64475e4580546]);
          }

          jboolean SubFrame::hasParityErrors() const
          {
            return env->callBooleanMethod(this$, mids$[mid_hasParityErrors_e470b6d9e0d979db]);
          }

          SubFrame SubFrame::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SubFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_c589a1a7b473dcad], a0.this$));
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
          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args);
          static PyObject *t_SubFrame_getAlert(t_SubFrame *self);
          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self);
          static PyObject *t_SubFrame_getId(t_SubFrame *self);
          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self);
          static PyObject *t_SubFrame_getMessage(t_SubFrame *self);
          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self);
          static PyObject *t_SubFrame_getTow(t_SubFrame *self);
          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self);
          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data);
          static PyGetSetDef t_SubFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame, alert),
            DECLARE_GET_FIELD(t_SubFrame, antiSpoofing),
            DECLARE_GET_FIELD(t_SubFrame, id),
            DECLARE_GET_FIELD(t_SubFrame, integrityStatus),
            DECLARE_GET_FIELD(t_SubFrame, message),
            DECLARE_GET_FIELD(t_SubFrame, preamble),
            DECLARE_GET_FIELD(t_SubFrame, tow),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame__methods_[] = {
            DECLARE_METHOD(t_SubFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, checkParity, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, getAlert, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getAntiSpoofing, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getIntegrityStatus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getMessage, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getPreamble, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getTow, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, hasParityErrors, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame)[] = {
            { Py_tp_methods, t_SubFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubFrame, t_SubFrame, SubFrame);

          void t_SubFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame), &PY_TYPE_DEF(SubFrame), module, "SubFrame", 0);
          }

          void t_SubFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "class_", make_descriptor(SubFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "wrapfn_", make_descriptor(t_SubFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "PREAMBLE_VALUE", make_descriptor(SubFrame::PREAMBLE_VALUE));
          }

          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame::initializeClass, 1)))
              return NULL;
            return t_SubFrame::wrap_Object(SubFrame(((t_SubFrame *) arg)->object.this$));
          }
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::checkParity(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "checkParity", args);
            return NULL;
          }

          static PyObject *t_SubFrame_getAlert(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlert());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getId(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getMessage(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMessage());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPreamble());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getTow(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTow());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.hasParityErrors());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            SubFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::parse(a0));
              return t_SubFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlert());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMessage());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPreamble());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTow());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonBodyShape::class$ = NULL;
      jmethodID *PythonBodyShape::mids$ = NULL;
      bool PythonBodyShape::live$ = false;

      jclass PythonBodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonBodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_9dbbe2475f1298d4] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_4a2d37785a37d918] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_6b6c0bf817ea4492] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_a871d6772929c652] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_transform_2637885099554561] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_d471208f838d1a3d] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBodyShape::PythonBodyShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonBodyShape::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonBodyShape::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonBodyShape::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self);
      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args);
      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data);
      static PyGetSetDef t_PythonBodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBodyShape, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBodyShape__methods_[] = {
        DECLARE_METHOD(t_PythonBodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBodyShape, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBodyShape)[] = {
        { Py_tp_methods, t_PythonBodyShape__methods_ },
        { Py_tp_init, (void *) t_PythonBodyShape_init_ },
        { Py_tp_getset, t_PythonBodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBodyShape)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBodyShape, t_PythonBodyShape, PythonBodyShape);

      void t_PythonBodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBodyShape), &PY_TYPE_DEF(PythonBodyShape), module, "PythonBodyShape", 1);
      }

      void t_PythonBodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "class_", make_descriptor(PythonBodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "wrapfn_", make_descriptor(t_PythonBodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBodyShape::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBodyShape_getBodyFrame0 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint1 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint2 },
          { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBodyShape_projectToGround3 },
          { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_projectToGround4 },
          { "pythonDecRef", "()V", (void *) t_PythonBodyShape_pythonDecRef5 },
          { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonBodyShape_transform6 },
          { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_transform7 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_transform8 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_transform9 },
        };
        env->registerNatives(cls, methods, 10);
      }

      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBodyShape::initializeClass, 1)))
          return NULL;
        return t_PythonBodyShape::wrap_Object(PythonBodyShape(((t_PythonBodyShape *) arg)->object.this$));
      }
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds)
      {
        PythonBodyShape object((jobject) NULL);

        INT_CALL(object = PythonBodyShape());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args)
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

      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyFrame", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AberrationModifier::class$ = NULL;
          jmethodID *AberrationModifier::mids$ = NULL;
          bool AberrationModifier::live$ = false;

          jclass AberrationModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AberrationModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fieldNaturalToProper_6a041d6881c9cde9] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_6a041d6881c9cde9] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_naturalToProper_65b57dcd88b61033] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_properToNatural_65b57dcd88b61033] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AberrationModifier::AberrationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_6a041d6881c9cde9], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_6a041d6881c9cde9], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List AberrationModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void AberrationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void AberrationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_65b57dcd88b61033], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_65b57dcd88b61033], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self);
          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data);
          static PyGetSetDef t_AberrationModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AberrationModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AberrationModifier__methods_[] = {
            DECLARE_METHOD(t_AberrationModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldNaturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldProperToNatural, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AberrationModifier, modify, METH_O),
            DECLARE_METHOD(t_AberrationModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_AberrationModifier, naturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, properToNatural, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AberrationModifier)[] = {
            { Py_tp_methods, t_AberrationModifier__methods_ },
            { Py_tp_init, (void *) t_AberrationModifier_init_ },
            { Py_tp_getset, t_AberrationModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AberrationModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AberrationModifier, t_AberrationModifier, AberrationModifier);

          void t_AberrationModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AberrationModifier), &PY_TYPE_DEF(AberrationModifier), module, "AberrationModifier", 0);
          }

          void t_AberrationModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "class_", make_descriptor(AberrationModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "wrapfn_", make_descriptor(t_AberrationModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AberrationModifier::initializeClass, 1)))
              return NULL;
            return t_AberrationModifier::wrap_Object(AberrationModifier(((t_AberrationModifier *) arg)->object.this$));
          }
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AberrationModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds)
          {
            AberrationModifier object((jobject) NULL);

            INT_CALL(object = AberrationModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldNaturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldProperToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "naturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "properToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
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
              mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
              mids$[mid_getRule_086dd68d091255ed] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_6e0adb7db6561aa0] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_enforceSymmetry_4c337e4c1ec6f647] = env->getMethodID(cls, "enforceSymmetry", "([Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldAbstractRuleFactory::FieldAbstractRuleFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

          ::org::hipparchus::Field FieldAbstractRuleFactory::getField() const
          {
            return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
          }

          ::org::hipparchus::util::Pair FieldAbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_086dd68d091255ed], a0));
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
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorPreservingVisitor::class$ = NULL;
      jmethodID *FieldVectorPreservingVisitor::mids$ = NULL;
      bool FieldVectorPreservingVisitor::live$ = false;

      jclass FieldVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_c80ec2f7d8b5fe87] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_9dd724c9bf212c41] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void FieldVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_c80ec2f7d8b5fe87], a0, a1, a2);
      }

      void FieldVectorPreservingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_9dd724c9bf212c41], a0, a1.this$);
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
      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self);
      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorPreservingVisitor, t_FieldVectorPreservingVisitor, FieldVectorPreservingVisitor);
      PyObject *t_FieldVectorPreservingVisitor::wrap_Object(const FieldVectorPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorPreservingVisitor), &PY_TYPE_DEF(FieldVectorPreservingVisitor), module, "FieldVectorPreservingVisitor", 0);
      }

      void t_FieldVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "class_", make_descriptor(FieldVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "wrapfn_", make_descriptor(t_FieldVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorPreservingVisitor::wrap_Object(FieldVectorPreservingVisitor(((t_FieldVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ShiftingTransformProvider::class$ = NULL;
      jmethodID *ShiftingTransformProvider::mids$ = NULL;
      bool ShiftingTransformProvider::live$ = false;

      jclass ShiftingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ShiftingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7257d660d04722f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_f2f64475e4580546] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_9b4010550f8e9669] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ShiftingTransformProvider::ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7257d660d04722f8, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint ShiftingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_f2f64475e4580546]);
      }

      ::org::orekit::frames::TransformProvider ShiftingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_9b4010550f8e9669]));
      }

      ::org::orekit::frames::StaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      jdouble ShiftingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Transform ShiftingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ShiftingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
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
      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data);
      static PyGetSetDef t_ShiftingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ShiftingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_ShiftingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ShiftingTransformProvider)[] = {
        { Py_tp_methods, t_ShiftingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_ShiftingTransformProvider_init_ },
        { Py_tp_getset, t_ShiftingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ShiftingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ShiftingTransformProvider, t_ShiftingTransformProvider, ShiftingTransformProvider);

      void t_ShiftingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ShiftingTransformProvider), &PY_TYPE_DEF(ShiftingTransformProvider), module, "ShiftingTransformProvider", 0);
      }

      void t_ShiftingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "class_", make_descriptor(ShiftingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "wrapfn_", make_descriptor(t_ShiftingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ShiftingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_ShiftingTransformProvider::wrap_Object(ShiftingTransformProvider(((t_ShiftingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ShiftingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        ShiftingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = ShiftingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseUnivariateSolver::class$ = NULL;
        jmethodID *BaseUnivariateSolver::mids$ = NULL;
        bool BaseUnivariateSolver::live$ = false;

        jclass BaseUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_solve_f359ce7f50720544] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_5e6ae88ca7503288] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_5ec58f5d7d8b216f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint BaseUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jdouble BaseUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_456d9a2f64d6b28d]);
        }

        jdouble BaseUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_f359ce7f50720544], a0, a1.this$, a2);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5e6ae88ca7503288], a0, a1.this$, a2, a3);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5ec58f5d7d8b216f], a0, a1.this$, a2, a3, a4);
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
        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseUnivariateSolver, t_BaseUnivariateSolver, BaseUnivariateSolver);
        PyObject *t_BaseUnivariateSolver::wrap_Object(const BaseUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseUnivariateSolver), &PY_TYPE_DEF(BaseUnivariateSolver), module, "BaseUnivariateSolver", 0);
        }

        void t_BaseUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "class_", make_descriptor(BaseUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "wrapfn_", make_descriptor(t_BaseUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseUnivariateSolver::wrap_Object(BaseUnivariateSolver(((t_BaseUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *ProbabilityOfCollision::class$ = NULL;
        jmethodID *ProbabilityOfCollision::mids$ = NULL;
        bool ProbabilityOfCollision::live$ = false;

        jclass ProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/ProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_12e361efba6cf261] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;)V");
            mids$[mid_init$_1f1355f9b0709b9a] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;Z)V");
            mids$[mid_init$_7b098a345fbc1fda] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Z)V");
            mids$[mid_getLowerLimit_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowerLimit", "()D");
            mids$[mid_getProbabilityOfCollisionMethodName_0090f7797e403f43] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_456d9a2f64d6b28d] = env->getMethodID(cls, "getUpperLimit", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_isMaxProbability_e470b6d9e0d979db] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12e361efba6cf261, a0, a1.this$)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f1355f9b0709b9a, a0, a1.this$, a2)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b098a345fbc1fda, a0, a1, a2, a3.this$, a4)) {}

        jdouble ProbabilityOfCollision::getLowerLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerLimit_456d9a2f64d6b28d]);
        }

        ::java::lang::String ProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_0090f7797e403f43]));
        }

        jdouble ProbabilityOfCollision::getUpperLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperLimit_456d9a2f64d6b28d]);
        }

        jdouble ProbabilityOfCollision::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jboolean ProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_e470b6d9e0d979db]);
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
      namespace metrics {
        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_ProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_ProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProbabilityOfCollision)[] = {
          { Py_tp_methods, t_ProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_ProbabilityOfCollision_init_ },
          { Py_tp_getset, t_ProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProbabilityOfCollision, t_ProbabilityOfCollision, ProbabilityOfCollision);

        void t_ProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(ProbabilityOfCollision), &PY_TYPE_DEF(ProbabilityOfCollision), module, "ProbabilityOfCollision", 0);
        }

        void t_ProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "class_", make_descriptor(ProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "wrapfn_", make_descriptor(t_ProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_ProbabilityOfCollision::wrap_Object(ProbabilityOfCollision(((t_ProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ds", &a0, &a1))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DsZ", &a0, &a1, &a2))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DDDsZ", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummary::class$ = NULL;
        jmethodID *StatisticalSummary::mids$ = NULL;
        bool StatisticalSummary::live$ = false;

        jclass StatisticalSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_e7974e41d2d9a911] = env->getStaticMethodID(cls, "aggregate", "([Lorg/hipparchus/stat/descriptive/StatisticalSummary;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_aggregate_7b8d39505f47e79c] = env->getStaticMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_456d9a2f64d6b28d] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummary StatisticalSummary::aggregate(const JArray< StatisticalSummary > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_e7974e41d2d9a911], a0.this$));
        }

        StatisticalSummary StatisticalSummary::aggregate(const ::java::lang::Iterable & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_7b8d39505f47e79c], a0.this$));
        }

        jdouble StatisticalSummary::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummary::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummary::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jlong StatisticalSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble StatisticalSummary::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummary::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummary::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_456d9a2f64d6b28d]);
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
        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args);
        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data);
        static PyGetSetDef t_StatisticalSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummary, max),
          DECLARE_GET_FIELD(t_StatisticalSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalSummary, min),
          DECLARE_GET_FIELD(t_StatisticalSummary, n),
          DECLARE_GET_FIELD(t_StatisticalSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalSummary, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, aggregate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getVariance, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummary)[] = {
          { Py_tp_methods, t_StatisticalSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummary, t_StatisticalSummary, StatisticalSummary);

        void t_StatisticalSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummary), &PY_TYPE_DEF(StatisticalSummary), module, "StatisticalSummary", 0);
        }

        void t_StatisticalSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "class_", make_descriptor(StatisticalSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "wrapfn_", make_descriptor(t_StatisticalSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummary::wrap_Object(StatisticalSummary(((t_StatisticalSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< StatisticalSummary > a0((jobject) NULL);
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "[k", StatisticalSummary::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "aggregate", args);
          return NULL;
        }

        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagatorBuilder::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagatorBuilder::mids$ = NULL;
          bool GLONASSAnalyticalPropagatorBuilder::live$ = false;

          jclass GLONASSAnalyticalPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_183861cbf0d9945f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;)V");
              mids$[mid_init$_56293db501ad92f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/data/DataContext;)V");
              mids$[mid_attitudeProvider_184750cdd45119eb] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_build_5d976fca9b951997] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
              mids$[mid_dataContext_c0d5aa11f06abeb8] = env->getMethodID(cls, "dataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_ecef_2646c6f81a724dc0] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_eci_2646c6f81a724dc0] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_mass_0c73a5bd5a537990] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_183861cbf0d9945f, a0.this$)) {}

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0, const ::org::orekit::data::DataContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56293db501ad92f7, a0.this$, a1.this$)) {}

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_184750cdd45119eb], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAnalyticalPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_build_5d976fca9b951997]));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::dataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_dataContext_c0d5aa11f06abeb8], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_2646c6f81a724dc0], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_2646c6f81a724dc0], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::mass(jdouble a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_0c73a5bd5a537990], a0));
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
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GLONASSAnalyticalPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, dataContext, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagatorBuilder)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GLONASSAnalyticalPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagatorBuilder, t_GLONASSAnalyticalPropagatorBuilder, GLONASSAnalyticalPropagatorBuilder);

          void t_GLONASSAnalyticalPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagatorBuilder), &PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder), module, "GLONASSAnalyticalPropagatorBuilder", 0);
          }

          void t_GLONASSAnalyticalPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "class_", make_descriptor(GLONASSAnalyticalPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(GLONASSAnalyticalPropagatorBuilder(((t_GLONASSAnalyticalPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0, a1));
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

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.dataContext(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "dataContext", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateRealDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateRealDistribution::mids$ = NULL;
        bool MixtureMultivariateRealDistribution::live$ = false;

        jclass MixtureMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_feee9201706f7cee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_density_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getComponents_a6156df500549a58] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_reseedRandomGenerator_fefb08975c10f0a1] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_7cdc325af0834901] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_feee9201706f7cee, a0.this$, a1.this$)) {}

        jdouble MixtureMultivariateRealDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_f05cb8c6dfd5e0b9], a0.this$);
        }

        ::java::util::List MixtureMultivariateRealDistribution::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_a6156df500549a58]));
        }

        void MixtureMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_fefb08975c10f0a1], a0);
        }

        JArray< jdouble > MixtureMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_7cdc325af0834901]));
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self);
        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, components),
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, of_, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, reseedRandomGenerator, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateRealDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateRealDistribution, t_MixtureMultivariateRealDistribution, MixtureMultivariateRealDistribution);
        PyObject *t_MixtureMultivariateRealDistribution::wrap_Object(const MixtureMultivariateRealDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateRealDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateRealDistribution), &PY_TYPE_DEF(MixtureMultivariateRealDistribution), module, "MixtureMultivariateRealDistribution", 0);
        }

        void t_MixtureMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "class_", make_descriptor(MixtureMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateRealDistribution::wrap_Object(MixtureMultivariateRealDistribution(((t_MixtureMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0, a1));
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

        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "reseedRandomGenerator", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "sample", args, 2);
        }
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttractionEpoch::class$ = NULL;
        jmethodID *ThirdBodyAttractionEpoch::mids$ = NULL;
        bool ThirdBodyAttractionEpoch::live$ = false;

        jclass ThirdBodyAttractionEpoch::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttractionEpoch");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_245df9da6b035d3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_getDerivativesToEpoch_61fa92292630f739] = env->getMethodID(cls, "getDerivativesToEpoch", "(Lorg/orekit/propagation/SpacecraftState;[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttractionEpoch::ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody & a0) : ::org::orekit::forces::gravity::ThirdBodyAttraction(env->newObject(initializeClass, &mids$, mid_init$_245df9da6b035d3e, a0.this$)) {}

        JArray< jdouble > ThirdBodyAttractionEpoch::getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDerivativesToEpoch_61fa92292630f739], a0.this$, a1.this$));
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
        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args);

        static PyMethodDef t_ThirdBodyAttractionEpoch__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, getDerivativesToEpoch, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttractionEpoch)[] = {
          { Py_tp_methods, t_ThirdBodyAttractionEpoch__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttractionEpoch_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttractionEpoch)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::gravity::ThirdBodyAttraction),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttractionEpoch, t_ThirdBodyAttractionEpoch, ThirdBodyAttractionEpoch);

        void t_ThirdBodyAttractionEpoch::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttractionEpoch), &PY_TYPE_DEF(ThirdBodyAttractionEpoch), module, "ThirdBodyAttractionEpoch", 0);
        }

        void t_ThirdBodyAttractionEpoch::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "class_", make_descriptor(ThirdBodyAttractionEpoch::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "wrapfn_", make_descriptor(t_ThirdBodyAttractionEpoch::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttractionEpoch::wrap_Object(ThirdBodyAttractionEpoch(((t_ThirdBodyAttractionEpoch *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttractionEpoch object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttractionEpoch(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDerivativesToEpoch(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivativesToEpoch", args);
          return NULL;
        }
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
            mids$[mid_getFieldStep_f13d40913d2e4807] = env->getMethodID(cls, "getFieldStep", "(Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkStep_77e0f9a1f260e2e5] = env->getMethodID(cls, "checkStep", "(D)V");

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
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "java/util/Comparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractLambdaMethod::class$ = NULL;
          jmethodID *AbstractLambdaMethod::mids$ = NULL;
          bool AbstractLambdaMethod::live$ = false;

          jclass AbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_setComparator_4aed3eb33e58d2f7] = env->getMethodID(cls, "setComparator", "(Ljava/util/Comparator;)V");
              mids$[mid_solveILS_fcede534b3836556] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_permutation_987a5fb872043b12] = env->getMethodID(cls, "permutation", "(ID)V");
              mids$[mid_getSolutionsSize_f2f64475e4580546] = env->getMethodID(cls, "getSolutionsSize", "()I");
              mids$[mid_recoverAmbiguities_d6c5bc318d7188c2] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_inverseDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_reduction_7ae3461a92a43152] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_7ae3461a92a43152] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_getDiagReference_7cdc325af0834901] = env->getMethodID(cls, "getDiagReference", "()[D");
              mids$[mid_getLowReference_7cdc325af0834901] = env->getMethodID(cls, "getLowReference", "()[D");
              mids$[mid_getZInverseTransformationReference_d8ead0d90ce828b0] = env->getMethodID(cls, "getZInverseTransformationReference", "()[I");
              mids$[mid_getDecorrelatedReference_7cdc325af0834901] = env->getMethodID(cls, "getDecorrelatedReference", "()[D");
              mids$[mid_zIndex_d9790ac9eecfe931] = env->getMethodID(cls, "zIndex", "(II)I");
              mids$[mid_lIndex_d9790ac9eecfe931] = env->getMethodID(cls, "lIndex", "(II)I");
              mids$[mid_integerGaussTransformation_8dbc1129a3c2557a] = env->getMethodID(cls, "integerGaussTransformation", "(II)V");
              mids$[mid_getMaxSolution_f2f64475e4580546] = env->getMethodID(cls, "getMaxSolution", "()I");
              mids$[mid_addSolution_bdab183810389f33] = env->getMethodID(cls, "addSolution", "([JD)V");
              mids$[mid_getMaxDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxDistance", "()D");
              mids$[mid_removeSolution_7ae3461a92a43152] = env->getMethodID(cls, "removeSolution", "()V");
              mids$[mid_ltdlDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractLambdaMethod::setComparator(const ::java::util::Comparator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setComparator_4aed3eb33e58d2f7], a0.this$);
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > AbstractLambdaMethod::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_fcede534b3836556], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args);
          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data);
          static PyGetSetDef t_AbstractLambdaMethod__fields_[] = {
            DECLARE_SET_FIELD(t_AbstractLambdaMethod, comparator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_AbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, setComparator, METH_O),
            DECLARE_METHOD(t_AbstractLambdaMethod, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractLambdaMethod)[] = {
            { Py_tp_methods, t_AbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractLambdaMethod, t_AbstractLambdaMethod, AbstractLambdaMethod);

          void t_AbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractLambdaMethod), &PY_TYPE_DEF(AbstractLambdaMethod), module, "AbstractLambdaMethod", 0);
          }

          void t_AbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "class_", make_descriptor(AbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "wrapfn_", make_descriptor(t_AbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_AbstractLambdaMethod::wrap_Object(AbstractLambdaMethod(((t_AbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg)
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(self->object.setComparator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setComparator", arg);
            return NULL;
          }

          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args)
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

          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Comparator value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Comparator::initializeClass, &value))
              {
                INT_CALL(self->object.setComparator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "comparator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *NevilleInterpolator::class$ = NULL;
        jmethodID *NevilleInterpolator::mids$ = NULL;
        bool NevilleInterpolator::live$ = false;

        jclass NevilleInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/NevilleInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_ef08484da4ea0f30] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NevilleInterpolator::NevilleInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm NevilleInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm(env->callObjectMethod(this$, mids$[mid_interpolate_ef08484da4ea0f30], a0.this$, a1.this$));
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
        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args);

        static PyMethodDef t_NevilleInterpolator__methods_[] = {
          DECLARE_METHOD(t_NevilleInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NevilleInterpolator)[] = {
          { Py_tp_methods, t_NevilleInterpolator__methods_ },
          { Py_tp_init, (void *) t_NevilleInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NevilleInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NevilleInterpolator, t_NevilleInterpolator, NevilleInterpolator);

        void t_NevilleInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(NevilleInterpolator), &PY_TYPE_DEF(NevilleInterpolator), module, "NevilleInterpolator", 0);
        }

        void t_NevilleInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "class_", make_descriptor(NevilleInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "wrapfn_", make_descriptor(t_NevilleInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NevilleInterpolator::initializeClass, 1)))
            return NULL;
          return t_NevilleInterpolator::wrap_Object(NevilleInterpolator(((t_NevilleInterpolator *) arg)->object.this$));
        }
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NevilleInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds)
        {
          NevilleInterpolator object((jobject) NULL);

          INT_CALL(object = NevilleInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionLagrangeForm::wrap_Object(result);
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
#include "java/lang/Integer.h"
#include "java/lang/Integer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Integer::class$ = NULL;
    jmethodID *Integer::mids$ = NULL;
    bool Integer::live$ = false;
    jint Integer::BYTES = (jint) 0;
    jint Integer::MAX_VALUE = (jint) 0;
    jint Integer::MIN_VALUE = (jint) 0;
    jint Integer::SIZE = (jint) 0;
    ::java::lang::Class *Integer::TYPE = NULL;

    jclass Integer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Integer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_bitCount_38565d58479aa24a] = env->getStaticMethodID(cls, "bitCount", "(I)I");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_d9790ac9eecfe931] = env->getStaticMethodID(cls, "compare", "(II)I");
        mids$[mid_compareTo_35619c61a180cc8c] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Integer;)I");
        mids$[mid_compareUnsigned_d9790ac9eecfe931] = env->getStaticMethodID(cls, "compareUnsigned", "(II)I");
        mids$[mid_decode_e867d924e1c0010a] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_divideUnsigned_d9790ac9eecfe931] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getInteger_e867d924e1c0010a] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_getInteger_328c096dbda69c03] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
        mids$[mid_getInteger_d9e241c1ea57d589] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_38565d58479aa24a] = env->getStaticMethodID(cls, "hashCode", "(I)I");
        mids$[mid_highestOneBit_38565d58479aa24a] = env->getStaticMethodID(cls, "highestOneBit", "(I)I");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_38565d58479aa24a] = env->getStaticMethodID(cls, "lowestOneBit", "(I)I");
        mids$[mid_max_d9790ac9eecfe931] = env->getStaticMethodID(cls, "max", "(II)I");
        mids$[mid_min_d9790ac9eecfe931] = env->getStaticMethodID(cls, "min", "(II)I");
        mids$[mid_numberOfLeadingZeros_38565d58479aa24a] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(I)I");
        mids$[mid_numberOfTrailingZeros_38565d58479aa24a] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(I)I");
        mids$[mid_parseInt_5d6fce34d596f8f0] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;)I");
        mids$[mid_parseInt_4918d8aef83f928e] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseInt_b980265e5c6eb85b] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_parseUnsignedInt_5d6fce34d596f8f0] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;)I");
        mids$[mid_parseUnsignedInt_4918d8aef83f928e] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseUnsignedInt_b980265e5c6eb85b] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_remainderUnsigned_d9790ac9eecfe931] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
        mids$[mid_reverse_38565d58479aa24a] = env->getStaticMethodID(cls, "reverse", "(I)I");
        mids$[mid_reverseBytes_38565d58479aa24a] = env->getStaticMethodID(cls, "reverseBytes", "(I)I");
        mids$[mid_rotateLeft_d9790ac9eecfe931] = env->getStaticMethodID(cls, "rotateLeft", "(II)I");
        mids$[mid_rotateRight_d9790ac9eecfe931] = env->getStaticMethodID(cls, "rotateRight", "(II)I");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_38565d58479aa24a] = env->getStaticMethodID(cls, "signum", "(I)I");
        mids$[mid_sum_d9790ac9eecfe931] = env->getStaticMethodID(cls, "sum", "(II)I");
        mids$[mid_toBinaryString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toBinaryString", "(I)Ljava/lang/String;");
        mids$[mid_toHexString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toHexString", "(I)Ljava/lang/String;");
        mids$[mid_toOctalString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toOctalString", "(I)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toString_a1a389fa4c946a7a] = env->getStaticMethodID(cls, "toString", "(II)Ljava/lang/String;");
        mids$[mid_toUnsignedLong_3f523e51b2989e1f] = env->getStaticMethodID(cls, "toUnsignedLong", "(I)J");
        mids$[mid_toUnsignedString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toUnsignedString", "(I)Ljava/lang/String;");
        mids$[mid_toUnsignedString_a1a389fa4c946a7a] = env->getStaticMethodID(cls, "toUnsignedString", "(II)Ljava/lang/String;");
        mids$[mid_valueOf_e867d924e1c0010a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_valueOf_959d52bdd1d64155] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/Integer;");
        mids$[mid_valueOf_d9e241c1ea57d589] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticIntField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticIntField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Integer::Integer(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Integer::Integer(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    jint Integer::bitCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_38565d58479aa24a], a0);
    }

    jbyte Integer::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Integer::compare(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d9790ac9eecfe931], a0, a1);
    }

    jint Integer::compareTo(const Integer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_35619c61a180cc8c], a0.this$);
    }

    jint Integer::compareUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_d9790ac9eecfe931], a0, a1);
    }

    Integer Integer::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_decode_e867d924e1c0010a], a0.this$));
    }

    jint Integer::divideUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_d9790ac9eecfe931], a0, a1);
    }

    jdouble Integer::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Integer::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jfloat Integer::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    Integer Integer::getInteger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_e867d924e1c0010a], a0.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, const Integer & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_328c096dbda69c03], a0.this$, a1.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_d9e241c1ea57d589], a0.this$, a1));
    }

    jint Integer::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Integer::hashCode(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_38565d58479aa24a], a0);
    }

    jint Integer::highestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_highestOneBit_38565d58479aa24a], a0);
    }

    jint Integer::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jlong Integer::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jint Integer::lowestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lowestOneBit_38565d58479aa24a], a0);
    }

    jint Integer::max$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_max_d9790ac9eecfe931], a0, a1);
    }

    jint Integer::min$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_min_d9790ac9eecfe931], a0, a1);
    }

    jint Integer::numberOfLeadingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_38565d58479aa24a], a0);
    }

    jint Integer::numberOfTrailingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_38565d58479aa24a], a0);
    }

    jint Integer::parseInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_5d6fce34d596f8f0], a0.this$);
    }

    jint Integer::parseInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_4918d8aef83f928e], a0.this$, a1);
    }

    jint Integer::parseInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_b980265e5c6eb85b], a0.this$, a1, a2, a3);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_5d6fce34d596f8f0], a0.this$);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_4918d8aef83f928e], a0.this$, a1);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_b980265e5c6eb85b], a0.this$, a1, a2, a3);
    }

    jint Integer::remainderUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_d9790ac9eecfe931], a0, a1);
    }

    jint Integer::reverse(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverse_38565d58479aa24a], a0);
    }

    jint Integer::reverseBytes(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverseBytes_38565d58479aa24a], a0);
    }

    jint Integer::rotateLeft(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateLeft_d9790ac9eecfe931], a0, a1);
    }

    jint Integer::rotateRight(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateRight_d9790ac9eecfe931], a0, a1);
    }

    jshort Integer::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    jint Integer::signum(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_38565d58479aa24a], a0);
    }

    jint Integer::sum(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_sum_d9790ac9eecfe931], a0, a1);
    }

    ::java::lang::String Integer::toBinaryString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String Integer::toHexString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String Integer::toOctalString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String Integer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Integer::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String Integer::toString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_a1a389fa4c946a7a], a0, a1));
    }

    jlong Integer::toUnsignedLong(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_3f523e51b2989e1f], a0);
    }

    ::java::lang::String Integer::toUnsignedString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String Integer::toUnsignedString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_a1a389fa4c946a7a], a0, a1));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e867d924e1c0010a], a0.this$));
    }

    Integer Integer::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_959d52bdd1d64155], a0));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d9e241c1ea57d589], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg);
    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Integer__methods_[] = {
      DECLARE_METHOD(t_Integer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, compareTo, METH_O),
      DECLARE_METHOD(t_Integer, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, equals, METH_VARARGS),
      DECLARE_METHOD(t_Integer, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, getInteger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Integer, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseUnsignedInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toString, METH_VARARGS),
      DECLARE_METHOD(t_Integer, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Integer)[] = {
      { Py_tp_methods, t_Integer__methods_ },
      { Py_tp_init, (void *) t_Integer_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Integer)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Integer, t_Integer, Integer);

    void t_Integer::install(PyObject *module)
    {
      installType(&PY_TYPE(Integer), &PY_TYPE_DEF(Integer), module, "Integer", 0);
    }

    void t_Integer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "class_", make_descriptor(Integer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "wrapfn_", make_descriptor(unboxInteger));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "boxfn_", make_descriptor(boxInteger));
      env->getClass(Integer::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "BYTES", make_descriptor(Integer::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MAX_VALUE", make_descriptor(Integer::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MIN_VALUE", make_descriptor(Integer::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "SIZE", make_descriptor(Integer::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Integer::TYPE)));
    }

    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Integer::initializeClass, 1)))
        return NULL;
      return t_Integer::wrap_Object(Integer(((t_Integer *) arg)->object.this$));
    }
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Integer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Integer(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          Integer object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Integer(a0));
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

    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg)
    {
      Integer a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Integer), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Integer result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::decode(a0));
        return t_Integer::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::divideUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer a1((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Integer), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInteger", args);
      return NULL;
    }

    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::highestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::lowestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::max$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::min$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseInt", args);
      return NULL;
    }

    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedInt", args);
      return NULL;
    }

    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::remainderUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverse(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateLeft(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateRight(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::sum(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jlong result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          jint a0;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
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

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_START = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_X = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Y = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Z = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_5922716aa3b7b948] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)Z");
                  mids$[mid_valueOf_cff6263b4bf313a7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");
                  mids$[mid_values_b70e7e7adfb6ca6d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_EPOCH_START = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_START", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_X = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Y = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Z = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_5922716aa3b7b948], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cff6263b4bf313a7], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b70e7e7adfb6ca6d]));
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
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_START", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_X", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Y", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Z", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Z)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$StreamOpener::class$ = NULL;
      jmethodID *DataSource$StreamOpener::mids$ = NULL;
      bool DataSource$StreamOpener::live$ = false;

      jclass DataSource$StreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$StreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_eafcb03912e8859c] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::InputStream DataSource$StreamOpener::openOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openOnce_eafcb03912e8859c]));
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
      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self);

      static PyMethodDef t_DataSource$StreamOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$StreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$StreamOpener)[] = {
        { Py_tp_methods, t_DataSource$StreamOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$StreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$StreamOpener, t_DataSource$StreamOpener, DataSource$StreamOpener);

      void t_DataSource$StreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$StreamOpener), &PY_TYPE_DEF(DataSource$StreamOpener), module, "DataSource$StreamOpener", 0);
      }

      void t_DataSource$StreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "class_", make_descriptor(DataSource$StreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "wrapfn_", make_descriptor(t_DataSource$StreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$StreamOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$StreamOpener::wrap_Object(DataSource$StreamOpener(((t_DataSource$StreamOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$StreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }
    }
  }
}
